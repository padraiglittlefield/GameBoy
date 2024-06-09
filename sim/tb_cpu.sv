`timescale 1ns/1ps
`include "/home/plittlefield6/GitHub/GameBoy/rtl/iram.v"
module tb_cpu;

    logic clk;
    logic rst;
    logic wr;
    logic [7:0] data_in;
    logic [7:0] data_out;
    logic [15:0] address_out;
    logic [3:0] flags_in;
    logic [3:0] flags_out;


    localparam CLK_PERIOD = 5; //Set clock period: 20 ns
    
    localparam DUTY_CYCLE = 0.5;

    initial begin
        forever //run the clock forever
        begin		
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b1; //wait 10 ns then set clock high
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b0; //wait 10 ns then set clock low
        end
	end


    cpu dut(
        .clk(clk),
        .rst(rst),
        .cpu_wr(wr),
        .data_in(data_in),
        .data_out(data_out),
        .address_out(address_out),
        .flags_in(flags_in),
        .flags_out(flags_out)
    );

    iram mem(
        .clk(clk),
        .rst(rst),
        .adr(address_out),
        .data_out(data_in),
        .data_in(data_out),
        .wr_en(wr)
    );

    initial begin
        $dumpfile("tb_cpu.vcd");
        $dumpvars(0, tb_cpu);
        rst=1;
        #3
        rst=0;
     


        #1200

        $finish;

        

    end


endmodule