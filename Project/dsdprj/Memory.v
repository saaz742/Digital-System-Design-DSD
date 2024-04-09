`timescale 1ns / 1ps

module Memory#(parameter n = 32)(
	input [4:0] addrRe,
	input [4:0] addr,
	input [31:0] write_data,
	input rst,clk, MemRead, MemWrite,
	output  [31:0] read_data
	);
	reg [31:0] Memory [n-1:0];
	integer k;
	
	assign read_data = (MemRead==1) ? Memory[addrRe] : 'bx;

	always @* begin
	//read_data = (MemRead==1) ? Memory[addr] : 'bx;
		if (rst == 1) begin
				for (k=0; k<n; k=k+1) begin
					Memory[k] = 0;
				end
			end
		else if (MemWrite==1) Memory[addr] = write_data;
	end
endmodule

