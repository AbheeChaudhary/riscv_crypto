# RISC-V CPU Core with Atomic Sensor Security 🛡️

A custom 32-bit RISC-V (RV32I, Ibex-based) processor core featuring hardware-enforced, atomic sensor security. This architecture eliminates sensor data injection and bus-snooping vulnerabilities by ensuring that **raw sensor data never enters the CPU pipeline or memory bus in plaintext**.

*Status: Ongoing Major Project*

---

## 🎯 The Problem: Sensor Ingress Vulnerabilities

In conventional embedded and IoT architectures, external sensor data is fetched over shared system buses (via MMIO, SPI, I2C, or DMA controllers). This introduces critical attack vectors:

1. **System Bus Snooping & Eavesdropping**: Plaintext sensor data travels across shared memory buses (`data_req`, `data_rdata`), exposing sensitive telemetry to malicious hardware probes or compromised peripherals.
2. **Data Injection & Spoofing Attacks**: Malicious actors or compromised firmware can overwrite memory buffers, injecting forged sensor values before processing.
3. **In-Flight Data Corruption**: Soft errors, electrical noise, or unauthorized memory modifications between read and compute stages compromise decision-critical systems (e.g., automotive, medical, industrial IoT).

### Our Solution: Zero-Trust Hardware Ingress
Instead of relying on software-level encryption or vulnerable memory-mapped peripherals, this architecture isolates the sensor interface at the RTL level. Sensor data is fetched via a direct hardware line and **atomically encrypted by an on-chip cryptographic engine before it ever reaches architectural CPU registers or the system bus**.

```
[ External Sensor ]
        │ (Direct Hardware Line — Bypasses System Bus!)
        ▼
┌────────────────────────────────────────────────────────┐
│  Hardware Crypto Engine (ibex_crypto_engine)           │
│  • Burned-in Silicon Key (e.g., 32'hA52C_BC83)          │
│  • Interrupt-Immune Hardware Timer                     │
│  • Single-Cycle Atomic Cryptographic Transformation     │
└───────────────────────────────────┬────────────────────┘
                                    │ (Encrypted Ciphertext Token)
                                    ▼
                        ┌───────────────────────┐
                        │   CPU Register (rd)   │
                        │ (Raw data NEVER here!)│
                        └───────────────────────┘
```

---

## ⚡ Custom Instruction Set Extensions

This architecture defines two proprietary RISC-V instructions implementing an end-to-end secure ingest-to-consume lifecycle:

### 1. `LDSENS rd` — Load Sensor Data (Atomic Ingress)
- **Function**: Atomically samples the external sensor and commits an encrypted ciphertext token directly to destination register `rd`.
- **System Bus Bypass**: Completely avoids the data memory bus (`data_req_o = 0`, `data_we_o = 0`). The fetch occurs over a dedicated, direct hardware path.
- **Atomic Hardware Encryption**: Inside the execution stage (`ibex_crypto_engine.sv`), the raw sensor data is bound with a burned-in hardware silicon key and a cycle-accurate hardware timer.
- **Zero Raw Exposure**: At no point does plaintext sensor data exist in CPU general-purpose registers, pipeline latches, or memory.

### 2. `VRFSENS rd, rs1` — Verify & Decrypt Sensor Data (Consumer Verification)
- **Function**: Software-facing instruction executed by the programmer when the application is ready to consume the sensor data.
- **Hardware Decryption & Authentication**: Takes the encrypted token stored in register `rs1`, routes it back through the cryptographic verification unit, and decrypts the authenticated payload into `rd`.
- **Tamper & Injection Detection**:
  - If an adversary attempts to modify the ciphertext token in memory or registers, or inject forged sensor data, the cryptographic integrity check fails.
  - The hardware immediately flags the tampering (e.g., asserting an integrity exception flag or zeroing invalid output), preventing corrupted or falsified telemetry from altering critical control logic.

---

## 🔒 Architectural Comparison

