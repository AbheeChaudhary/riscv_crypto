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

## 🛠️ Verification & Current Implementation

- **Core Base**: Open-source 32-bit Ibex RISC-V core.
- **RTL Modifications**:
  - `ibex_decoder.sv`: Decodes custom instruction opcodes, binds custom ALU operations, and enables register writeback without triggering illegal instruction security traps.
  - `ibex_ex_block.sv`: Integrates the dedicated crypto engine and provides a multiplexer override path directly into `result_ex_o`.
  - `ibex_crypto_engine.sv`: Dedicated cryptographic core with silicon key mixing and temporal freshness tracking.
- **Simulation Verification**: Fully verified in Verilator and GTKWave. Waveforms confirm that during instruction execution:
  - `rf_we_wb_o = 1` and `rf_wdata_wb_o` correctly receives the encrypted payload.
  - `data_req_o` and `data_we_o` remain flat `0`, verifying bus isolation.
