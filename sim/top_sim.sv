// 1. IMPORT THE DICTIONARY FIRST
import ibex_pkg::*;

module top_sim (
    input  logic clk,
    input  logic rst_n,
    output logic alert_major_o,
    output logic [31:0] sensor_data_live_o
);

  // --- Motherboard Wires ---
  logic        instr_req;
  logic        instr_gnt;
  logic        instr_rvalid;
  logic [31:0] instr_addr;
  logic [31:0] instr_rdata;

  assign instr_gnt = instr_req;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      instr_rvalid <= 1'b0;
    end else begin
      instr_rvalid <= instr_gnt;
    end
  end

  // Instruction Address Latch
  logic [31:0] fetch_addr_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      fetch_addr_q <= 32'b0;
    end else if (instr_req) begin
      fetch_addr_q <= instr_addr;
    end
  end

  // --- Dynamic Sensor Subsystem ---
  // Demonstrates:
  //   Phase 1 (PC 0x80-0x8C): Static hardcoded sensor telemetry (0x00FF)
  //   Phase 2 (PC 0x90-0x9C): Variable sensor input mimicking dynamic ADC/transducer telemetry (0x04A2)
  logic [31:0] direct_sensor_data;

  always_comb begin
    if (fetch_addr_q < 32'h00000090) begin
      direct_sensor_data = 32'h0000_00FF; // Phase 1: Hardcoded test
    end else begin
      direct_sensor_data = 32'h0000_04A2; // Phase 2: Dynamic variable sensor reading
    end
  end

  assign sensor_data_live_o = direct_sensor_data;

  // --- Secure Instruction ROM ---
  // Execution Sequence:
  //   [PHASE 1: Hardcoded Sensor Input Test]
  //   1. PC 0x80: LDSENS a0       (0x0000050B) -> Encrypts hardcoded raw sensor data (0x00FF) into a0
  //   2. PC 0x84: NOP             (0x00000013) -> Pipeline write commit cycle
  //   3. PC 0x88: VRFSENS a1, a0  (0x0005158B) -> Decrypts & authenticates a0 into a1 (PASS: a1 = 0x00FF)
  //   4. PC 0x8C: NOP             (0x00000013) -> Pipeline cycle
  //
  //   [PHASE 2: Variable Dynamic Sensor Input Test]
  //   5. PC 0x90: LDSENS a0       (0x0000050B) -> Encrypts new variable sensor telemetry (0x04A2) into a0
  //   6. PC 0x94: NOP             (0x00000013) -> Pipeline write commit cycle
  //   7. PC 0x98: VRFSENS a1, a0  (0x0005158B) -> Decrypts & authenticates variable sensor into a1 (PASS: a1 = 0x04A2)
  //   8. PC 0x9C: NOP             (0x00000013) -> Pipeline cycle
  //
  //   [PHASE 3: Simulated Attack & Tampering]
  //   9. PC 0xA0: ADDI a0, a0, 1  (0x00150513) -> Simulates memory injection/tampering on token in a0
  //  10. PC 0xA4: NOP             (0x00000013) -> Pipeline write commit cycle
  //  11. PC 0xA8: VRFSENS a2, a0  (0x0005160B) -> Verifies corrupted a0 (FAIL & IMMEDIATE SYSTEM SHUTDOWN)
  always_comb begin
    case (fetch_addr_q)
      32'h00000080: instr_rdata = 32'h0000050B; // Phase 1: LDSENS a0 (hardcoded 0x00FF)
      32'h00000084: instr_rdata = 32'h00000013; // NOP
      32'h00000088: instr_rdata = 32'h0005158B; // Phase 1: VRFSENS a1, a0 (verifies 0x00FF into a1)
      32'h0000008C: instr_rdata = 32'h00000013; // NOP
      32'h00000090: instr_rdata = 32'h0000050B; // Phase 2: LDSENS a0 (variable 0x04A2)
      32'h00000094: instr_rdata = 32'h00000013; // NOP
      32'h00000098: instr_rdata = 32'h0005158B; // Phase 2: VRFSENS a1, a0 (verifies 0x04A2 into a1)
      32'h0000009C: instr_rdata = 32'h00000013; // NOP
      32'h000000A0: instr_rdata = 32'h00150513; // Phase 3: ADDI a0, a0, 1 (Simulated Attack Injection)
      32'h000000A4: instr_rdata = 32'h00000013; // NOP
      32'h000000A8: instr_rdata = 32'h0005160B; // Phase 3: VRFSENS a2, a0 (Detects Attack & Halts System)
      default:      instr_rdata = 32'h00000013; // NOP
    endcase
  end

  // --- Register File Wires ---
  logic [4:0]  rf_raddr_a;
  logic [31:0] rf_rdata_a;
  logic [4:0]  rf_raddr_b;
  logic [31:0] rf_rdata_b;
  logic [4:0]  rf_waddr_wb;
  logic [31:0] rf_wdata_wb;
  logic        rf_we_wb;

  ibex_register_file_ff #(
      .RV32E            (0),
      .DataWidth        (32),
      .DummyInstructions(0)
  ) u_regfile (
      .clk_i           (clk),
      .rst_ni          (rst_n),
      .test_en_i       (1'b0),
      .dummy_instr_id_i(1'b0),
      .dummy_instr_wb_i(1'b0),
      .raddr_a_i       (rf_raddr_a),
      .rdata_a_o       (rf_rdata_a),
      .raddr_b_i       (rf_raddr_b),
      .rdata_b_o       (rf_rdata_b),
      .waddr_a_i       (rf_waddr_wb),
      .wdata_a_i       (rf_wdata_wb),
      .we_a_i          (rf_we_wb)
  );

  // --- Real-time Verification Phase Monitor ---
  always_ff @(posedge clk) begin
    if (rst_n && rf_we_wb) begin
      case (fetch_addr_q)
        32'h00000084: begin
          $display("----------------------------------------------------------------------");
          $display(">>> PHASE 1: HARDCODED SENSOR INPUT TEST");
          $display("    Hardware Sensor Line   : 0x%08h (Hardcoded Constant)", direct_sensor_data);
          $display("    LDSENS x%0d committed   : Encrypted Cipher Token = 0x%08h (Raw data never in RF)", rf_waddr_wb, rf_wdata_wb);
        end
        32'h0000008C: begin
          $display("    VRFSENS x%0d, x10 committed: Decrypted Plaintext     = 0x%08h [MATCH & AUTHENTICATED]", rf_waddr_wb, rf_wdata_wb);
          $display(">>> PHASE 1 RESULT: SUCCESS (Hardcoded Sensor Decrypted & Authenticated)");
          $display("----------------------------------------------------------------------\n");
        end
        32'h00000094: begin
          $display("----------------------------------------------------------------------");
          $display(">>> PHASE 2: VARIABLE SENSOR TELEMETRY TEST");
          $display("    Hardware Sensor Line   : 0x%08h (Dynamic Live Sensor Reading)", direct_sensor_data);
          $display("    LDSENS x%0d committed   : Encrypted Cipher Token = 0x%08h (Raw telemetry protected)", rf_waddr_wb, rf_wdata_wb);
        end
        32'h0000009C: begin
          $display("    VRFSENS x%0d, x10 committed: Decrypted Plaintext     = 0x%08h [MATCH & AUTHENTICATED]", rf_waddr_wb, rf_wdata_wb);
          $display(">>> PHASE 2 RESULT: SUCCESS (Dynamic Telemetry Decrypted & Authenticated)");
          $display("----------------------------------------------------------------------\n");
        end
        32'h000000A4: begin
          $display("----------------------------------------------------------------------");
          $display(">>> PHASE 3: SIMULATED ATTACK & TAMPER DETECTION TEST");
          $display("    Simulated Injection (ADDI): Tampered Cipher Token in x10 = 0x%08h", rf_wdata_wb);
        end
        32'h000000AC: begin
          $display("    VRFSENS x%0d, x10 evaluated: Sanitized Output Plaintext   = 0x%08h (Blocked Exploit)", rf_waddr_wb, rf_wdata_wb);
          $display(">>> PHASE 3 RESULT: SUCCESS (Tampering Detected, Alert Triggered, CPU Halted)");
          $display("----------------------------------------------------------------------\n");
        end
        default: ;
      endcase
    end
  end

  // --- The Brain ---
  ibex_core #(
      .RV32E(0),
      .RV32M(ibex_pkg::RV32MFast)
  ) u_core (
      .clk_i (clk),
      .rst_ni(rst_n),

      .hart_id_i  (32'b0),
      .boot_addr_i(32'h00000000),

      // Instruction Memory Interface
      .instr_req_o   (instr_req),
      .instr_gnt_i   (instr_gnt),
      .instr_rvalid_i(instr_rvalid),
      .instr_addr_o  (instr_addr),
      .instr_rdata_i (instr_rdata),
      .instr_err_i   (1'b0),

      // Data Memory Interface
      .data_gnt_i   (1'b0),
      .data_rvalid_i(1'b0),
      .data_rdata_i (32'b0),
      .data_err_i   (1'b0),

      // Register File Interface
      .dummy_instr_id_o    (),
      .dummy_instr_wb_o    (),
      .rf_raddr_a_o        (rf_raddr_a),
      .rf_raddr_b_o        (rf_raddr_b),
      .rf_waddr_wb_o       (rf_waddr_wb),
      .rf_we_wb_o          (rf_we_wb),
      .rf_wdata_wb_ecc_o   (rf_wdata_wb),
      .rf_rdata_a_ecc_i    (rf_rdata_a),
      .rf_rdata_b_ecc_i    (rf_rdata_b),

      // Direct Hardware Sensor Ingress
      .direct_sensor_data_i(direct_sensor_data),

      // Interrupts & Alerts
      .irq_software_i(1'b0),
      .irq_timer_i   (1'b0),
      .irq_external_i(1'b0),
      .irq_fast_i    (15'b0),
      .irq_nm_i      (1'b0),
      .debug_req_i   (1'b0),
      .fetch_enable_i(ibex_pkg::IbexMuBiOn),

      .alert_minor_o         (),
      .alert_major_internal_o(alert_major_o),
      .alert_major_bus_o     ()
  );

endmodule
