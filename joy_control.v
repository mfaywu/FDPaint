// When sndRec is 1, gets 5 bytes from joy_interface and outputs them in DOUT
module joy_control(
	input CLK,
	input sndRec,
	input BUSY,
	input [7:0] RxData,
    output SS,
	output reg getByte,
	output reg [39:0] DOUT
);

reg SS = 1;
reg [2:0] pState = 0;
reg [2:0] byteCnt = 0;
reg [39:0] tmpSR = 0;

always @(negedge CLK)
begin	
	case(pState)
		// Idle
		0 : begin
            SS <= 1;
			getByte <= 0;
			tmpSR <= 0;
			byteCnt <= 0;
			pState <= sndRec ? 1 : 0;						
		end

		// Init
		1 : begin
            SS <= 0;
			getByte <= 1;
			if(BUSY)
			begin
				pState <= 2;
				byteCnt <= byteCnt + 1;
			end
			else
				pState <= 1;
										
		end

		// Wait
		2 : begin
            SS <= 0;
			getByte <= 0;
			pState <= BUSY ? 2 : 3;
		end

		// Check
		3 : begin
            SS <= 0;
			getByte <= 0;
			tmpSR <= {tmpSR[31:0], RxData};
			pState <= byteCnt == 5 ? 4 : 1;
		end

		// Done
		4 : begin
            SS <= 1;
			getByte <= 0;
			DOUT[39:0] <= tmpSR[39:0];
			pState <= sndRec ? 4 : 0;
		end
	endcase
end

endmodule
