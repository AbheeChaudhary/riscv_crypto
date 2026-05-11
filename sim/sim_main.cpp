#include "Vtop_sim.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  Vtop_sim *top = new Vtop_sim;
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("waveform.vcd");

  for (int time = 0; time < 40; time++) {
    top->clk = time % 2;
    if (time < 4)
      top->rst_n = 0;
    else
      top->rst_n = 1;

    top->eval();
    tfp->dump(time);
  }

  tfp->close();
  delete top;
  return 0;
}
