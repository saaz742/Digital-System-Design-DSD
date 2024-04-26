`timescale 1ns/1ps

module ProceduralAssignment;

reg [7:0] operand1, operand2;
reg [8:0] adderOutPath1, adderOutPath2, adderOutPath3, adderOutPath4;
reg [8:0] intermediateReg1, intermediateReg2, intermediateReg3, outReg1, outReg2, outReg3;
reg clock;


//adder #1
always @*
   #15 adderOutPath1 = operand1 + operand2;

//adder #2 
always @*
   adderOutPath2 <= #15 (operand1 + operand2);

//adder #3
always @*
   adderOutPath3 = #15 (operand1 + operand2);

//adder #4
always @*
   #15 adderOutPath4 <= operand1 + operand2;

//non-blocking in sequential
always @(posedge clock)
   begin
      intermediateReg1 <= adderOutPath1;
      outReg1          <= intermediateReg1;
   end

//blocking in sequential
always @(posedge clock)
   begin
      intermediateReg2 = adderOutPath1;
      outReg2          = intermediateReg2;
   end

//blocking in sequential (order changed)
always @(posedge clock)
   begin
      outReg3          = intermediateReg3;
      intermediateReg3 = adderOutPath1;
   end

//generating clock for the test bench
initial
   begin
      clock = 0;
      forever clock = #3.5 ~clock;
   end


//applying inputs and monitoring the results
initial
   begin
      $monitor ("@", $time, "ns:    Path 1 Adder = %d ", adderOutPath1, "Path 2 Adder = %d ", adderOutPath2);
      operand1 = 7'd0;
	  operand2 = 7'd0;
	  #20;
	  operand1 = 7'd2;
	  operand2 = 7'd3;
	  #9;
	  operand1 = 7'd4;
	  operand2 = 7'd5;
	  #10
	  operand1 = 7'd3;
	  operand2 = 7'd4;
   end


endmodule
