// When sndRec is 1, it begins reading bits from the joystick and to output a single byte
module joy_interface(
	input CLK, //66.67kHz
	input sndRec,
	input MISO,
    output SCLK,
	output reg BUSY,
	output [7:0] DOUT
);

reg [4:0] bitCount;
reg [7:0] rSR = 0;
reg [7:0] wSR = 0;
reg [1:0] pState = 0;

reg CE = 0;
assign SCLK = (CE == 1'b1) ? CLK : 1'b0;
assign DOUT = rSR;
	

//Write to read-shift-register
always @(posedge CLK)
begin
	if (pState == 2 && CE)
		rSR <= {rSR[6:0], MISO};
end

always @(negedge CLK)
begin
	case (pState)		
		// Idle
		0 : begin
			CE <= 0;
			BUSY <= 0;
			bitCount <= 0;
			pState <= sndRec ? 1 : 0;
		end

		// Init
		1 : begin
			BUSY <= 1;
			bitCount <= 0;
			CE <= 0;
			pState <= 2;
		end

		// RxTx
		2 : begin
			BUSY <= 1;
			bitCount <= bitCount + 1;
			CE <= (bitCount < 8);
			pState <= bitCount == 8 ? 3 : 2;
		end

		// Done
		3 : begin
			CE <= 0;
			BUSY <= 1;
			bitCount <= 0;
			pState <= 0;
		end
	endcase
end

endmodule