module tb_idu;

logic rst;
logic [15:0] data_in;
logic [15:0] data_out;
logic mode;

idu dut (
    .rst(rst),
    .data_in(data_in),
    .mode(mode),
    .data_out(data_out)
);



initial begin
    $dumpfile("tb_idu.vcd");
    $dumpvars(0, tb_idu);
    rst = 1;
    #5
    inc();
    #5
    dec();
    #20
    $finish;
end 


task inc();
    begin
      rst = 0;
      data_in = 17;
      mode = 1;  
    end 
endtask

task dec();
    begin
      rst = 0;
      data_in = 17;
      mode = 0;  
    end 
endtask




endmodule