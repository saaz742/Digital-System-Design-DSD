`timescale 1ns / 1ps

module fulladdertest;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire s;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	fulladder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		a = 0;
		b = 0;
		cin = 0;

		#100;
      a = 1;
		b = 1;
		cin = 0;
		
		#100;
      a = 1;
		b = 1;
		cin = 1;
			
		#100;
      a = 0;
		b = 1;
		cin = 0;
		
		#100;
      a = 0;
		b = 1;
		cin = 1;
		
		#100;
      a = 0;
		b = 0;
		cin = 1;
		
	end
      
endmodule

