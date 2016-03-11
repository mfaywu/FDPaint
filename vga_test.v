`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:01:32 02/18/2016
// Design Name:   vga_driver
// Module Name:   C:/Users/152/Documents/Fay_Daniel_152A/FDPaint/vga_test.v
// Project Name:  FDPaint
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga_driver
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vga_test;

	// Inputs
	reg clk;

	// Outputs
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [2:1] vgaBlue;
	wire Hsync;
	wire Vsync;

	// Instantiate the Unit Under Test (UUT)
	vga_driver uut (
		.clk(clk), 
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

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        

	end
      
endmodule

