// Copyright (c) 2026 RISC-V Crypto Project
// Proprietary Atomic Sensor Security Engine

module ibex_crypto_engine (
    input  logic        clk_i,
    input  logic        rst_ni,

    // LDSENS interface
    input  logic        en_ldsens_i,           // enable ldsens: atomic sensor fetch & encrypt
    input  logic [31:0] direct_sensor_data_i,  // direct hardware sensor line

    // VRFSENS interface
    input  logic        en_vrfsens_i,          // enable vrfsens: decrypt & authenticate token
    input  logic [31:0] cipher_token_i,        // ciphertext token from rs1

    // Outputs
    output logic [31:0] secure_payload_o,     // encrypted token to rd for LDSENS
    output logic [31:0] decrypted_data_o,     // decrypted plaintext to rd for VRFSENS
    output logic        tamper_alert_o,       // pulses high on tamper/injection attack
    output logic        shutdown_o            // latches high to halt all CPU processes
);

  // BURNED-IN HARDWARE SILICON KEY (Physical Root of Trust)
  localparam logic [31:0] SILICON_KEY = 32'hA52C_BC83;
  localparam logic [15:0] KEY_UPPER   = SILICON_KEY[31:16]; // 16'hA52C
  localparam logic [15:0] KEY_LOWER   = SILICON_KEY[15:0];  // 16'hBC83

  // Cycle-accurate hardware timer (immune to software tampering)
  logic [31:0] hw_timer_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      hw_timer_q <= 32'b0;
    end else begin
      hw_timer_q <= hw_timer_q + 1'b1;
    end
  end

  // Cryptographic Non-Linear MAC Function (Hardware Authentication Tag Generator)
  function automatic logic [15:0] compute_mac(input logic [15:0] data);
    logic [31:0] mixed;
    // Galois golden-ratio non-linear mixing with non-zero salt and silicon key
    mixed = (data ^ KEY_LOWER ^ 16'hA55A) * 16'h9E37 + 32'h0000_5A1F;
    compute_mac = mixed[31:16] ^ mixed[15:0] ^ KEY_UPPER;
  endfunction

  // --------------------------------------------------------------------------
  // 1. ATOMIC INGRESS ENCRYPTION (LDSENS)
  // --------------------------------------------------------------------------
  logic [15:0] ldsens_mac;
  assign ldsens_mac = compute_mac(direct_sensor_data_i[15:0]);

  always_comb begin
    secure_payload_o = 32'b0;
    if (en_ldsens_i) begin
      // Scrambled token: upper 16 bits = encrypted MAC tag, lower 16 bits = encrypted data
      secure_payload_o = { (ldsens_mac ^ KEY_UPPER), (direct_sensor_data_i[15:0] ^ KEY_LOWER) };
    end
  end

  // --------------------------------------------------------------------------
  // 2. VERIFICATION & DECRYPTION (VRFSENS)
  // --------------------------------------------------------------------------
  logic [15:0] rec_data;
  logic [15:0] rec_mac;
  logic [15:0] exp_mac;
  logic        auth_match;
  logic        is_tampered;

  assign rec_data    = cipher_token_i[15:0] ^ KEY_LOWER;
  assign rec_mac     = cipher_token_i[31:16] ^ KEY_UPPER;
  assign exp_mac     = compute_mac(rec_data);
  assign auth_match  = (rec_mac == exp_mac);
  assign is_tampered = en_vrfsens_i & (~auth_match);

  always_comb begin
    decrypted_data_o = 32'b0;
    tamper_alert_o   = 1'b0;

    if (en_vrfsens_i) begin
      if (auth_match) begin
        // Authenticated: deliver decrypted sensor data to CPU register
        decrypted_data_o = {16'h0000, rec_data};
        tamper_alert_o   = 1'b0;
      end else begin
        // Tamper detected! Sanitize output to 0 to prevent malicious exploit
        decrypted_data_o = 32'h0000_0000;
        tamper_alert_o   = 1'b1;
      end
    end
  end

  // --------------------------------------------------------------------------
  // 3. HARDWARE SYSTEM SHUTDOWN & ALERT LATCH
  // --------------------------------------------------------------------------
  logic shutdown_latched_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      shutdown_latched_q <= 1'b0;
    end else if (is_tampered) begin
      shutdown_latched_q <= 1'b1;
    end
  end

  assign shutdown_o = shutdown_latched_q | is_tampered;

  // Real-time console security alert notification for programmers
  always_ff @(posedge clk_i) begin
    if (rst_ni && is_tampered && !shutdown_latched_q) begin
      $display("");
      $display("==========================================================================");
      $display(" [CRITICAL HARDWARE SECURITY ALERT] SENSOR DATA COMPROMISED!");
      $display(" Attack detected: Injected ciphertext or spoofed sensor data in register.");
      $display(" Cipher Token: 0x%08h | Expected MAC: 0x%04h | Received MAC: 0x%04h",
               cipher_token_i, exp_mac, rec_mac);
      $display(" Action taken: CPU processes halted. System locked down to prevent exploit.");
      $display("==========================================================================");
      $display("");
    end
  end

endmodule
