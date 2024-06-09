`include "/home/plittlefield6/GitHub/GameBoy/rtl/common_defs.vh"
module idu (
    input rst,
    input [15:0] data_in,           // input data
    input [1:0] mode,                     // mode. 1: inc, 0:dec
    output [15:0] data_out          // data output
);  

assign data_out = rst ? 0 : (mode == `INC ? data_in + 1 : (mode == `DEC ? data_in - 1 : (mode == `NOP ? data_in : '0))); 


endmodule