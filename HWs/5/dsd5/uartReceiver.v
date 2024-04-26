`timescale 1ns / 1ps
`include "states.v"

module receive #(parameter n = 8 , parameter b =2)(
    input uart_clock,
    input serial_data,
	 input rst,
	 
    output reg [n-1:0] out,
	 output reg par 
);
//1 fard => par 1
//1 joz => par 0
reg [1:0] state;
reg [3:0] cnt;
reg [1:0] baud;
reg [n-1:0] data;
reg part;
integer i;

initial begin
    state = `IDLE;
	 out = 0;
	 data = 0;
end

always @(posedge uart_clock or posedge rst or negedge serial_data) begin
	 if (rst) begin 
		 data = 0;
		 state = `IDLE;
	 end 
	 else if (uart_clock) begin
		 if(state == `NEXT) begin
			  if (baud == b) begin
						data = data << 1;
						data[0] =serial_data;
						cnt = cnt + 1 ;
						baud = 0;
				end
        end
        baud = baud + 1;
         if (cnt == n+5) begin
				part = 0;
				par =1;				 
				for( i = 0 ; i < n ;i = i+1) begin
					part = part^data[i];
				end
				if (serial_data == part) begin
					par = 0;
				end
				state = `IDLE;
				out = data;
        end
		end
	 else if (!serial_data ) begin
			if(state == `IDLE) begin
					  cnt = 0;
					  baud = 0;
					  state = `NEXT;
		  end
    end
end

endmodule
