`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:44:49 02/18/2016
// Design Name:   sesame
// Module Name:   C:/Users/152/Documents/Fay_Daniel_152A/FDPaint/sesame_test.v
// Project Name:  FDPaint
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sesame
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sesame_test;

	// Inputs
	reg clk;
	reg [7:0] sw;

	// Outputs
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [2:1] vgaBlue;
	wire Hsync;
	wire Vsync;

	// Instantiate the Unit Under Test (UUT)
	sesame uut (
		.clk(clk), 
		.sw(sw),
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue), 
		.Hsync(Hsync), 
		.Vsync(Vsync)
	);
    
    always #1 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		sw = 0;
		
		// Wait 100 ns for global reset to finish
		#100;

		// Add stimulus here

	end
      
endmodule

