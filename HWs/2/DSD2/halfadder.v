module halfadder(
	
	input a,b, 
	output reg s,c
	);

always@(a or b)begin

	 if (a == 0)begin
			if(b == 0)begin	
				#1 c = 0;
				#1 s = 0;
			end
			else if(b==1) begin
				#1 c = 0;
				#1 s = 1;
			end
		end


	else if (a == 1)begin
			if(b == 1)begin
				#1 c = 1;
				#1 s = 0;
			end
			else if(b==0) begin
				#1 c = 0;
				#1 s = 1;
			end
		end
end

endmodule
