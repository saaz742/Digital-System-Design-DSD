`timescale 1ns / 1ps

module memorytest;

	// Inputs
	reg [4:0] addr;
	reg [4:0] addrRe;
	reg [31:0] write_data;
	reg rst;
	reg clk;
	reg MemRead;
	reg MemWrite;
	integer i;

	// Outputs
	wire [31:0] read_data;

	// Instantiate the Unit Under Test (UUT)
	Memory uut (
		.addr(addr),
		.addrRe(addrRe),
		.write_data(write_data), 
		.rst(rst), 
		.clk(clk), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.read_data(read_data)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		addrRe =0;
		write_data = 0;
		rst = 0;
		clk = 0;
		MemRead = 0;
		MemWrite = 0;

		// Wait 100 ns for global reset to finish
		#100;
		MemWrite = 1; 
		//MemRead = 1;
		// Add stimulus here
       for(i=0; i < 4; i=i+1) begin 
				 addr = i;
				write_data =  i;
				#0.001;			
		end

	end
       always #10 clk = ~clk;
endmodule

