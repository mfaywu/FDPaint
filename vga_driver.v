`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:54 02/16/2016 
// Design Name: 
// Module Name:    vga_driver 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_driver(
	input clk, //25MHz clock
	input [640*480*8-1:0] mem_flat,
    output reg [2:0] vgaRed,
    output reg [2:0] vgaGreen,
    output reg [2:1] vgaBlue,
    output reg Hsync,
    output reg Vsync
    );
	 
	reg [2:0] red;
    reg [2:0] green;
    reg [2:1] blue;
    reg [9:0] hCount = 0;
	reg [9:0] vCount = 0;
	wire [2:0] inDisplayArea;
     
     
	assign inDisplayArea = (hCount >= 152 && hCount < 792 && vCount >= 37 && vCount < 517) ? 3'b111 : 0;
	
	 

	 always @(posedge clk)
	 begin
		Hsync <= ~(hCount >= 8 && hCount < 104);
		Vsync <= ~(vCount >= 2 && vCount < 4);
		hCount <= hCount == 799 ? 0 : hCount + 1; //hCount goes 0-799 on clk
		if (hCount == 799)
			vCount <= vCount == 524 ? 0 : vCount + 1; //vCount goes 0-524 on ~HSync and clk
		
		vgaRed <= 3 & inDisplayArea;
		vgaGreen <= 0 & inDisplayArea;
		vgaBlue <= 3 & inDisplayArea;
		/*
		vgaRed <= mem[hCount][vCount][7:5];// & inDisplayArea;
		vgaGreen <= mem[hCount][vCount][4:2];// & inDisplayArea;
		vgaBlue <= mem[hCount][vCount][1:0];// & inDisplayArea;	
		*/
	 end
     

endmodule