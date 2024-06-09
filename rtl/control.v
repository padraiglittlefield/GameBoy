`include "/home/plittlefield6/GitHub/GameBoy/rtl/common_defs.vh"

module control(
    input clk,
    input rst,
    
    input [7:0] instr,
    input [2:0] m_cycle,

    input[7:0] acc_in,
    input[7:0] imm_z_in,
    input[3:0] flags,
    output reg[7:0] acc_out,
    output reg[1:0] idu_src,
    
    output reg [2:0] alu_a_src,
    output reg [2:0] alu_b_src,
    output reg [4:0] alu_op,
    output reg [1:0] alu_res_dst,

    

    output reg [1:0] idu_dst,
    output reg reg_we, 
    output reg [2:0] reg_wa,
    output reg [2:0] reg_rd_adr,
    output reg reg_wea,                    
    output reg [1:0] reg_waa,                     
    output reg [1:0] reg_rda_adr,

    output reg [1:0] idu_mode,

    output reg imm_z_en,
    output reg imm_w_en,
    output reg fetch_en,
    output reg [1:0] adr_bus,
    output reg d_bus,
    output reg [1:0] d_bus_dst,
    //daa???

    output reg ime_next,
    output reg halt,
    output reg stop,
    output reg wake,
    output reg pc_jp,
    output reg [2:0] next_m_cycle,
    output reg cpu_wr_en,
    output reg jmp_dst,
    output reg reg_wda_src

);

    reg [1:0] cc;
    reg cc_met;

    reg cb_instr_en;
    reg next_cb_instr_en;

    reg comb_fetch_en;
    reg [7:0] comb_acc_out;
    reg [1:0] comb_alu_res_dst;
    reg [2:0] comb_alu_a_src;
    reg [2:0] comb_alu_b_src;
    reg [4:0] comb_alu_op;
    reg comb_reg_we; 
    reg [2:0] comb_reg_wa;
    reg [2:0] comb_reg_rd_adr;
    reg comb_reg_wea;                    
    reg [1:0] comb_reg_waa;                     
    reg [1:0] comb_reg_rda_adr;
    reg [1:0] comb_idu_mode;
    reg [1:0] comb_idu_dst;
    reg comb_call_en;
    reg comb_pc_jp;
    reg comb_ime_next;
    reg comb_halt;
    reg comb_stop; 
    reg comb_imm_z_en;
    reg comb_imm_w_en;
    reg [2:0] comb_next_m_cycle;
    reg [1:0] comb_adr_bus_src;
    reg comb_d_bus;
    reg comb_cpu_wr_en;
    reg comb_jmp_dst;
    reg comb_wake;
    reg comb_reg_wda_src;
    reg [1:0] comb_d_bus_dst;
    reg [1:0] comb_idu_src;

//handle interrupts

always@(*) begin
    if(rst) begin
        comb_fetch_en = '1;
        comb_acc_out = '0;
        comb_alu_res_dst = '0;
        comb_alu_a_src = '0;
        comb_alu_b_src = '0;
        comb_alu_op = '0;
        comb_reg_we = '0; 
        comb_reg_wa = '0;
        comb_reg_rd_adr = '0;
        comb_reg_wea = '0;                    
        comb_reg_waa = '0;                     
        comb_reg_rda_adr = '0;
        comb_idu_mode = '0;
        comb_idu_dst = '0;
        comb_call_en = '0;
        comb_pc_jp = '0;
        comb_ime_next = '0;
        comb_halt = '0;
        comb_stop = '0; 
        comb_imm_z_en = '0;
        comb_imm_w_en = '0;
        comb_next_m_cycle = '0;
        comb_adr_bus_src = '0;
        comb_d_bus = '0;
        comb_cpu_wr_en = '0;
        comb_pc_jp = '0;
        comb_reg_wda_src = 0;
        comb_d_bus_dst = '0;
        
    end else begin
        if(0) begin //interupts and such

        end else begin 
            comb_imm_z_en = 1'b0;
            if(instr == 8'hCB) begin
                next_cb_instr_en = 1'b1;
                comb_fetch_en = 1'b1;
                comb_adr_bus_src = `AB_PC;
                comb_idu_mode = `INC;
                comb_idu_dst = `IDU_DST_PC;
                comb_next_m_cycle = `m0;
            end else begin
                if(cb_instr_en) begin   //if instr is a cb prefix instrstuction
                    case(instr[7:6])
                        2'b00: begin
                            case(instr[5:3])

                                3'b000: begin // rlc r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_RLC;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b001: begin // rrc r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_RRC;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b010: begin // rl r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_RL;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b011: begin // rr r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_RR;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase

                                end
                                3'b100: begin // sla r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SLA;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b101: begin // sra r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SRA;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b110: begin // swap r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SWAP;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b111: begin // srl r8
                                    case(m_cycle)
                                        `m0: begin
                                            
                                            comb_alu_a_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SRL;
                                            comb_alu_res_dst = `ALU_RES_DST_R8;

                                            comb_reg_rd_adr = instr[2:0];
                                            comb_reg_we = 1'b1;
                                            comb_reg_wa = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            next_cb_instr_en = 1'b0;
                                        end
                                        
                                        default: begin
                                            end
                                    endcase
                                end

                                default: begin
                                    end
                            endcase
                        end
                        2'b01: begin // bit b3, r8
                            
                            case(m_cycle)
                                    `m0: begin
                                        
                                        comb_alu_a_src = `ALU_SRC_R8;
                                        comb_alu_op = `OP_BIT;
                                        comb_alu_res_dst = `ALU_RES_DST_R8;

                                        comb_reg_rd_adr = instr[2:0];
                                        comb_reg_we = 1'b1;
                                        comb_reg_wa = instr[2:0];

                                        comb_fetch_en = 1'b1;
                                        comb_adr_bus_src = `AB_PC;

                                        comb_idu_mode = `INC;
                                        comb_idu_dst = `IDU_DST_PC;
                                        comb_next_m_cycle = `m0;
                                        next_cb_instr_en = 1'b0;
                                    end
                                    
                                    default: begin
                                        end
                                endcase
                            
                        end
                        2'b10: begin // res b3, r8
                           
                            case(m_cycle)
                                `m0: begin
                                    comb_alu_a_src = `ALU_SRC_R8;
                                    comb_alu_b_src = `ALU_SRC_INSTR;
                                    comb_alu_op = `OP_RES;
                                    comb_alu_res_dst = `ALU_RES_DST_R8;

                                    comb_reg_rd_adr = instr[2:0];
                                    comb_reg_we = 1'b1;
                                    comb_reg_wa = instr[2:0];

                                    comb_fetch_en = 1'b1;
                                    comb_adr_bus_src = `AB_PC;

                                    comb_idu_mode = `INC;
                                    comb_idu_dst = `IDU_DST_PC;
                                    comb_next_m_cycle = `m0;
                                    next_cb_instr_en = 1'b0;
                                end
                                
                                default: begin
                                    end
                            endcase
                        end
                        2'b11: begin // set b3, r8
                            
                            case(m_cycle)
                                `m0: begin
                                    comb_alu_a_src = `ALU_SRC_R8;
                                    comb_alu_b_src = `ALU_SRC_INSTR;
                                    comb_alu_op = `OP_SET;
                                    comb_alu_res_dst = `ALU_RES_DST_R8;

                                    comb_reg_rd_adr = instr[2:0];
                                    comb_reg_we = 1'b1;
                                    comb_reg_wa = instr[2:0];

                                    comb_fetch_en = 1'b1;
                                    comb_adr_bus_src = `AB_PC;

                                    comb_idu_mode = `INC;
                                    comb_idu_dst = `IDU_DST_PC;
                                    comb_next_m_cycle = `m0;
                                    next_cb_instr_en = 1'b0;
                                end
                                
                                default: begin
                                    end
                            endcase
                        end
                        default: begin
                            end
                    endcase
                end else begin
                    case(instr[7:6])
                        2'b00: begin //block 0
                            if(instr[2]) begin // 8bit instr

                                case(instr[2:0]) 
                                    3'b100: begin // inc r8
                                        case(m_cycle)
                                            `m0: begin
                                                comb_fetch_en = 1'b1;
                                                comb_adr_bus_src = `AB_PC;

                                                comb_alu_res_dst = `ALU_RES_DST_R8;
                                                comb_alu_a_src = `ALU_SRC_R8;
                                                comb_alu_b_src = `ALU_SRC_ONE;
                                                comb_alu_op = `OP_ADD;

                                                comb_idu_mode = `INC;
                                                comb_idu_dst = `IDU_DST_PC;

                                                comb_next_m_cycle = `m0;
                                                next_cb_instr_en = 1'b0;

                                                comb_reg_wa = instr[5:3];
                                                comb_reg_we = 1'b1;

                                                comb_reg_rd_adr = instr[5:3];
                                            end
                                            default: begin
                                            
                                            end
                                        endcase
                                    end
                                    3'b101: begin // dec r8
                                        case(m_cycle)
                                            `m0: begin
                                                comb_fetch_en = 1'b1;
                                                comb_adr_bus_src = `AB_PC;

                                                comb_alu_res_dst = `ALU_RES_DST_R8;
                                                comb_alu_a_src = `ALU_SRC_R8;
                                                comb_alu_b_src = `ALU_SRC_ONE;
                                                comb_alu_op = `OP_SUB;

                                                comb_idu_mode = `INC;
                                                comb_idu_dst = `IDU_DST_PC;

                                                comb_next_m_cycle = `m0;
                                                next_cb_instr_en = 1'b0;

                                                comb_reg_wa = instr[5:3];
                                                comb_reg_we = 1'b1;

                                                comb_reg_rd_adr = instr[5:3];
                                            end
                                            default: begin
                                            
                                            end
                                        endcase
                                    end
                                    3'b110: begin // ld r8, imm8
                                        case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin

                                                    comb_imm_z_en = 1'b0;

                                                    comb_reg_wa = instr[5:3];
                                                    comb_reg_we = 1'b1;

                                                    comb_alu_res_dst = `ALU_RES_DST_R8;
                                                    comb_alu_a_src = `ALU_SRC_IMM8;
                                                    
                                                    comb_alu_op = `OP_NOP;

                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                    next_cb_instr_en = 1'b0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                    end
                                    3'b111: begin // 
                                        case(instr[5:3])

                                            3'b000: begin // rlca
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_RLC;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase
                                            end
                                            3'b001: begin // rrca
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_RRC;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase

                                            end
                                            3'b010: begin // rla
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_RL;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase
                                            end
                                            3'b011: begin // rra
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_RR;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase
                                            end
                                            3'b100: begin // daa
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_DAA;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase
                                            end
                                            3'b101: begin // cpl
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_CPL;
                                                        comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase

                                            end
                                            3'b110: begin // scf
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_SCF;
                                                        comb_alu_res_dst = `ALU_RES_DST_RIEN;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase
                                            end
                                            3'b111: begin // ccf
                                                case(m_cycle)
                                                    `m0: begin
                                                        comb_reg_we = 1'b0;
                                                        comb_reg_wea = 1'b0;

                                                        comb_alu_a_src = `ALU_SRC_ACC;
                                                        
                                                        comb_alu_op = `OP_CCF;
                                                        comb_alu_res_dst = `ALU_RES_DST_RIEN;


                                                        comb_fetch_en = 1'b1;
                                                        comb_adr_bus_src = `AB_PC;

                                                        comb_idu_mode = `INC;
                                                        comb_idu_dst = `IDU_DST_PC;
                                                        comb_next_m_cycle = `m0;
                                                    end
                                                    default: begin
                                                    end
                                                endcase

                                            end

                                            default: begin
                                                end
                                        endcase

                                    end

                                    default: begin
                                        end
                                endcase

                            end else begin  //16 bit instr, jr, stop, and nop

                                if(instr == 8'h00) begin //nop
                                    comb_reg_we = 1'b0;
                                    comb_reg_wea = 1'b0;
                                    comb_fetch_en = 1'b1;
                                    comb_adr_bus_src = `AB_PC;
                                    comb_alu_res_dst = `ALU_RES_DST_RIEN;

                                    comb_idu_mode = `INC;
                                    comb_idu_dst = `IDU_DST_PC;
                                    comb_next_m_cycle = `m0;
                                    
                                end else if(instr == 8'b00011000) begin // jr imm8
                                    case(m_cycle)
                                        `m0: begin //fetch address offset
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;

                                            comb_fetch_en = 1'b0;
                                            comb_imm_z_en = 1'b1;
                                           // comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m1;
                                            comb_alu_op = `OP_ADD;
                                            comb_alu_a_src = `ALU_SRC_IMM8;
                                            comb_alu_b_src = `ALU_SRC_PCL;
                                            comb_alu_res_dst =`ALU_RES_DST_IMMZ;

                                        end
                                        `m1: begin //calc next address

                                            if(flags[`C] == 1'b1 && imm_z_in[7] == 1'b0) begin
                                                comb_idu_mode = `INC;
                                            end else if(flags[`C] == 1'b0 && imm_z_in[7] == 1'b1) begin
                                                comb_idu_mode = `DEC;
                                            end else begin
                                                comb_idu_mode = `NOP;
                                            end

                                            comb_idu_src = `IDU_SRC_PC_H;

                                            comb_adr_bus_src = `AB_IMM;
                                            comb_idu_dst = `IDU_DST_W;
                                            comb_next_m_cycle = `m2;
                                        end
                                        `m2: begin

                                            comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                            comb_fetch_en = 1'b1;
                                            comb_idu_mode = `INC;
                                            comb_adr_bus_src = `AB_PC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_idu_src = `IDU_SRC_AB;
                                            comb_next_m_cycle = `m0;
                                        end
                                        default: begin
                                        end
                                    endcase
                                    
                                end else if(instr[7:5] == 3'b001 && instr[2:0] == 3'b000) begin // jr cond, imm8
                                    case(m_cycle)
                                        `m0: begin //fetch address offset
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;

                                            comb_fetch_en = 1'b0;
                                            comb_imm_z_en = 1'b1;
                                           // comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m1;
                                            comb_alu_op = `OP_ADD;
                                            comb_alu_a_src = `ALU_SRC_IMM8;
                                            comb_alu_b_src = `ALU_SRC_PCL;
                                            comb_alu_res_dst =`ALU_RES_DST_IMMZ;

                                            cc = instr[4:3];
                                            case(cc)
                                                `nz: begin
                                                    if(flags[`Z] == 1'b0) begin
                                                        cc_met = 1'b1;
                                                    end else begin
                                                        cc_met = 1'b0;
                                                    end
                                                end
                                                `z: begin
                                                    if(flags[`Z] == 1'b1) begin
                                                        cc_met = 1'b1;
                                                    end else begin
                                                        cc_met = 1'b0;
                                                    end
                                                end
                                                `nc: begin
                                                    if(flags[`C] == 1'b0) begin
                                                        cc_met = 1'b1;
                                                    end else begin
                                                        cc_met = 1'b0;
                                                    end
                                                end
                                                `c: begin
                                                    if(flags[`C] == 1'b1) begin
                                                        cc_met = 1'b1;
                                                    end else begin
                                                        cc_met = 1'b0;
                                                    end
                                                end
                                            endcase

                                        end
                                        `m1: begin //calc next address
                                            

                                            if(cc_met) begin
                                                if(flags[`C] == 1'b1 && imm_z_in[7] == 1'b0) begin
                                                    comb_idu_mode = `INC;
                                                end else if(flags[`C] == 1'b0 && imm_z_in[7] == 1'b1) begin
                                                    comb_idu_mode = `DEC;
                                                end else begin
                                                    comb_idu_mode = `NOP;
                                                end

                                                comb_idu_src = `IDU_SRC_PC_H;

                                                comb_adr_bus_src = `AB_IMM;
                                                comb_idu_dst = `IDU_DST_W;
                                                comb_next_m_cycle = `m2;
                                            end else begin
                                                comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                comb_fetch_en = 1'b1;
                                                comb_idu_mode = `INC;
                                                comb_adr_bus_src = `AB_PC;
                                                comb_idu_dst = `IDU_DST_PC;
                                                comb_idu_src = `IDU_SRC_AB;
                                                comb_next_m_cycle = `m0;
                                            end

                                        end
                                        `m2: begin
                                            cc_met = 1'b0;
                                            comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                            comb_fetch_en = 1'b1;
                                            comb_idu_mode = `INC;
                                            comb_adr_bus_src = `AB_PC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_idu_src = `IDU_SRC_AB;
                                            comb_next_m_cycle = `m0;
                                        end
                                        default: begin
                                        end
                                    endcase
                                end else if (instr == 8'b00010000) begin // stop

                                end else begin //16 bit
                                    
                                    case(instr[3:0])

                                        4'b0001: begin //ld r16, imm16
                                            case(m_cycle)
                                                `m0: begin //load z
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                end
                                                `m1: begin // load w
                                            
                                                    comb_imm_z_en = 1'b0;
                                                    comb_imm_w_en = 1'b1;
                                                    
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m2;
                                                end
                                                `m2: begin
                                                    comb_imm_z_en = 1'b0;
                                                    comb_imm_w_en = 1'b0;
                                                    comb_reg_wea = 1'b1;
                                                    comb_fetch_en = 1'b1;
                                                    comb_reg_waa = instr[5:4];
                                                    comb_reg_wda_src = `WDA_SRC_IMM16;

                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;

                                                end
                                                default: begin
                                                end
                                            endcase
                                        end
                                        4'b0010: begin //ld [r16mem], a
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;
                                                    comb_fetch_en = 1'b0;
                                                    comb_reg_rda_adr = instr[5:4];
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_GP_REG;
                                                    comb_d_bus = `DB_ACC;
                                                    comb_cpu_wr_en = 1'b1;
                                                    comb_next_m_cycle = `m1;
                                                    comb_idu_dst = `IDU_DST_RIEN;
                                                    
                                                end
                                                `m1: begin

                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;
                                                    comb_cpu_wr_en = 1'b0;
                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                    next_cb_instr_en = 1'b0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                            
                                        end
                                        4'b1010: begin //ld a, [r16mem]
                                            case(m_cycle)
                                                `m0: begin // load value from mem pointed to by r16
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;
                                                    comb_fetch_en = 1'b0;
                                                    
                                                    comb_reg_rda_adr = instr[5:4];
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_GP_REG;
                                                    
                                                    comb_imm_z_en = 1'b1;
                                                    comb_idu_dst = `IDU_DST_RIEN;
                                                    
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin


                                                    comb_imm_z_en = 1'b0;
                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;
                                                    comb_alu_a_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_NOP;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                    next_cb_instr_en = 1'b0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        4'b1000: begin //ld [imm16], sp

                                        end
                                        4'b0011: begin //inc r16
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_fetch_en = 1'b0;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_src = `IDU_SRC_GP_REG;
                                                    comb_reg_rda_adr = instr[5:4];
                                                    comb_next_m_cycle = `m1;
                                                    comb_idu_dst = `IDU_DST_r16;
                                                    comb_reg_wea = 1'b1;
                                                    comb_reg_waa = instr[5:4];

                                                end
                                                `m1: begin
                                                    comb_reg_wea = 1'b0;
                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;
                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;

                                                end
                                                default: begin
                                                end
                                            endcase
                                        end
                                        4'b1011: begin //dec r16
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_fetch_en = 1'b0;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;

                                                    comb_idu_mode = `DEC;
                                                    comb_idu_src = `IDU_SRC_GP_REG;
                                                    comb_reg_rda_adr = instr[5:4];
                                                    comb_next_m_cycle = `m1;
                                                    comb_idu_dst = `IDU_DST_r16;
                                                    comb_reg_wea = 1'b1;
                                                    comb_reg_waa = instr[5:4];

                                                end
                                                `m1: begin
                                                    comb_reg_wea = 1'b0;
                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;
                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;

                                                end
                                                default: begin
                                                end
                                            endcase
                                        end
                                        4'b1001: begin //add hl, r16

                                        end
                                        

                                        default: begin
                                            end
                                    endcase 

                                end

                            end

                        end

                        2'b01: begin //block 1 
                            //ld r8, r8. (halt if ld [hl], [hl])
                        end


                        2'b10: begin //block 2: 8-bit register arithmetic
                            case(instr[5:3])
                                3'b000: begin // add a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_ADD;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;

                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b001: begin  // adc a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_ADC;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b010: begin // sub a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SUB;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b011: begin // sbc a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_SBC;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b100: begin // and a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_AND;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b101: begin // xor a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_XOR;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b110: begin // or a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_OR;
                                            comb_alu_res_dst = `ALU_RES_DST_ACC;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b111: begin // cp a, r8
                                    case(m_cycle)
                                        `m0: begin
                                            comb_reg_we = 1'b0;
                                            comb_reg_wea = 1'b0;
                                            
                                            comb_alu_a_src = `ALU_SRC_ACC;
                                            comb_alu_b_src = `ALU_SRC_R8;
                                            comb_alu_op = `OP_CP;
                                            comb_alu_res_dst = `ALU_RES_DST_RIEN;

                                            comb_reg_rd_adr = instr[2:0];

                                            comb_fetch_en = 1'b1;
                                            comb_adr_bus_src = `AB_PC;

                                            comb_idu_mode = `INC;
                                            comb_idu_dst = `IDU_DST_PC;
                                            comb_next_m_cycle = `m0;
                                            
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                default: begin
                                    end
                            endcase

                        end

                        2'b11: begin // block 3

                            case(instr[2:0]) 
                                3'b000: begin
                                    if(instr[5]) begin // ret cond

                                    end else begin
                                        case(instr[4:3])
                                            2'b00: begin // ldh [imm8], a
                                            
                                            end
                                            2'b01: begin // ldh a, [imm8]
                                            
                                            end
                                            2'b10: begin // add sp, imm8
                                            
                                            end
                                            2'b11: begin // ld hl, sp + imm8
                                            
                                            end
                                            default: begin
                                                end
                                        endcase
                                    end
                                end
                                3'b001: begin
                                    if(instr[3] == 1'b0) begin // pop r16stk
                                        
                                    end else begin
                                        case(instr[5:4]) 
                                            2'b00: begin // ret 
                                            
                                            end
                                            2'b01: begin // reti
                                            
                                            end
                                            2'b10: begin // jp hl
                                            
                                            end
                                            2'b11: begin // ld sp, hl
                                            
                                            end
                                            default: begin
                                                end
                                        endcase
                                    end
                                end
                                3'b010: begin
                                    if(instr[5] == 1'b0) begin // jp cond, imm16
                                    
                                    end else begin
                                        case(instr[4:3]) 
                                            2'b00: begin // ldh [c], a
                                            
                                            end
                                            2'b01: begin // ld [imm16], a
                                                case(m_cycle)
                                                `m0: begin //load z
                                                    comb_d_bus_dst = `DB_DST_RIEN;
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                end
                                                `m1: begin // load w
                                            
                                                    comb_imm_z_en = 1'b0;
                                                    comb_imm_w_en = 1'b1;
                                                    
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m2;
                                                end
                                                `m2: begin // load value to mem

                                                    comb_imm_z_en = 1'b0;
                                                    comb_imm_w_en = 1'b0;
                                                    comb_adr_bus_src = `AB_IMM;

                                                    comb_cpu_wr_en = 1'b1;
                                                    
                                                    comb_d_bus = `DB_ACC;
                                                    
                                                    comb_next_m_cycle = `m3;
                                                    comb_idu_dst = `IDU_DST_RIEN;

                                                    

                                                end
                                                `m3:begin //fetch next instruction

                                                    comb_imm_z_en = 1'b0;
                                                    comb_d_bus_dst = `DB_DST_RIEN;
                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_cpu_wr_en = 1'b0;


                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                end
                                            endcase
                                            end
                                            2'b10: begin // ldh a, [c]
                                            
                                            end
                                            2'b11: begin // ld a, [imm16]
                                                case(m_cycle)
                                                `m0: begin //load z
                                                    comb_d_bus_dst = `DB_DST_RIEN;
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                end
                                                `m1: begin // load w
                                            
                                                    comb_imm_z_en = 1'b0;
                                                    comb_imm_w_en = 1'b1;
                                                    
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m2;
                                                end
                                                `m2: begin // load value from mem

                                                    comb_imm_w_en = 1'b0;
                                                    comb_adr_bus_src = `AB_IMM;
                                                    
                                                    comb_imm_z_en = 1'b1;
                                                    

                                                    comb_next_m_cycle = `m3;
                                                    comb_idu_dst = `IDU_DST_RIEN;

                                                    

                                                end
                                                `m3:begin // store value in acc and fetch next instruction

                                                    comb_imm_z_en = 1'b0;
                                                    comb_d_bus_dst = `DB_DST_RIEN;
                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;
                                                    comb_alu_a_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_NOP;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                end
                                            endcase
                                            end
                                            default: begin
                                                end
                                        endcase 
                                    end
                                end
                                3'b011: begin
                                    if(instr[5] == 1'b0) begin // jp imm16
                                        
                                    end else begin
                                        case(instr[4:3]) 
                                            2'b10: begin // di
                                            
                                            end 
                                            2'b11: begin // ei
                                            
                                            end
                                            default: begin
                                                end
                                        endcase
                                    end
                                end
                                3'b100: begin
                                    //call cond, imm16
                                end
                                3'b101: begin
                                    case(instr[3])
                                        1'b1: begin // call imm16
                                            
                                        end
                                        1'b0: begin // push r16 stk
                                        
                                        end
                                        default: begin
                                            end
                                    endcase
                                end 
                                3'b110: begin
                                    case(instr[5:3])
                                        3'b000: begin // add a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin

                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_ADD;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;

                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b001: begin // adc a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_ADC;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;

                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b010: begin // sub a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_SUB;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;

                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b011: begin // sbc a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_SBC;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b100: begin // and a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_AND;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b101: begin // xor a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_XOR;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b110: begin // or a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_OR;
                                                    comb_alu_res_dst = `ALU_RES_DST_ACC;


                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        3'b111: begin // cp a, imm8
                                            case(m_cycle)
                                                `m0: begin
                                                    comb_reg_we = 1'b0;
                                                    comb_reg_wea = 1'b0;

                                                    comb_fetch_en = 1'b0;
                                                    comb_imm_z_en = 1'b1;
                                                    comb_alu_res_dst =`ALU_RES_DST_RIEN;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m1;
                                                    
                                                end
                                                `m1: begin
                                                    
                                                    comb_imm_z_en = 1'b0;
                                                    comb_alu_a_src = `ALU_SRC_ACC;
                                                    comb_alu_b_src = `ALU_SRC_IMM8;
                                                    comb_alu_op = `OP_CP;
                                                    comb_alu_res_dst = `ALU_RES_DST_RIEN;


                                                    comb_fetch_en = 1'b1;
                                                    comb_adr_bus_src = `AB_PC;

                                                    comb_idu_mode = `INC;
                                                    comb_idu_dst = `IDU_DST_PC;
                                                    comb_next_m_cycle = `m0;
                                                end
                                                default: begin
                                                    end
                                            endcase
                                        end
                                        default: begin
                                            end
                                    endcase
                                end
                                3'b111: begin
                                    //rst tgt3
                                end
                                default: begin
                                    end
                            endcase


                        end
                        default: begin
                            end
                    endcase 
                
                end
            end
        end 
    end
end

    // latch comb to outputs 
    always@(posedge clk) begin
        acc_out <= comb_acc_out;
        alu_a_src <= comb_alu_a_src;
        alu_b_src <= comb_alu_b_src;
        alu_op <= comb_alu_op;
        alu_res_dst <= comb_alu_res_dst;
        idu_dst <= comb_idu_dst;
        reg_we <= comb_reg_we; 
        reg_wa <= comb_reg_wa;
        reg_rd_adr <= comb_reg_rd_adr;
        reg_wea <= comb_reg_wea;                    
        reg_waa <= comb_reg_waa;                     
        reg_rda_adr <= comb_reg_rda_adr;
        idu_mode <= comb_idu_mode;
        imm_z_en <= comb_imm_z_en;
        imm_w_en <= comb_imm_w_en;
        fetch_en <= comb_fetch_en;
        adr_bus <= comb_adr_bus_src;
        d_bus <= comb_d_bus;
        ime_next <= comb_ime_next;
        halt <= comb_halt;
        stop <= comb_stop;
        wake <= comb_wake;
        pc_jp <= comb_pc_jp;
        next_m_cycle <= comb_next_m_cycle;
        cpu_wr_en <= comb_cpu_wr_en;
        pc_jp <= comb_pc_jp;
        reg_wda_src <= comb_reg_wda_src;
        d_bus_dst <= comb_d_bus_dst; 
        cb_instr_en <= next_cb_instr_en;
        idu_src <= comb_idu_src;
    end
endmodule


