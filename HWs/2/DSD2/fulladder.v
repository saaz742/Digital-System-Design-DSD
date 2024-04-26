`timescale 1ns / 1ps

module fulladder(

	input a,b,cin,
	output s,cout
	);
	
	wire w;
	wire [1:0] c;
	
	halfadder h1 (a,b,w,c[0]);
	halfadder h2 (w,cin,s,c[1]);
	or(cout,c[0],c[1]);
	
endmodule
