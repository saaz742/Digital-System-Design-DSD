vlog -work work -vopt -stats=none {C:\modeltech64_10.5\examples\ProceduralAssignment.v}

vsim -gui work.ProceduralAssignment -novopt
#vsim -vopt work.test_of_delay -voptargs=+acc

add wave  \
sim:/ProceduralAssignment/operand1 \
sim:/ProceduralAssignment/operand2 \
sim:/ProceduralAssignment/adderOutPath1 \
sim:/ProceduralAssignment/adderOutPath2 \
sim:/ProceduralAssignment/adderOutPath3 \
sim:/ProceduralAssignment/adderOutPath4 \
sim:/ProceduralAssignment/clock \
sim:/ProceduralAssignment/intermediateReg1 \
sim:/ProceduralAssignment/intermediateReg2 \
sim:/ProceduralAssignment/intermediateReg3 \
sim:/ProceduralAssignment/outReg1 \
sim:/ProceduralAssignment/outReg2 \
sim:/ProceduralAssignment/outReg3 

run 100 ns

