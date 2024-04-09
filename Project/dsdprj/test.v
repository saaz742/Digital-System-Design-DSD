`timescale 1ns / 1ps
module test;

  // Inputs
  reg clk;
  reg rst;
  reg start;
  reg [127:0] mat1;
  reg [127:0] mat2;
  reg show;

  // Outputs
  wire [127:0] result;
  wire finish;

  // Instantiate the Unit Under Test (UUT)
  matrixMulti uut (
    .clk(clk), 
    .rst(rst), 
    .start(start), 
    .mat1(mat1), 
    .mat2(mat2), 
    .show(show), 
    .result(result), 
    .finish(finish)
  );

  initial begin
    // Initialize Inputs
    clk = 0;
    rst = 0;
    start = 0;
    mat1 = 0;
    mat2 = 0;
    show = 0;

    // Wait 100 ns for global reset to finish
    #50;
    rst = 1;
    
      

   mat1[127:96] = 32'b01000000001100000000000000000000; // = 2.75
    mat1[95:64] = 32'b01000000010000001010001111010111; // = 3.01
    mat1[63:32] = 32'b01000000100000001011110001101010; // = 4.023
    mat1[31:0] = 32'b01000001000000000000000000000000; // = 8
    
   
   mat2[127:96] = 32'b01000000101000000101101000011100; // = 5.011
    mat2[95:64] = 32'b00111111100001111010111000010100; // = 1.06
    mat2[63:32] = 32'b01000001001101001100110011001100; // = 11.3
    mat2[31:0] = 32'b01000000000000101000111101011100; // = 2.04

/*
   mat1[127:96] = 32'b00111111100000000000000000000000; // = 1
    mat1[95:64] = 32'b01000000000000000000000000000000; // = 2
    mat1[63:32] = 32'b01000000010000000000000000000000; // = 3
    mat1[31:0] = 32'b01000000100000000000000000000000; // =4
    
   
   mat2[127:96] = 32'b01000000101000000000000000000000; // = 5
    mat2[95:64] = 32'b01000000111000000000000000000000; // = 6
    mat2[63:32] = 32'b01000000110000000000000000000000; // = 7
    mat2[31:0] = 32'b01000001000000000000000000000000; // = 8
*/
    
    #50
    start = 1;
     
  end
  
   always @* begin
    $display("Output is ready, time is %0t ps",$time);
    $display("result[1][1] = %b",result[127:96]);
    $display("result[1][2] = %b",result[95:64]);
    $display("result[2][1] = %b",result[63:32]);
    $display("result[2][2] = %b",result[31:0]);
     if(result[127:96] == 32'b01000001011011000000010001111110)  
      $display("result[1][1] : confirmed");// = 16.97085 
    if(result[95:64] == 32'b01000010000100010010100101011101)  
      $display("result[1][2] : confirmed");// = 37.2154    
    if(result[63:32] == 32'b01000001110000111101011100001010)  
      $display("result[2][1] : confirmed");// =28.639253
    if(result[31:0] == 32'b01000010010000010100011110101110)  
      $display("result[2][2] : confirmed");// = 61.7799 
    end
     always #10 clk = ~clk;
endmodule