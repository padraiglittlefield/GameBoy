
`timescale 1ns/1ps

module tb_regfile;
    logic clk;               // clk
    logic rst;                 // reset
    logic [7:0] wd;            // data bus in
    logic we;                  // write enable
    logic[3:0] wa;             // write address
    logic [7:0] rd;           // data bus out
    logic [3:0] rda;           // addr. for read data
    logic [15:0] addr_out;    // addresslogic

    //alu i/o
    logic [3:0] r1_addr;       // r1 address
    logic [3:0] r2_addr;       // r2 address
    logic [7:0] r1;           // register 1
    logic [7:0] r2;           // register 2
    logic [7:0] alu_res;       // result of operation
    logic alu_we;              // write enable from alu
    logic[3:0] alu_waddr;      // write addr. from alu


    //idu i/o
    logic [15:0] idu_res;      // result of idu
    logic idu_we;              // write enable from idu
    logic [15:0] sp;            // stack pointer

    localparam CLK_PERIOD = 20;
    localparam DELAY = 5;
    localparam DUTY_CYCLE = 0.5;


    //define clock
    //run the clock forever, flipping back and forth between 1 and 0
    initial begin
        forever begin
            #5 clk = ~clk;
        end
	end

    regfile register_file (
        .clk(clk),
        .rst(rst),
        .wd(wd),
        .we(we),
        .wa(wa),
        .rd(rd),
        .rda(rda),
        .addr_out(addr_out),
        .r1_addr(r1_addr),
        .r2_addr(r2_addr),
        .r1(r1),
        .r2(r2),
        .alu_res(alu_res),
        .alu_we(alu_we),
        .alu_waddr(alu_waddr),
        .idu_res(idu_res),
        .idu_we(idu_we),
        .sp(sp)
    );

    initial begin
        $dumpfile("tb_regfile.vcd");
        $dumpvars(0, tb_regfile);
        clk = 0;
        rst = 1;
        we = 0;
        #5
        //load_to_accumulator();
        alu_add();
        #20 $finish;
    end

    task load_to_accumulator();
        begin
            rst = 0;
            we = 1;
            wa = 2;
            wd = 5;
        end
    endtask

    task idu_no_enable();
        begin
            rst = 0;
            idu_we = 0;
            idu_res = 256;
        end
    endtask 
    
    task idu_enable();
        begin
            rst = 1;
            idu_we = 0;
            idu_res = 256;
        end
    endtask

    task alu_add();
        begin
            @(posedge clk)
            rst = 0;
            we = 1;
            wd = 5;
            wa = 2;
            @(posedge clk)
            we = 1;
            wd = 7;
            wa = 4;
            @(posedge clk)
            we = 0;
            r1_addr = 2;
            r2_addr = 4;
            alu_res = 19;
            alu_we = 1;
            alu_waddr = 2;
        end
    endtask 


    
    


endmodule
    
