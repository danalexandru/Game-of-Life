`timescale 1ns / 1ps


module test;

	// Inputs
	reg clk;
	reg [31:0] rule;

	// Outputs
	wire update_done;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rule(rule), 
		.update_done(update_done)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rule = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
      		 
		// Add stimulus here
		rule = 20162017;
	end
	
	always #200 clk = !clk;
      
endmodule

