// parameters.vh
`ifndef PARAMETERS_VH
`define PARAMETERS_VH

//arithmetic and logic
`define OP_NOP 5'b00000
`define OP_ADD 5'b00001
`define OP_ADC 5'b00010
`define OP_SUB 5'b00011
`define OP_SBC 5'b00100
`define OP_AND 5'b00101
`define OP_XOR 5'b00110
`define OP_OR 5'b00111
`define OP_CP 5'b01000

//rotate, shift, and bit
`define OP_RLC 5'b01001
`define OP_RRC 5'b01010
`define OP_RL 5'b01011
`define OP_RR 5'b01100
`define OP_SLA 5'b01101
`define OP_SRA 5'b01110
`define OP_SWAP 5'b01111
`define OP_SRL 5'b10000
`define OP_BIT 5'b10001
`define OP_RES 5'b10010
`define OP_SET 5'b10011
`define OP_DAA 5'b10100
`define OP_SCF 5'b10101
`define OP_CCF 5'b10110
`define OP_CPL 5'b10111

//flags
`define Z 2'd3
`define N 2'd2
`define H 2'd1
`define C 2'd0


//source for alu
`define ALU_SRC_R8 3'b000
`define ALU_SRC_ONE 3'b001
`define ALU_SRC_IMM8 3'b010
`define ALU_SRC_INSTR 3'b011
`define ALU_SRC_ACC 3'b100
`define ALU_SRC_PCL 3'b111

// destinations for results
`define ALU_RES_DST_RIEN 2'b00
`define ALU_RES_DST_ACC 2'b01
`define ALU_RES_DST_R8 2'b10
`define ALU_RES_DST_IMMZ 2'b11

//m-cycle states
`define m0 3'b000
`define m1 3'b001
`define m2 3'b010
`define m3 3'b011
`define m4 3'b100


//idu stuff
`define IDU_SRC_AB 2'b00
`define IDU_SRC_PC_H 2'b01
`define IDU_SRC_GP_REG 2'b10

`define NOP 2'b00
`define INC 2'b01
`define DEC 2'b10


`define IDU_DST_PC 2'b00
`define IDU_DST_r16 2'b01
`define IDU_DST_RIEN 2'b10
`define IDU_DST_W 2'b11

//address bus
`define AB_PC 2'b00
`define AB_GP_REG 2'b01
`define AB_IMM 2'b10
`define AB_PC_H 2'b11

`define DB_R8 1'b0
`define DB_ACC 1'b1

`define JMP_DST_WZ 1'b0
`define JMP_DST_HL 1'b1

`define WDA_SRC_IMM16 1'b0

`define DB_DST_RIEN 2'b00
`define DB_DST_R8 2'b01
`define DB_DST_ACC 2'b10

//conditions
`define nz 2'b00
`define z 2'b01
`define nc 2'b10
`define c 2'b11
`endif
