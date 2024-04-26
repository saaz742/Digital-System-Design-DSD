module LFSR #(parameter n = 17)(
	input clk,
	input rst,
	input load_seed,
	input [n:1]rand,
	output reg [n:1]num
	);
	wire feedback;

//x^8 + x^6 + x^5 + x^1 + 1
//x^17 + x^3 + 1	
	generate
		if(n == 8 || n == 17)begin
			if (n == 8) begin
				assign feedback = num[8] ^ num[6]^ num[5]^ num[1]; 
			end
			else if (n == 17) begin
			   assign feedback = num[3] ^ num[17];

			end
		
			always @(posedge clk or negedge rst)begin
				if(~rst) begin
					num <= 0;
				end 
				else if(load_seed)begin
					num <= rand;		
				end 
				else begin
					num[n] <= feedback;
					num[n-1:1] <= num[n:2];
				end
			end
		end 
	endgenerate
	
endmodule
