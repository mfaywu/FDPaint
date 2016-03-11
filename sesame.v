`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:31 02/18/2016 
// Design Name: 
// Module Name:    sesame 
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
module sesame(
    input clk,
    input [7:0] sw,
    input MISO,
    input btnS,
    input btnU, // 
    input btnD,
    input btnR,
    input btnL,
	output SS,	
	output MOSI,
	output SCLK,
    output reg [2:0] vgaRed,
    output reg [2:0] vgaGreen,
    output reg [2:1] vgaBlue,
    output reg Hsync,
    output reg Vsync
    );
        
	 // Constants
	 wire [9:0] drawAreaWidth = 240;
	 wire [9:0] drawAreaHeight = 240;
	 wire [9:0] drawAreaStartX = 152 + 80;
	 wire [9:0] drawAreaStartY = 37;
	 wire [7:0] COLOR_BLACK = 0;
	 wire [7:0] COLOR_WHITE = 8'b11111111;
	 wire [7:0] COLOR_PURPLE = 8'b10000010;
     wire [7:0] COLOR_PINK = 8'b11101110;
     
	 
/******************************/ 
/*********VGA Driver***********/
/******************************/


	 reg clk_vga = 0;
    reg counter_vga = 0;
    reg [9:0] vgaX = 0; // VGA Driver's horizontal scanning position, 0-799
	 reg [9:0] vgaY = 0; // VGA Driver's vertical scanning position, 0-524
	 wire [9:0] vgaDrawX; // current X position in the draw screen for VGA Driver's scan position, 0-screenWidth
	 assign vgaDrawX = (vgaX - drawAreaStartX) / 2;
	 wire [9:0] vgaDrawY; // current Y position in the draw screen for VGA Driver's scan position, 0-screenHeight
	 assign vgaDrawY = (vgaY - drawAreaStartY) / 2;
	 
	 // True if VGA scanning position is in the drawing region
	 wire inDrawArea;
	 assign inDrawArea = (vgaX >= drawAreaStartX && vgaX < (drawAreaStartX + (drawAreaWidth*2)) &&
								vgaY >= drawAreaStartY && vgaY < (drawAreaStartY + (drawAreaHeight*2)));
	 // True if VGA scanning position is in the screen region
	 wire inScreenArea;
	 assign inScreenArea = (vgaX >= 152 && vgaX < 792 && vgaY >= 37 && vgaY < 517);
	 
	 reg [9:0] cursorX = 100; 
	 reg [9:0] cursorY = 100; 

    always @(posedge clk)
    begin
        counter_vga <= ~counter_vga;
    end
    
    always @(posedge counter_vga)
    begin
        clk_vga <= ~clk_vga;
    end
    
    // Update Hsync, Vsync, and vga X/Y
    always @(posedge clk_vga)
    begin
        Hsync <= ~(vgaX >= 8 && vgaX < 104);
    	Vsync <= ~(vgaY >= 2 && vgaY < 4);
		vgaX <= vgaX == 799 ? 0 : vgaX + 1; // vgaX goes 0-799 on clk
		if (vgaX == 799)
			vgaY <= vgaY == 524 ? 0 : vgaY + 1; // vgaY goes 0-524 on ~HSync and clk
    end
	 
	 // Update VGA RGB
	 always @(posedge clk_vga)
	 begin
		// Feed RGB black when outside screen area
		if (~inScreenArea)
		begin
			update_VGA_RGB(COLOR_BLACK);
		end
		
		// When in the draw area, use the pixel map
		else if (inDrawArea)
		begin   
            //drawing stamp cursor
            if (current_tool == TOOL_STAMP && vgaDrawX >= cursorX - 15 && vgaDrawX < cursorX + 15 && vgaDrawY >= cursorY - 15 && vgaDrawY < cursorY + 15)
            begin
                stamp_menu_addr <= (vgaDrawX - (cursorX - 15)) + ((vgaDrawY - (cursorY - 15)) * 30);
                if (stamp_menu_pixel != 8'b00000011 )
                    update_VGA_RGB(stamp_menu_pixel);
                else 
                begin
                    pmop_addr <= vgaDrawX + vgaDrawY * drawAreaWidth;
                    update_VGA_RGB(pmop_pixel);
                end
            end
            
            else if (vgaDrawX >= cursorX - pencil_size / 2 && vgaDrawX < cursorX + pencil_size / 2 && vgaDrawY >= cursorY - pencil_size / 2 && vgaDrawY < cursorY + pencil_size / 2)
            begin
                if (vgaDrawX >= cursorX - (pencil_size-1) / 2 && vgaDrawX < cursorX + (pencil_size-1) / 2 && vgaDrawY >= cursorY - (pencil_size-1) / 2 && vgaDrawY < cursorY + (pencil_size-1) / 2)
                    update_VGA_RGB(current_tool == TOOL_PENCIL ? sw : COLOR_PINK);
                else
                    update_VGA_RGB(COLOR_BLACK);
            end
            
			else
			begin
				pmop_addr <= vgaDrawX + vgaDrawY * drawAreaWidth;
				update_VGA_RGB(pmop_pixel);
			end
		end
		        
		// When outside the draw area, have other logic (draw menus?)
		else 
		begin
			// Possibly use vgaX and vgaY to draw menus, with another module to get menu pixels?
			update_VGA_RGB(sw);
		end
	 end
	 
	 // Take in 8 bit color and set VGA colors accordingly
	 task update_VGA_RGB;
		input [7:0] color;
		begin
			vgaRed = color[7:5];
			vgaGreen = color[4:2];
			vgaBlue = color[1:0];
		end
	 endtask
     
/******************************/ 
/*******Cursor Control*********/
/******************************/

     reg [31:0] counter_cursor = 0;
     reg clk_cursor = 0; // Ticks at 30 Hz
     always @(posedge clk)
     begin
        counter_cursor <= (counter_cursor == 1666666) ? 0 : counter_cursor + 1;
        if (counter_cursor == 0)
            clk_cursor <= ~clk_cursor;    
     end
     always @(posedge clk_cursor)
     begin
        if (joystick_x < 150 && cursorX < drawAreaWidth - 2) cursorX <= cursorX + 2;
        else if (joystick_x < 400 && cursorX < drawAreaWidth - 1) cursorX <= cursorX + 1;
        if (joystick_x > 850 && cursorX > 2) cursorX <= cursorX - 2;
        else if (joystick_x > 600 && cursorX > 1) cursorX <= cursorX - 1;
            
        if (joystick_y < 150 && cursorY > 2) cursorY <= cursorY - 2;
        else if (joystick_y < 400 && cursorY > 1) cursorY <= cursorY - 1;
        if (joystick_y > 850 && cursorY < drawAreaHeight - 2) cursorY <= cursorY + 2;
        else if (joystick_y > 600 && cursorY < drawAreaHeight - 1) cursorY <= cursorY + 1;
     end
     

     
/******************************/ 
/********Tool Control**********/
/******************************/
     
     
     reg [5:0] current_tool = 2;
     reg [5:0] old_tool = 0; // Used to go back to current_tool after resetting screen
     wire [5:0] TOOL_NONE = 0;
     wire [5:0] TOOL_RESET = 1;
     wire [5:0] TOOL_PENCIL = 2;
     wire [5:0] TOOL_ERASER = 3;
     wire [5:0] TOOL_STAMP = 4;
     
     reg is_resetting = 0;
     reg is_tool_on = 0;

     reg [31:0] reset_counter = 0;
     
     reg [31:0] pencil_size = 4;
     reg [31:0] pencil_x = 0;
     reg [31:0] pencil_y = 0;

     reg [31:0] stamp_size = 30;
     reg [31:0] stamp_x = 0;
     reg [31:0] stamp_y = 0;
	 reg [31:0] current_stamp = 4;
     reg [31:0] counter_debounce = 0;
     wire clk_debounce;
     assign clk_debounce = counter_debounce == 166666;
     always @(posedge clk)
     begin
        counter_debounce <= counter_debounce == 166666 ? 0 : counter_debounce + 1; 
     end
     
     reg btnRdb = 0;
     reg btnLdb = 0;
     reg btnUdb = 0;
     reg btnDdb = 0;
     always @(posedge clk_debounce)
     begin
        btnRdb <= btnR;
        btnLdb <= btnL;
        btnUdb <= btnU;
        btnDdb <= btnD;
     end
     
     wire comboLR = btnRdb || btnLdb;
     always @(posedge comboLR)
     begin
        if (btnRdb)
        begin
            if (current_tool == TOOL_STAMP)
            begin
                current_stamp <= current_stamp == 6 ? 0 :current_stamp + 1;
            end
            else
            begin
                case (pencil_size)
                2: pencil_size <= 4;
                4: pencil_size <= 6;
                endcase
            end
        end
        if (btnLdb)
        begin
            if (current_tool == TOOL_STAMP)
            begin
                current_stamp <= current_stamp == 0 ? 6 :current_stamp - 1;
            end
            else
            begin
                case (pencil_size)
                4: pencil_size <= 2;
                6: pencil_size <= 4;
                endcase
            end
        end
     end
        
     wire comboUD = btnUdb || btnDdb;
     always @(posedge comboUD)
     begin
        if (btnUdb) 
        begin
            if (current_tool == TOOL_PENCIL) current_tool <= TOOL_STAMP;
            if (current_tool == TOOL_ERASER) current_tool <= TOOL_PENCIL;
            if (current_tool == TOOL_STAMP) current_tool <= TOOL_ERASER;
        end 
        if (btnDdb)
        begin
            if (current_tool == TOOL_PENCIL) current_tool <= TOOL_ERASER;
            if (current_tool == TOOL_ERASER) current_tool <= TOOL_STAMP;
            if (current_tool == TOOL_STAMP) current_tool <= TOOL_PENCIL;
        end
     end
     
     
     always @(posedge clk)
     begin
        // Set current tool
        if (btnS && current_tool != TOOL_RESET)
        begin 
            is_resetting <= 1;
            reset_counter <= 0;
        end
        else if (joystick_btn_left)
            is_tool_on <= 1;

        if (is_resetting)
        begin
            if (reset_counter == drawAreaWidth * drawAreaHeight)
            begin
                is_resetting <= 0;
                wea <= 0;
            end
            else
            begin
                wea <= 1;
                dina <= COLOR_WHITE;
                pmin_addr <= reset_counter;
                reset_counter <= reset_counter + 1;
            end
            
        end
        if (is_tool_on && current_tool == TOOL_PENCIL)
        begin
            if (pencil_y == pencil_size)
            begin
                is_tool_on <= 0;
                wea <= 0;
                pencil_x <= 0;
                pencil_y <= 0;
            end
            else
            begin
                wea <= 1;
                dina <= sw;
                pmin_addr <= (cursorX + pencil_x - pencil_size / 2) + (cursorY + pencil_y - pencil_size / 2) * drawAreaWidth;
                if (pencil_x == pencil_size - 1)
                begin
                    pencil_x <= 0;
                    pencil_y <= pencil_y + 1;
                end
                else
                    pencil_x <= pencil_x + 1;
            end
        end
        if (is_tool_on && current_tool == TOOL_ERASER)
        begin
            if (pencil_y == pencil_size)
            begin
                is_tool_on <= 0;
                wea <= 0;
                pencil_x <= 0;
                pencil_y <= 0;
            end
            else
            begin
                wea <= 1;
                dina <= COLOR_WHITE;
                pmin_addr <= (cursorX + pencil_x - pencil_size / 2) + (cursorY + pencil_y - pencil_size / 2) * drawAreaWidth;
                if (pencil_x == pencil_size - 1)
                begin
                    pencil_x <= 0;
                    pencil_y <= pencil_y + 1;
                end
                else
                    pencil_x <= pencil_x + 1;
            end
        end
        if (is_tool_on && current_tool == TOOL_STAMP)
        begin
            if (stamp_y == stamp_size)
            begin
                is_tool_on <= 0;
                wea <= 0;
                stamp_x <= 0;
                stamp_y <= 0;
                stamp_draw_addr <= 0;
            end
            else
            begin
                stamp_draw_addr <= (stamp_x + (stamp_y * stamp_size));
                wea <= stamp_draw_pixel != 8'b00000011;
                dina <= stamp_draw_pixel;
                pmin_addr <= (cursorX + stamp_x - stamp_size / 2) + (cursorY + stamp_y - stamp_size / 2) * drawAreaWidth; 
                if (stamp_x == stamp_size) 
                begin
                    stamp_x <= 0;
                    stamp_y <= stamp_y + 1;
                end
                else
                    stamp_x <= stamp_x + 1;
            end
        end
     end

   
	 
/******************************/ 
/*********Pixel Map ***********/
/******************************/

	 reg [15:0] pmop_addr;
	 wire [7:0] pmop_pixel;
     reg wea;
     reg [15 : 0] pmin_addr;
     reg [7 : 0] dina;
     pixel_map pixel_map(
        .clka(clk), // input clka
        .wea(wea), // input [0 : 0] wea
        .addra(pmin_addr), // input [15 : 0] addra
        .dina(dina), // input [7 : 0] dina
        .clkb(clk), // input clkb
        .addrb(pmop_addr), // input [15 : 0] addrb
        .doutb(pmop_pixel) // output [7 : 0] doutb
    );
	
	 
    reg [9:0] stamp_draw_addr = 0;
    wire [7:0] stamp_draw_pixel;
	reg [9:0] stamp_menu_addr = 0;
	wire [7:0] stamp_menu_pixel;
	
	assign stamp_draw_pixel =
		current_stamp == 0 ? stamp_draw_pixel_0 :
		current_stamp == 1 ? stamp_draw_pixel_1 :
		current_stamp == 2 ? stamp_draw_pixel_2 :
		current_stamp == 3 ? stamp_draw_pixel_3 :
		current_stamp == 4 ? stamp_draw_pixel_4 :
		current_stamp == 5 ? stamp_draw_pixel_5 : stamp_draw_pixel_6;  

     assign stamp_menu_pixel = 
		current_stamp == 0 ? stamp_menu_pixel_0 :
		current_stamp == 1 ? stamp_menu_pixel_1 :
		current_stamp == 2 ? stamp_menu_pixel_2 :
		current_stamp == 3 ? stamp_menu_pixel_3 :
		current_stamp == 4 ? stamp_menu_pixel_4 :
		current_stamp == 5 ? stamp_menu_pixel_5 : stamp_menu_pixel_6;  
	 
	 wire [7:0] stamp_draw_pixel_0;
	 wire [7:0] stamp_menu_pixel_0;
	 stamp_matt stamp0 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_0), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_0) // output [7 : 0] doutb
	 );
	 
	 wire [7:0] stamp_draw_pixel_1;
	 wire [7:0] stamp_menu_pixel_1;
	 stamp_penguin stamp1 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_1), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_1) // output [7 : 0] doutb
	 );
	 
	 wire [7:0] stamp_draw_pixel_2;
	 wire [7:0] stamp_menu_pixel_2;
	 stamp_jellyfish stamp2 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_2), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_2) // output [7 : 0] doutb
	 );
	 
	 wire [7:0] stamp_draw_pixel_3;
	 wire [7:0] stamp_menu_pixel_3;
	 stamp_cat stamp3 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_3), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_3) // output [7 : 0] doutb
	 );
	 
	 wire [7:0] stamp_draw_pixel_4;
	 wire [7:0] stamp_menu_pixel_4;
	 stamp_taco stamp4 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_4), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_4) // output [7 : 0] doutb
	 );
	 
	 wire [7:0] stamp_draw_pixel_5;
	 wire [7:0] stamp_menu_pixel_5;
	 stamp_mushroom stamp5 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_5), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_5) // output [7 : 0] doutb
	 );

	 wire [7:0] stamp_draw_pixel_6;
	 wire [7:0] stamp_menu_pixel_6;
	 stamp_heart stamp6 (
		.clka(clk), // input clka
		.addra(stamp_draw_addr), // input [9 : 0] addra
		.douta(stamp_draw_pixel_6), // output [7 : 0] douta
		.clkb(clk), // input clkb
		.addrb(stamp_menu_addr), // input [9 : 0] addrb
		.doutb(stamp_menu_pixel_6) // output [7 : 0] doutb
	 );  

	 wire [7:0] stamp_menu_pixel_7;
	stamp_pencil stamp7 (
	  .clka(clk), // input clka
	  .addra(stamp_menu_addr), // input [9 : 0] addra
	  .douta(stamp_menu_pixel_7) // output [7 : 0] douta
	);
	
	 wire [7:0] stamp_menu_pixel_8;
	stamp_eraser stamp8 (
	  .clka(clk), // input clka
	  .addra(stamp_menu_addr), // input [9 : 0] addra
	  .douta(stamp_menu_pixel_8) // output [7 : 0] douta
	);	 
/******************************/ 
/*********Joystick  ***********/
/******************************/

	wire SS;						// Active low
	wire MOSI;					// Data transfer from master to slave
	wire SCLK;					// Serial clock that controls communication

	assign MOSI = 0;

	// Data read from PmodJSTK
	wire [39:0] jstkData;

    wire [9 : 0] joystick_y = {jstkData[9:8], jstkData[23:16]};
    wire [9 : 0] joystick_x = {jstkData[25:24], jstkData[39:32]};
    wire joystick_btn_right = jstkData[1];
    wire joystick_btn_left = jstkData[2];

	joy joy(
		.CLK(clk),
		.sndRec(clk_cursor),
		.MISO(MISO),
		.SS(SS),
		.SCLK(SCLK),
		.DOUT(jstkData)
	);

endmodule