| Feature | Conventional MMIO / DMA | Our Atomic Security Architecture |
|---|---|---|
| **Data Ingress Path** | Shared system memory bus | Dedicated direct sensor line |
| **System Bus Footprint** | Active (`data_req_o = 1`) — susceptible to bus snooping | **Completely silent (`data_req_o = 0`)** |
| **Raw Data in CPU Registers** | Yes (Plaintext stored in registers) | **Never** (Only encrypted tokens enter registers) |
| **Injection Attack Resistance** | Low (Buffer overwrites & memory poisoning) | **Immune** (Tampered ciphertext fails `VRFSENS`) |
| **Encryption Latency** | Multi-cycle software library overhead | **Single-cycle atomic RTL operation** |
| **Replay Protection** | Software timestamps (vulnerable to clock spoofing) | Hardware-enforced cycle counter |

---

## 🛠️ Verification & Implementation Status

- **Core Base**: Open-source 32-bit Ibex RISC-V core (RV32I).
- **RTL Modifications**:
  - [`ibex_pkg.sv`](file:///Users/abhee12/Documents/riscv_crypto/ibex/rtl/ibex_pkg.sv): Added `ALU_LDSENS` and `ALU_VRFSENS` operations.
  - [`ibex_decoder.sv`](file:///Users/abhee12/Documents/riscv_crypto/ibex/rtl/ibex_decoder.sv): Decodes `OPCODE_CUSTOM0` into `LDSENS` (`funct3 = 000`) and `VRFSENS` (`funct3 = 001`), configuring operand sources and enabling register writeback without security trap exceptions.
  - [`ibex_crypto_engine.sv`](file:///Users/abhee12/Documents/riscv_crypto/ibex/rtl/ibex_crypto_engine.sv): Implements atomic hardware authenticated encryption for `LDSENS` and hardware MAC verification, decryption, output sanitization, and shutdown latching for `VRFSENS`.
  - [`ibex_ex_block.sv`](file:///Users/abhee12/Documents/riscv_crypto/ibex/rtl/ibex_ex_block.sv): Connects operand `rs1` to the crypto engine, overrides `result_ex_o` for both custom operations, and propagates security alerts.
  - [`ibex_core.sv`](file:///Users/abhee12/Documents/riscv_crypto/ibex/rtl/ibex_core.sv): Gating fetch and execution upon tamper detection (`instr_exec = 0`), freezing instruction request, and asserting `alert_major_internal_o`.
  - [`sim/top_sim.sv`](file:///Users/abhee12/Documents/riscv_crypto/sim/top_sim.sv): Full test harness integrating core, instruction ROM sequence, and register file (`ibex_register_file_ff`).

- **3-Phase Verification Methodology**:
  1. **Phase 1: Hardcoded Sensor Input Test**
     - **Input**: Static hardware constant `0x000000FF`.
     - **`LDSENS a0` (0x80)**: Direct sensor sampling encrypts raw reading with hardware silicon key and generates MAC token `0x3ac2bc7c` into `a0`. Raw data never hits the CPU register.
     - **`VRFSENS a1, a0` (0x88)**: Hardware calculates and verifies the MAC tag, decodes authentic plaintext, and writes `0x000000FF` to `a1` (**PASS**).
  2. **Phase 2: Variable Dynamic Sensor Input Test (Mimicking Live Telemetry)**
     - **Input**: Live dynamic transducer telemetry changing in flight to `0x000004A2`.
     - **`LDSENS a0` (0x90)**: Samples variable telemetry and securely encapsulates it into ciphertext token `0x8bb4b821` in `a0`.
     - **`VRFSENS a1, a0` (0x98)**: Verifies cryptographic integrity of live reading and commits decrypted value `0x000004A2` to `a1` (**PASS**).
  3. **Phase 3: Attack Injection & Tamper Detection Test**
     - **`ADDI a0, a0, 1` (0xA0)**: Simulates CPU register injection / memory corruption, altering `a0` from `0x8bb4b821` to `0x8bb4b822`.
     - **`VRFSENS a2, a0` (0xA8)**: The verification engine calculates expected MAC (`0x09fd`) and detects a mismatch against received MAC (`0x2e98`).
     - **System Response**:
       - Sanitizes destination register `a2` to `0x00000000` (blocks rogue exploit payload).
       - Asserts `alert_major_o = 1` and latches hardware `shutdown_o = 1`.
       - Gates pipeline execution (`instr_exec = 0`) and freezes instruction fetch, halting all core processing.
       - Outputs critical console security alert to notify the programmer/operator.
