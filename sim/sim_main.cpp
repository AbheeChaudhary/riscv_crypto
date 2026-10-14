#include "Vtop_sim.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  Vtop_sim *top = new Vtop_sim;
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("waveform.vcd");

  std::cout << "======================================================================\n";
  std::cout << " [SIMULATION START] RISC-V Atomic Sensor Security Core Verification\n";
  std::cout << " Test Plan:\n";
  std::cout << "   PHASE 1 (Hardcoded Input):\n";
  std::cout << "     - Fixed Input : 0x000000FF\n";
  std::cout << "     - 0x80: LDSENS a0       -> Atomic Hardware Encryption\n";
  std::cout << "     - 0x88: VRFSENS a1, a0  -> Decrypts & Verifies authentic data into a1\n\n";
  std::cout << "   PHASE 2 (Variable Dynamic Sensor Input):\n";
  std::cout << "     - Dynamic Telemetry : 0x000004A2 (Sensor value changes in flight)\n";
  std::cout << "     - 0x90: LDSENS a0       -> Samples & Encrypts varying telemetry\n";
  std::cout << "     - 0x98: VRFSENS a1, a0  -> Decrypts & Verifies varying telemetry into a1\n\n";
  std::cout << "   PHASE 3 (Attack Injection & Tamper Detection):\n";
  std::cout << "     - 0xA0: ADDI a0, a0, 1  -> Simulates memory corruption / CPU injection\n";
  std::cout << "     - 0xA8: VRFSENS a2, a0  -> Detects attack, locks down core, halts processes\n";
  std::cout << "======================================================================\n\n";

  bool alert_reported = false;

  for (int time = 0; time < 160; time++) {
    top->clk = time % 2;
    if (time < 4)
      top->rst_n = 0;
    else
      top->rst_n = 1;

    top->eval();
    tfp->dump(time);

    if (top->alert_major_o && top->rst_n && !alert_reported) {
      std::cout << "[C++ MONITOR @ time=" << time << "ps] alert_major_o asserted! Core lockup confirmed.\n";
      alert_reported = true;
    }
  }

  std::cout << "\n[SIMULATION COMPLETE] VCD waveform generated: waveform.vcd\n";

  tfp->close();
  delete top;
  return 0;
}
