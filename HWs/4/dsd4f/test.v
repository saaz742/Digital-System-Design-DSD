module test;
    reg clk;
	 reg rst;
	 reg load_seed;
	 reg [17:1]rand;
    wire num;
	 
    LFSR #(8) lfsr8(.num(num),.load_seed(load_seed),.clk(clk),.rand(rand));
    LFSR #(17) lfsr17(.num(num),.load_seed(load_seed),.clk(clk),.rand(rand));
    
	 initial begin
        clk = 0;
		  rand = $random;
        $monitor("%gns   feedback = %d lfsr_reg = %b  lfsr_out = %d", $time, test.lfsr17.feedback, test.lfsr17.num, test.lfsr17.num[1]);
		  load_seed = 1;
        #20 load_seed = 0;
		  #600
		  rst =0;
		  #20 rst = 1;
		  rand = $random;
		  $monitor("%gns   feedback = %d lfsr_reg = %b  lfsr_out = %d", $time, test.lfsr8.feedback, test.lfsr8.num, test.lfsr8.num[1]);
		  load_seed = 1;
        #20 load_seed = 0;   
    end 
        always #(10) clk = ~clk; 

endmodule
 