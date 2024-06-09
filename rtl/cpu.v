`include "/home/plittlefield6/GitHub/GameBoy/rtl/common_defs.vh"
`include "/home/plittlefield6/GitHub/GameBoy/rtl/idu.v"
`include "/home/plittlefield6/GitHub/GameBoy/rtl/control.v"
`include "/home/plittlefield6/GitHub/GameBoy/rtl/regfile.v"
`include "/home/plittlefield6/GitHub/GameBoy/rtl/alu.v"


module cpu(
    input clk,
    input rst,
    //output rd,
    output cpu_wr, 
    input [7:0] data_in,
    output [7:0] data_out,
    output [15:0] address_out,
    input [3:0] flags_in,
    output [3:0] flags_out
);
    

    //bus
    reg [15:0] address_bus_buffer;
    reg [7:0] data_bus_in_buffer;
    reg [7:0] data_bus_out_buffer;
    
    
    reg [2:0] m_cycle;          // current m_cycle
    reg [2:0] next_m_cycle;

    reg imu;

    // registers
    reg [7:0] instruction;     // IR
    reg [7:0] ie;               // IE
    reg [7:0] accumulator;     // A
    reg [3:0] flags_reg ;    // F
    reg [15:0] pc;            // PC
    reg [15:0] sp;           // SP

    reg m_clk;


    //buffers
    wire[7:0] next_acc;
    
    wire[3:0] next_flags_reg;
    wire next_imu;

    reg fetch_en;
    reg stop;
    reg halt;
    reg wake;

    reg cpu_wr_en_buf;


    // immediate registers
    reg [7:0] imm_z_reg; 
    reg [7:0] imm_w_reg;
    wire z_wr_en;
    wire w_wr_en;


    wire [1:0] adr_bus_src;
    wire cb_instr;
    //

    wire[1:0] alu_res_dst;
    wire [2:0] alu_a_src;
    wire [2:0] alu_b_src;
    wire [4:0] alu_op;
    wire [7:0] alu_res;
    wire [7:0] alu_a;
    wire [7:0] alu_b;
    wire [7:0] alu_res_buffer;
    reg [15:0] idu_res_buffer;

    wire reg_we_buffer;

    wire [15:0] idu_in;
    wire [15:0] idu_out;

    reg reg_we;
    wire [2:0] reg_wa;
    reg [7:0] reg_wd;
    wire [7:0] reg_rd;
    reg [2:0] reg_rd_adr;
    reg reg_wea;
    reg [15:0] reg_wda;
    wire [1:0] reg_waa;
    wire [15:0] reg_rda;
    reg [1:0] reg_rda_adr;
    wire reg_wda_src;


    wire [1:0] idu_mode;
  
    wire d_bus_src;
    wire jmp_dst;
    wire pc_jp;
    wire [1:0] d_bus_dst;

    wire [1:0] idu_src;
    

    regfile registers(
        .clk(clk),
        .rst(rst),
        .wd(reg_wd),
        .we(reg_we),
        .wa(reg_wa),
        .rd(reg_rd),
        .rd_adr(reg_rd_adr),
        .wea(reg_wea),
        .wda(reg_wda),
        .waa(reg_waa),
        .rda(reg_rda),
        .rda_adr(reg_rda_adr)
    );

    reg [1:0] idu_dst;
    idu idu0(
       .rst(rst),
       .data_in(idu_in),
       .mode(idu_mode),
       .data_out(idu_out) 
    );

    alu alu0 (
        .alu_a(alu_a),
        .alu_b(alu_b),
        .alu_res(alu_res),
        .alu_flags_in(flags_reg),
        .alu_flags_out(next_flags_reg),
        .alu_op(alu_op)
    );

    wire next_cb_instr;
    control signal_controller(
        .clk(m_clk),
        .rst(rst),
        .instr(instruction),
        .m_cycle(m_cycle),
        .acc_in(accumulator),
        .acc_out(next_acc),
        .alu_a_src(alu_a_src),
        .alu_b_src(alu_b_src),
        .alu_op(alu_op),
        .alu_res_dst(alu_res_dst),
        .idu_dst(idu_dst),
        .reg_we(reg_we_buffer),
        .reg_wa(reg_wa),
        .reg_rd_adr(reg_rd_adr),
        .reg_wea(reg_wea),               
        .reg_waa(reg_waa),                
        .reg_rda_adr(reg_rda_adr),
        .idu_mode(idu_mode),
        .imm_z_en(z_wr_en),
        .imm_w_en(w_wr_en),
        .fetch_en(fetch_en),
        .ime_next(next_imu),
        .halt(halt),
        .stop(stop),
        .wake(wake),
        .next_m_cycle(next_m_cycle),
        .adr_bus(adr_bus_src),
        .cpu_wr_en(cpu_wr_en_buf),
        .d_bus(d_bus_src),
        .jmp_dst(jmp_dst),
        .pc_jp(pc_jp),
        .reg_wda_src(reg_wda_src),
        .d_bus_dst(d_bus_dst),
        .flags(flags_reg),
        .imm_z_in(imm_z_reg),
        .idu_src(idu_src)
    );


    reg [1:0] t_cycle;



    assign alu_a = (alu_a_src == `ALU_SRC_R8) ? reg_rd : (alu_a_src == `ALU_SRC_ACC ? accumulator : (alu_a_src == `ALU_SRC_IMM8 ? imm_z_reg : (8'h00)));
    assign alu_b = (alu_b_src == `ALU_SRC_R8) ? reg_rd : (alu_b_src == `ALU_SRC_ACC ? accumulator : (alu_b_src == `ALU_SRC_IMM8 ? imm_z_reg : ( alu_b_src == `ALU_SRC_ONE ? 8'h01 : (alu_b_src == `ALU_SRC_INSTR ? instruction : (alu_b_src == `ALU_SRC_PCL ? pc[7:0] : 8'h00)))));
    


    // initial conditions during boot
    initial begin
        m_clk = 1;
    end

    //updates t-cycle
    wire [1:0] next_t_cycle;
    assign next_t_cycle = t_cycle + 1'b01;
    always@(posedge clk) begin
        if(rst) begin
            t_cycle <= 2'b00;
        end else begin
            t_cycle <= next_t_cycle;
        end
    end



    always@(posedge clk) begin
        if(rst) begin
            instruction <= 8'h00;     
            ie <= 8'h00;              
            accumulator <= 8'h00;    
            flags_reg <= 4'h0;     
            pc <= 16'h0000;          
            sp <= 16'h000;  
            imm_z_reg <= 8'h00; 
            imm_w_reg <= 8'h00;   
            address_bus_buffer <= pc;   
            m_cycle <= 3'b000;   
            m_clk <= 1;   


        end else begin
            case(t_cycle) 
                2'b00: begin 
                    //let it do its stuff
                     address_bus_buffer <= (adr_bus_src == `AB_PC ? pc : (adr_bus_src == `AB_GP_REG ? reg_rda : (adr_bus_src == `AB_IMM ? {imm_w_reg,imm_z_reg} : (adr_bus_src == `AB_PC_H ? {8'h00,pc[15:8]} : '0 ))));
                     

                end
                2'b01: begin
                    

                    //save results from alu
                    case(alu_res_dst)
                        `ALU_RES_DST_ACC: begin
                            accumulator <= alu_res_buffer;
                        end
                        `ALU_RES_DST_R8: begin
                            reg_wd <= alu_res_buffer;
                            reg_we <= reg_we_buffer;
                        end
                        `ALU_RES_DST_RIEN: begin
                            if(d_bus_dst == `DB_DST_ACC) begin
                                accumulator <= data_bus_in_buffer;
                            end
                        end

                        `ALU_RES_DST_IMMZ: begin
                            imm_z_reg <= alu_res_buffer;
                        end
                        default: begin 
                        end

                    endcase
                    flags_reg <= next_flags_reg;

                    //save results from idu if not pc
                    if(idu_dst == `IDU_DST_r16) begin
                        reg_wda <= idu_res_buffer;
                    end else if(reg_wda_src == `WDA_SRC_IMM16 && reg_wea) begin
                        reg_wda <= {imm_w_reg, imm_z_reg};
                    end


                    



                    m_clk <= 0;
                end
                2'b10: begin
                    case(cpu_wr_en_buf) //read/write data from memory
                        1'b0: begin // read data
                            if(fetch_en) begin
                                instruction <= data_bus_in_buffer;
                            end else if (z_wr_en) begin
                                imm_z_reg <= data_bus_in_buffer;
                            end else if (w_wr_en) begin
                                imm_w_reg <= data_bus_in_buffer;
                            end
                        end
                        1'b1: begin //write data
                            case(d_bus_src)
                                `DB_R8:
                                    data_bus_out_buffer <= reg_rd;
                                `DB_ACC: begin
                                    data_bus_out_buffer <= accumulator;
                                end
                            endcase
                        end
                    endcase
                    
                    reg_we <= 1'b0;
                    //update pc
                    if(pc_jp == 1'b1) begin //set pc to values loaded from memory
                        case(jmp_dst)
                            `JMP_DST_WZ: pc <= {imm_w_reg,imm_z_reg};
                            `JMP_DST_HL: pc <= idu_res_buffer;
                        endcase
                    end else begin
                        if(idu_dst == `IDU_DST_PC) begin
                            pc <= idu_res_buffer;
                        end else if(idu_dst == `IDU_DST_W) begin
                            imm_w_reg <= idu_res_buffer[7:0];
                        end else begin
                            pc <= pc;  
                        end
                    end

                    
                    address_bus_buffer <= (adr_bus_src == `AB_PC ? pc : (adr_bus_src == `AB_GP_REG ? reg_rda : (adr_bus_src == `AB_IMM ? {imm_w_reg,imm_z_reg} : (adr_bus_src == `AB_PC_H ? {8'h00,pc[15:8]} : '0 ))));

                    //
                    
                end
                2'b11: begin
                    m_cycle <= next_m_cycle;
                    m_clk <= 1;

                end

            endcase
        end
    end

    assign cb_instr = next_cb_instr;
    assign alu_res_buffer = alu_res;
    assign idu_in = idu_src == `IDU_SRC_AB ? address_bus_buffer : ( idu_src == `IDU_SRC_PC_H ? {8'h00,pc[15:8]} : (idu_src == `IDU_SRC_GP_REG ? reg_rda : 16'h0000));
    assign idu_res_buffer = idu_out;
    assign data_out = data_bus_out_buffer;
    assign data_bus_in_buffer = data_in;
    assign address_out = address_bus_buffer;
    assign cpu_wr = cpu_wr_en_buf;

endmodule 