`timescale 1ns/1ps
module regfile (
    input clk,                 // clk
    input rst,                 // reset
    input [7:0] wd,            // data bus in
    input we,                  // write enable
    input[2:0] wa,             // write address
    output [7:0] rd,           // data bus o_viewut
    input [2:0] rd_adr,        // addr. for read data

    input wea,                  // 16-bit write enable
    input [15:0] wda,           // 16-bit write
    input [1:0] waa,            // 16-bit write address
    output [15:0] rda,          // 16 address bus
    input [1:0] rda_adr

);

wire [3:0] waa_cl;
reg [7:0] regs [0:5];         // registers array

// assign hl = {regs[4'd4], regs[4'd5]};
// assign sp = {regs[4'd6], regs[4'd7]};
assign rd = regs[rd_adr];
assign rda = {regs[{1'b0,rda_adr} + {1'b0,rda_adr}], regs[{1'b0,rda_adr} + {1'b0,rda_adr} + 3'b001]};


integer i;
always@(posedge clk) begin
    if (rst) begin
        for(i = 0; i < 11; i = i + 1) begin
            regs[i] <= 8'b0;
        end     
    end else begin
        if(we) begin
            regs[wa] <= wd;
        end else if(wea) begin
            regs[{1'b0,waa} + {1'b0,waa}] <= wda[15:8];
            regs[{1'b0,waa} + {1'b0,waa} + 3'b001] <= wda[7:0];
        end
    end
end

endmodule