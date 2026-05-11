// This is the core engine that provides hardware acceleration
//
//
//
//
//






module ibex_crypto_engine (
    input logic clk_i,
    input logic rst_ni,


    input logic        en_ldsens_i,          // enable ldsens so cpu knows data is being fetched 
    input logic [31:0] direct_sensor_data_i,

    output logic [31:0] secure_payload_o

);

  // BURNED SILICON KEY 

  localparam logic [31:0] SILICON_KEY = 32'hA52C_BC83;


  // cycle accurate timer : immune to software interrupts 

  logic [31:0] hw_timer_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      hw_timer_q <= 32'b0;
    end else begin
      hw_timer_q <= hw_timer_q + 1'b1;
    end
  end


  // ATOMIC HASHING LOGIC (COMBINATIONAL) -> XOR SHIFT HASHING
  //


  always_comb begin
    secure_payload_o = 32'b0;

    if (en_ldsens_i) begin
      secure_payload_o = direct_sensor_data_i ^ SILICON_KEY ^ hw_timer_q;
    end
  end

endmodule


