`include "/home/plittlefield6/GitHub/GameBoy/rtl/common_defs.vh"

module alu(
    input [7:0] alu_a,
    input [7:0] alu_b, 
    output reg [7:0] alu_res,
    input [3:0] alu_flags_in,
    output reg [3:0] alu_flags_out,
    input [4:0] alu_op
);

reg [8:0] alu_res_buffer;
reg [7:0] varZ;



always@(*) begin
    case (alu_op)
        `OP_ADD: begin
            alu_res_buffer = alu_a + alu_b;
            alu_res = alu_a + alu_b;

            alu_flags_out[`Z] = (alu_res_buffer == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = (alu_res_buffer[3] == 1'b1) ? 1'b1 : 1'b0;
            alu_flags_out[`C] = (alu_res_buffer[8] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_ADC: begin
            alu_res_buffer = {1'b0, alu_a} + {1'b0, alu_b} + {8'b00000000, alu_flags_in[`C]};
            alu_res = alu_a + alu_b + {7'b0000000, alu_flags_in[`C]};

            alu_flags_out[`Z] = (alu_res_buffer == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = (alu_res_buffer[3] == 1'b1) ? 1 : 0;
            alu_flags_out[`C] = (alu_res_buffer[8] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_SUB: begin
            alu_res_buffer = alu_a - alu_b;
            alu_res = alu_a - alu_b;

            alu_flags_out[`Z] = (alu_res_buffer == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b1;
            alu_flags_out[`H] = (alu_b[3:0] > alu_a[3:0]) ? 1'b1 : 1'b0;
            alu_flags_out[`C] = (alu_b > alu_a) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_SBC: begin
            alu_res_buffer = {1'b0, alu_a} - {1'b0, alu_b} - {8'b00000000, alu_flags_in[`C]};
            alu_res = alu_a - alu_b - {7'b0000000, alu_flags_in[`C]};

            alu_flags_out[`Z] = (alu_res_buffer == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b1;
            alu_flags_out[`H] = ((alu_b[3:0] + {3'b000, alu_flags_in[`C]}) > alu_a[3:0]) ? 1'b1 : 1'b0;
            alu_flags_out[`C] = ((alu_b + {7'b0000000, alu_flags_in[`C]}) > alu_a) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_AND: begin
            alu_res = alu_a & alu_b;
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b1;
            alu_flags_out[`C] = 1'b0;
            varZ = '0;
        end
        `OP_OR: begin
            alu_res = alu_a | alu_b;
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = 1'b0;
            varZ = '0;
        end
        `OP_XOR: begin
            alu_res = alu_a ^ alu_b;
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1;
            alu_flags_out[`C] = 1'b0;
            varZ = '0;
        end
        `OP_CP: begin
            alu_res = '0;
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = (alu_res_buffer[3] == 1'b1) ? 1'b1 : 1'b0;
            alu_flags_out[`C] = (alu_res_buffer[8] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_RLC: begin
            alu_res = {alu_a[6:0], alu_a[7]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = (alu_a[7] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_RRC: begin
            alu_res = {alu_a[0], alu_a[7:1]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = (alu_a[0] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;
        end
        `OP_RL: begin
            alu_res = {alu_a[6:0], alu_flags_in[`C]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_a[7];
            varZ = '0;
        end
        `OP_RR: begin
            alu_res = {alu_flags_in[`C], alu_a[7:1]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1 : 0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_a[0];
            varZ = '0;
        end
        `OP_SLA: begin
            alu_res = {alu_a[6:0], 1'b0};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_a[7];
            varZ = '0;
        end
        `OP_SRA: begin
            alu_res = {alu_a[7], alu_a[7:1]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_a[0];
            varZ = '0;
        end
        `OP_SWAP: begin
            varZ = '0;
            alu_res = {alu_a[3:0], alu_a[7:4]};
            alu_res_buffer = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = 1'b0;
        end
        `OP_SRL: begin
            alu_res_buffer = '0;
            alu_res = {1'b0, alu_a[7:1]};
            varZ = '0;
            alu_flags_out[`Z] = (alu_res == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_a[0];
        end
        `OP_BIT: begin
            alu_res = '0;
            varZ = '0;
            alu_flags_out[`Z] = (alu_a[alu_b[2:0]] == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b1;
            alu_flags_out[`C] = alu_flags_in[`C];
            alu_res_buffer = '0;
        end
        `OP_RES: begin
            alu_res_buffer = '0;
            varZ = alu_a;
            varZ[alu_b[5:3]] = 1'b0;
            alu_res = varZ;
            alu_flags_out = alu_flags_in;
        end
        `OP_SET: begin
            alu_res_buffer = '0;
            varZ = alu_a;
            varZ[alu_b[5:3]] = 1'b1;
            alu_res = varZ;
            alu_flags_out = alu_flags_in;
        end
        `OP_NOP: begin
            alu_flags_out = alu_flags_in;
            alu_res = alu_a;
            alu_res_buffer = '0;
            varZ = '0;
        end
        `OP_DAA: begin

            if((alu_a & 8'h0F) > 8'h09) begin
                alu_res = alu_a + 8'h06;
                alu_res_buffer = alu_a + 8'h06;
            end else if((alu_a & 8'hF0) > 8'h90) begin
                alu_res = alu_a + 8'h60;
                alu_res_buffer = alu_a + 8'h60;
            end else if(alu_flags_in[`H]) begin
                alu_res = alu_a + 8'h06;
                alu_res_buffer = alu_a + 8'h06;
            end else begin
                alu_res = alu_a;
                alu_res_buffer = {1'b0,alu_a};
            end

            alu_flags_out[`Z] = (alu_res_buffer == '0) ? 1'b1 : 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = (alu_res_buffer[3] == 1'b1) ? 1'b1 : 1'b0;
            alu_flags_out[`C] = (alu_res_buffer[8] == 1'b1) ? 1'b1 : 1'b0;
            varZ = '0;

        end
        `OP_SCF: begin
            alu_res = '0;
            alu_res_buffer = '0;
            varZ = '0;

            alu_flags_out[`Z] = 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = 1'b1;
        end
        `OP_CCF: begin
            alu_res = '0;
            alu_res_buffer = '0;
            varZ = '0;
            alu_flags_out[`Z] = 1'b0;
            alu_flags_out[`N] = 1'b0;
            alu_flags_out[`H] = 1'b0;
            alu_flags_out[`C] = alu_flags_out[`C] ^ 1'b1;
        end
        `OP_CPL: begin
            alu_res = alu_a ^ 8'hFF;
            alu_res_buffer = '0;
            varZ = '0;
            alu_flags_out[`Z] = 1'b0;
            alu_flags_out[`N] = 1'b1;
            alu_flags_out[`H] = 1'b1;
            alu_flags_out[`C] = 1'b0;
        end
        default: begin
            alu_flags_out = alu_flags_in;
            alu_res = '0;
            alu_res_buffer = '0;
            varZ = '0;
        end
endcase


end

endmodule
