`timescale 1ns / 1ps

module fulladder8test;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg  cin;
	
	// Outputs
	wire [7:0] s;
	wire cout;
	integer i =0;

	// Instantiate the Unit Under Test (UUT)
	fulladder8 uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		#100;
      a = 1;
		b = 0;
		cin = 1; 

		#100;
      a = 2;
		b = 3;
		cin = 1; 
		
		#100;
      a = 20;
		b = 13;
		cin = 0; 
 
		
		for(i=0; i<9; i = i+1)begin
		#100
		a = $random;
		b = $random;
		cin = $random;
		end
		
	end 
      
endmodule

