`timescale 1ns/1ps

module iram(
    input rst,
    input clk,
    input[15:0] adr,
    output [7:0] data_out,
    input wr_en,
    input [7:0] data_in
);


assign data_out = rst == 1 ? '0 : mem[adr];
reg [7:0] mem [0:65535];       //iram memory

///instructions


initial begin
    
    //add a, imm8
    mem[0] = 8'hC6;
    mem[1] = 8'hA1;

    //sub a, imm8
    mem[2] = 8'hD6;
    mem[3] = 8'h01;
    
    //inc b
    mem[4] = 8'h04;

    //inc b
    mem[5] = 8'h04;

    //add a, b
    mem[6] = 8'h80;


    //ld c, n
    mem[7] = 8'h0E;
    mem[8] = 8'hEA;

    //RLCA
    mem[9] = 8'h07;

    //LD DE, nn
    mem[10] = 8'h11;
    mem[11] = 8'hDA;
    mem[12] = 8'hDA;


    //LD A, (nn)
    mem[13] = 8'hFA;
    mem[14] = 8'hDD;
    mem[15] = 8'hDD;

    //ADD a, c
    mem[16] = 8'h81;


    //ld (nn), a
    mem[17] = 8'hEA;
    mem[18] = 8'hEE;
    mem[19] = 8'hEE;

    //sub a, imm8
    mem[20] = 8'hD6;
    mem[21] = 8'h94;

    //LD A, (nn)
    mem[22] = 8'hFA;
    mem[23] = 8'hEE;
    mem[24] = 8'hEE;

    //CB SET 0,E
    mem[25] = 8'hCB;
    mem[26] = 8'hC3;

    //CB RES 0,E
    mem[27] = 8'hCB;
    mem[28] = 8'h83;

    //jr e
    mem[29] = 8'h20;
    mem[30] = 8'h05;

    //add a, imm8
    mem[31] = 8'hC6;
    mem[32] = 8'h05;


    //NOPs
    mem[33] = 8'h00;
    mem[34] = 8'h00;

    //sub a, imm8
    mem[35] = 8'hD6;
    mem[36] = 8'h05;

    //ld [DE], a
    mem[37] = 8'h12;

    //sub a, imm8
    mem[38] = 8'hD6;
    mem[39] = 8'h17;

    //ld a, [DE]
    mem[40] = 8'h1A;

    //INC BC
    mem[41] = 8'h03;

    //DEC BC
    mem[42] = 8'h0B;


    

    for(int i = 44; i < 32767; i++) begin
        mem[i] = '0;
    end
    mem[16'hDDDD] = 8'hAA;
    //mem[16'hDADA] = 8'h77;
    
end

always@(posedge clk) begin
    if(rst) begin
    end else begin
        if(wr_en) begin
            mem[adr] = data_in;
        end
    end

end

endmodule