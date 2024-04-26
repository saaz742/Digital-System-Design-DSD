`timescale 1ns / 1ps

module test;

	// Inputs
	reg uart_clock;
	reg serial_data;
	reg rst;

	// Outputs
	wire [7:0] out;
	wire par;

	// Instantiate the Unit Under Test (UUT)
	receive uut (
		.uart_clock(uart_clock), 
		.serial_data(serial_data), 
		.rst(rst), 
		.out(out), 
		.par(par)
	);

	initial begin
		// Initialize Inputs
		uart_clock = 0;
		serial_data = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      serial_data = 0; //start
			#20
		serial_data = 1;
			#20
		serial_data = 1; 
			#20
		serial_data = 1; 
			#20
		serial_data = 0; 
			#20
		serial_data = 1; 
			#20
		serial_data = 1; 
			#20
		serial_data = 1; 
			#20
		serial_data = 1; 
			#20
		serial_data = 0; //parity
			#20
		serial_data = 1; //stop
			#20
		serial_data = 0; //start and next num
		// Add stimulus here

	end
      always uart_clock = #5 ~uart_clock;
endmodule

