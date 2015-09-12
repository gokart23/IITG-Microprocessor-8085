`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:44:32 03/18/2015
// Design Name:   program_counter
// Module Name:   B:/Acad/Course Material/Semester 4/CS223/cpu_trial_one/test_pc.v
// Project Name:  cpu_trial_one
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: program_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_pc;

	// Inputs
	reg clk;
	reg reset;
	reg en;
	reg en_read;
	reg inc;
	reg ld_high;
	reg [7:0] data_bus;

	// Outputs
	wire [15:0] addr_bus;

	// Instantiate the Unit Under Test (UUT)
	program_counter uut (
		.clk(clk), 
		.reset(reset), 
		.en(en), 
		.en_read(en_read), 
		.inc(inc), 
		.ld_high(ld_high), 
		.addr_bus(addr_bus), 
		.data_bus(data_bus)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		en = 0;
		en_read = 0;
		inc = 0;
		ld_high = 0;
		data_bus = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

