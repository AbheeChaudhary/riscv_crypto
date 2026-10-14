// 1. IMPORT THE DICTIONARY FIRST
import ibex_pkg::*;

module top_sim (
    input logic clk,
    input logic rst_n
);

  // --- Motherboard Wires ---
  logic        instr_req;
  logic        instr_gnt;
  logic        instr_rvalid;
  logic [31:0] instr_rdata;

  // --- The Hot-Wire ---
  assign instr_gnt   = instr_req;
  assign instr_rdata = 32'h0000050B;  // LDSENS a0, zero


  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      instr_rvalid <= 1'b0;
    end else begin
      instr_rvalid <= instr_gnt;
    end
  end

  // --- The Brain ---
  ibex_core #(
      .RV32E(0),
      .RV32M(ibex_pkg::RV32MFast)
  ) u_core (
      .clk_i (clk),
      .rst_ni(rst_n),

      // .test_en_i has been REMOVED by lowRISC in this version
      .hart_id_i  (32'b0),
      .boot_addr_i(32'h00000000),

      // Instruction Memory Interface
      .instr_req_o   (instr_req),
      .instr_gnt_i   (instr_gnt),
      .instr_rvalid_i(instr_rvalid),
      .instr_rdata_i (instr_rdata),
      .instr_err_i   (1'b0),

      // Data Memory Interface
      .data_gnt_i   (1'b0),
      .data_rvalid_i(1'b0),
      .data_rdata_i (32'b0),
      .data_err_i   (1'b0),

      // Interrupts
      .irq_software_i(1'b0),
      .irq_timer_i   (1'b0),
      .irq_external_i(1'b0),
      .irq_fast_i    (15'b0),
      .irq_nm_i      (1'b0),
      .debug_req_i   (1'b0),
      .fetch_enable_i(ibex_pkg::IbexMuBiOn)

  );

endmodule



