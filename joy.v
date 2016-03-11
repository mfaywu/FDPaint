// When sndRec is 1, grabs 5 bytes of info from the joystick
module joy(
	input CLK, //100MHz
	input sndRec,
	input MISO,
	output SS,
    output SCLK,
	output [39:0] DOUT
);

wire getByte;
wire [7:0] RxData;
wire BUSY;

		
reg clk_joy; // Ticks at 66.6kHz
reg [31:0] counter_joy = 0;
always @(posedge CLK)
begin
	counter_joy <= (counter_joy == 750) ? 0 : counter_joy + 1;
	if (counter_joy == 0)
		clk_joy <= ~clk_joy;    
end

joy_control jc(
	.CLK(clk_joy),
	.sndRec(sndRec),
	.BUSY(BUSY),
	.RxData(RxData),
    .SS(SS),
	.getByte(getByte),
	.DOUT(DOUT)
);

joy_interface ji(
	.CLK(clk_joy),
	.sndRec(getByte),
	.MISO(MISO),
    .SCLK(SCLK),
	.BUSY(BUSY),
	.DOUT(RxData)
);



endmodule
