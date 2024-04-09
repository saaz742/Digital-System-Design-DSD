`timescale 1ns / 1ps
`include "states.v"

`timescale 1ns / 1ps

module matrixMulti #(
parameter r1 = 2 , c1 = 2, c2 = 2,//number of rows and columns (r2 = c1)
width = 32)//ieee 754
(clk, rst, start, mat1, mat2, show, result, finish);

//size
localparam m1= r1 * c1;
localparam m2= c1 * c2;
localparam m3= r1 * c2 ;
localparam width1 =  m1 * width;
localparam width2 = m2 * width;
localparam widthOut = m3 * width;
localparam memSize = m1 + m2 + m3 + 2;

localparam timee = 0.0000000000000000000000000001;
//IO
input clk,rst,start;
input show;
input [width1 - 1 : 0] mat1;
input [width2 - 1 : 0] mat2;
output reg [widthOut - 1 : 0] result;
output reg finish;

reg [width-1:0] res [1:r1][1:c2];
reg [width1 - 1 : 0] mat1Copy;
reg [width2 - 1 : 0] mat2Copy;


reg [c1 - 1 : 0] select;
wire [width - 1:0] selectRow [1:r1]; //first matrix selescted row
wire [width - 1:0] selectCol [1:c2]; //second matrix selescted columns

//adder
reg rstAdder, lwAdder, addResDone, res_ack;//ready to get output?
wire adderFin[1:r1][1:c2]; //element ready?
wire [width-1:0] adderMat [1:r1][1:c2];

//multiplier
reg rstMult, in1_stb, in2_stb, output_ack;//inputes are ready
reg strtMul1, strtMul2, strtMul; //outputs are ready
wire output_stb[1:r1][1:c2];
wire in1_ack[1:r1][1:c2];
wire in2_ack[1:r1][1:c2];
wire [width-1:0] mulMat [1:r1][1:c2];

//memory
reg memRead, memWr, rstMem;
wire [31:0] readMem;
reg [31:0] wrData;
reg [4:0] memAddr,memAddrRe;

reg strtRead;
//
wire [31:0]configg;
wire [31:0] status;


reg [2:0] state;
integer i,j;
genvar x,y;

initial begin
//mul
	rstMult =0;
	in1_stb =0;
	in2_stb =0;
	output_ack =0;
	strtMul1 =1;
	strtMul2 =1;
	strtMul=1;
//add
	rstAdder = 0;
	lwAdder = 0;
	addResDone =1;
   res_ack =0;	

   
	finish =0;
end

assign configg = {c2[7:0],c1[7:0],c1[7:0],r1[7:0]};
assign status = {start,strtMul1, strtMul2, strtMul, addResDone, finish , 26'b0};

always @(posedge clk, negedge rst) begin
    if (!rst) begin 
	     mat1Copy <= 0;
        mat2Copy <= 0;
        rstMult <= 1;
		  rstMem <= 1;
        rstAdder <= 0;
        select <= 0;
		  strtRead <= 0;
		  finish <= 0;
        state <= `START;	
		for(i=1; i <=  r1; i=i+1) begin
            for (j=1 ;j <= c2; j=j+1) begin
                res[i][j] <= 0;
            end
        end	
    end
    else begin
        case (state)
            `START: begin
                    if (start) begin
								//if(finish==0) begin
								  rstMem <= 0;
								  strtRead <= 1;
								  mat1Copy <= mat1;
								  mat2Copy <= mat2;                 
								  rstMult <= 0;
								  state <= `MUL1;
							  //end
                    end
                    else begin
                        for(i=1; i <= r1; i=i+1) begin
                            for (j=1; j <= c2; j=j+1) begin
                                res[i][j] <= 0;
                            end
                        end   							
                        rstMult <= 1;
                        select <= 0;
                        output_ack <= 0;
                        res_ack <= 0;
                        in1_stb <= 0;
                        in2_stb <= 0;
                        lwAdder <= 0;
								state <= `START;
                    end
                end
            `MUL1: begin               
                    if(strtMul1) begin
								strtRead <=0;
                        in1_stb <= 1;
                        output_ack <= 0;
                        state <= `MUL2;
                    end
                end
            `MUL2: begin
                    if(strtMul2) begin
                        in2_stb <= 1;
                        output_ack <= 0;
                        state <= `MUL;
                    end
            end
            `MUL: begin
                   if(strtMul) begin            
                        rstAdder <= 1;
							   state <= `ADD;
                   end
                end
            `ADD: begin
                    lwAdder <= 1;
                    state <= `ADDCAL;
                end
            `ADDCAL: begin
                    if (addResDone) begin
                        for(i=1; i <= r1; i=i+1) begin
                            for(j=1; j <= c2; j=j+1) begin
                                res[i][j] <= adderMat[i][j];
                            end
                        end
                        in1_stb <= 0;
                        in2_stb <= 0;
								output_ack <= 1;
                        res_ack <= 1;
                        lwAdder <= 0;
                        if (select == r1 - 1) begin
                            state <= `FIN;
                        end
                        else begin
                            select <= select + 1;
									 strtRead <=1;
                            state <= `MUL1;
                        end
                    end
                    else begin
								res_ack <= 0;
                        output_ack <= 0;  
                    end
                end
            `FIN: begin
                    finish <= 1;
                    if (show) begin                      
                        output_ack <= 0;
								in1_stb <= 0;
                        in2_stb <= 0;
                        res_ack <= 0;
                        lwAdder <= 0;
								state <= `START;
                    end
                end
            default: begin              
                    mat1Copy <= 0;
                    mat2Copy <= 0;
						  state <= `START;
                end
        endcase
    end     
end
generate
Memory#(.n(memSize)) mem (.clk(clk),.rst(rstMem),
			  .addr(memAddr),.write_data(wrData),.MemRead(memRead),.MemWrite(memWr),.addrRe(memAddrRe),
           .read_data(readMem));
endgenerate
always @* begin //write in memory
   	memWr = 1;
		memAddr = 0;
		wrData = configg;
		#timee;
		memAddr = 1;
		wrData = status;
		#timee;
		j=2;
		for(i=width1-1; i >= 0; i=i-32) begin 
				memAddr = j;
				j = j+1;
				wrData =  mat1[i -: 32];
				#timee;
		end
		j = m1+2;
		for(i=width2-1; i >= 0; i=i-32) begin 
				memAddr = j;
				j = j+1;
				wrData =  mat2[i -: 32];
				#timee;
		end
		j = m2+m1+2;
		for(i=widthOut-1; i >= 0; i=i-32) begin 
				memAddr = j;
				j = j+1;
				wrData =  result[i -: 32];
				#timee;
		end
end

generate
    for(x=0; x < r1; x=x+1) begin :c
		assign selectRow[x+1] = mat1Copy[width1 - 1 - x * c1 * width : width1 - 1 - x * c1 * width -(c1 * width - 1)] >> ( c1-1 - select) * width;		 
	 end	  
endgenerate

/*
always @* begin
		memAddrRe = 0;		 
		memRead =1;
	   for(i=0; i < r1; i=i+1) begin 
	    memAddrRe = i+ r1*select +2;
		 #1;
		 selectRow[i+1] = readMem;			 
	 end	
end
*/
generate
    for(x=0; x < c2; x=x+1) begin :d
		assign selectCol[x+1] = mat2Copy[width2 - 1 - x * c1 * width : width2 - 1 - x * c1 * width -(c1*width - 1)]>> ( c1-1 - select) * width;
	end
endgenerate

always @(*) begin
    strtMul = 1;
    addResDone = 1;
    strtMul1 = 1;
    strtMul2 = 1;
    for(i=1; i <= r1; i=i+1) begin // all elements are ready or not
        for(j=1; j <= c2; j=j+1) begin
                strtMul1 = strtMul1 & in1_ack[i][j];
                strtMul2 = strtMul2 & in2_ack[i][j];
                strtMul = strtMul & output_stb[i][j];
                addResDone = addResDone & adderFin[i][j];
         end
    end	
	 
end

generate
    for(x=1; x <= r1; x=x+1) begin :e
        for(y=1; y <= c2; y=y+1) begin :f
            single_multiplier mul(.clk(clk),.rst(rstMult),
					 .input_a(selectRow[x]),.input_a_stb(in1_stb),.input_a_ack(in1_ack[x][y]),.input_b(selectCol[y]), .input_b_stb(in2_stb),.input_b_ack(in2_ack[x][y]),
                .output_z(mulMat[x][y]),.output_z_stb(output_stb[x][y]),.output_z_ack(output_ack));
            adder add(.clk(clk),.reset(rstAdder),.load(lwAdder),
                .Number1(mulMat[x][y]),.Number2(res[x][y]),
					 .result_ack(res_ack),.Result(adderMat[x][y]),.result_ready(adderFin[x][y]));
        end
    end
endgenerate


always @ (finish) begin
    for(i=0; i < r1; i=i+1) begin :a
        for (j=0; j < c2; j=j+1) begin :b
             result[widthOut-1-width*(i*c2+j) -: width]= res[i+1][j+1];
        end
    end
end
 endmodule

