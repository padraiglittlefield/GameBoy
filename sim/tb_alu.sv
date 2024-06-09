`timescale 1ns/1ps
module tb_alu;

    localparam string RED     = "\033[31m";
    localparam string GREEN   = "\033[32m";
    localparam string RESET   = "\033[0m";

    localparam NUM_TESTS = 1000;

    logic [7:0] alu_a; 
    logic [7:0] alu_b;
    logic [2:0] bit_index;
    logic [7:0] alu_res;
    logic [3:0] alu_flags_in;
    logic [3:0] alu_flags_out;
    logic [4:0] alu_op;
    logic [31:0] tests_failed='0;
    int log_file;

    alu dut(
        .alu_a(alu_a),
        .alu_b(alu_b),
        .bit_index(bit_index),
        .alu_res(alu_res),
        .alu_flags_in(alu_flags_in),
        .alu_flags_out(alu_flags_out),
        .alu_op(alu_op)
    );


    initial begin
        $dumpfile("tb_alu.vcd");
        $dumpvars(0, tb_alu);

        log_file = $fopen("test_results.log", "w");
        if (log_file == '0) begin
            $display("Error: Could not open log file for writing");
        end


        $display("============ STARTING TESTS ============");
        //sbc_edge();
        //add tests

        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_add_value();
            test_add_flags();
        end

        //adc tests
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_add_carry_value();
            test_add_carry_flags();
        end

        //sub tests
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_sub_value();
            test_sub_flags_test(); 
        end

        //sbc tests
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_sub_carry_value();
            test_sub_carry_flags_test(); 
        end

        //and tests
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_and(); 
        end

        //xor test
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_xor(); 
        end

        //or test
        for(int i = 0; i < NUM_TESTS; i = i + 1) begin
            test_or(); 
        end

        test_rlc_c0();
        test_rlc_c1();
        
        test_rrc_c1();
        test_rrc_c0();
        
        test_rl();
        test_rr();
        test_sla();
        test_sra();
        test_srl();







        $display("============ ENDING TESTS ============");
        $display();
        if(tests_failed == '0) begin
            $display("%sYOU PASSED ALL TESTS :)%s", GREEN, RESET);    
            $fdisplay(log_file,"ALL TESTS WERE PASSED");
        end else $display("%s YOU FAILED %d TEST(S) >:| %s", RED, tests_failed ,RESET);
        $display();
        #20 
        $fclose(log_file);
        $finish;

    end

    task failed();
        begin
            tests_failed += 1;
        end
    endtask

    task sbc_edge();
        alu_op = OP_SBC; 
        alu_a = 100;
        alu_b = 255;
        alu_flags_in = 4'b0001;
    endtask

    task test_add_value(); 
    integer a, b, expected;
        begin
            alu_op = OP_ADD; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a + b;
            #1
            $display();
            $display("============ ADD Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected[7:0]);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    
    task test_add_flags(); 
        integer a, b, expected, expected_h, expected_c;
        begin
            alu_op = OP_ADD; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a + b;
            expected_h = expected[3] == 1'b1 ? 1: 0;
            expected_c = expected[8] == 1'b1 ? 1: 0;;
            #1
            $display();
            $display("============ ADD Flag Test ============");
            $display("a = %d, b = %d", a, b);
            $display("HALF FLAG:");
            $display("EXPECTED VALUE: %d", expected_h);
            $display("ACTUAL VALUE: %d", alu_flags_out[H]);
            case(alu_flags_out[H]) 
                expected_h[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[H]), int'(expected_h));

                end
            endcase
            $display(); 
            $display("CARRY FLAG:");
            $display("EXPECTED VALUE: %d", expected_c);
            $display("ACTUAL VALUE: %d", alu_flags_out[C]);
            case(alu_flags_out[C]) 
                expected_c[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[C]), int'(expected_c));

                end
            endcase
        end
    endtask




    task test_add_carry_value();
    integer a, b, expected, flags;
        begin
            alu_op = OP_ADC; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            flags = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = flags[3:0];
            expected = a + b + int'(flags[0]);
            #1
            $display();
            $display("============ ADC Value Test ============");
            $display("a = %d, b = %d, CF = %d ", a, b, flags[0]);
            $display("EXPECTED VALUE: %d", expected[7:0]);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    task test_add_carry_flags(); 
        integer a, b, expected, expected_h, expected_c;
        begin
            alu_op = OP_ADC; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a + b;
            expected_h = expected[3] == 1'b1 ? 1: 0;
            expected_c = expected[8] == 1'b1 ? 1: 0;;
            #1
            $display();
            $display("============ ADC Flag Test ============");
            $display("a = %d, b = %d", a, b);
            $display("HALF FLAG:");
            $display("EXPECTED VALUE: %d", expected_h);
            $display("ACTUAL VALUE: %d", alu_flags_out[H]);
            case(alu_flags_out[H]) 
                expected_h[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[H]), int'(expected_h));

                end
            endcase
            $display(); 
            $display("CARRY FLAG:");
            $display("EXPECTED VALUE: %d", expected_c);
            $display("ACTUAL VALUE: %d", alu_flags_out[C]);
            case(alu_flags_out[C]) 
                expected_c[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[C]), int'(expected_c));

                end
            endcase
        end
    endtask

    task test_sub_value(); 
        integer a, b, expected;
        begin
            alu_op = OP_SUB; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a - b;
            #1
            $display();
            $display("============ SUB Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    task test_sub_flags_test(); 
        integer a, b, expected_h, expected_c;
        begin
            alu_op = OP_SUB; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected_h = b[3:0] > a[3:0] ? 1 : 0;
            expected_c = b > a ? 1 : 0;
            #1
            $display();
            $display("============ SUB Borrw Flag Test ============");
            $display("a = %d, b = %d", a, b);
            $display("HALF FLAG:");
            $display("EXPECTED VALUE: %d", expected_h);
            $display("ACTUAL VALUE: %d", alu_flags_out[H]);
            case(alu_flags_out[H]) 
                expected_h[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[H]), int'(expected_h));

                end
            endcase
            $display(); 
            $display("BORROW FLAG:");
            $display("EXPECTED VALUE: %d", expected_c);
            $display("ACTUAL VALUE: %d", alu_flags_out[C]);
            case(alu_flags_out[C]) 
                expected_c[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[C]), int'(expected_c));

                    
                end
            endcase
        end
    endtask


    task test_sub_carry_value(); 
        integer a, b, expected, flags;
        begin
            alu_op = OP_SBC; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            flags = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = flags[3:0];
            expected = a - b - int'(flags[0]);
            #1
            $display();
            $display("============ SBC Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    task test_sub_carry_flags_test(); 
        integer a, b, expected_h, expected_c, flags, expected;
        begin
            alu_op = OP_SBC; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            flags = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = flags[3:0];
            expected_h = (b[3:0]) + {3'b000,flags[0]} > (a[3:0]) ? 1 : 0;
            expected_c = (b[7:0] + {7'b0000000, alu_flags_in[C]}) > a[7:0] ? 1 : 0;
            #1
            $display();
            $display("============ SBC Borrw Flag Test ============");
            $display("a = %d, b = %d", a, b);
            $display("HALF FLAG:");
            $display("EXPECTED VALUE: %d", expected_h);
            $display("ACTUAL VALUE: %d", alu_flags_out[H]);
            case(alu_flags_out[H]) 
                expected_h[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[H]), int'(expected_h));

                end
            endcase
            $display(); 
            $display("BORROW FLAG:");
            $display("EXPECTED VALUE: %d", expected_c);
            $display("ACTUAL VALUE: %d", alu_flags_out[C]);
            case(alu_flags_out[C]) 
                expected_c[0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_flags_out[C]), int'(expected_c));

                    
                end
            endcase
        end
    endtask


    task test_and(); 
        integer a, b, expected;
        begin
            alu_op = OP_AND; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a & b;
            #1
            $display();
            $display("============ AND Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    task test_xor(); 
        integer a, b, expected;
        begin
            alu_op = OP_XOR;
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a ^ b;
            #1
            $display();
            $display("============ XOR Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask

    task test_or(); 
        integer a, b, expected;
        begin
            alu_op = OP_OR; 
            a = $urandom_range(0, 255);
            b = $urandom_range(0, 255);
            alu_a = a[7:0];
            alu_b = b[7:0];
            alu_flags_in = 4'b0000;
            expected = a | b;
            #1
            $display();
            $display("============ OR Value Test ============");
            $display("a = %d, b = %d", a, b);
            $display("EXPECTED VALUE: %d", expected);
            $display("ACTUAL VALUE: %d", alu_res);
            case(alu_res) 
                expected[7:0]: $display("%sPASSED%s", GREEN, RESET);
                default: begin
                    $display("%sFAILED%s", RED, RESET);
                    tests_failed = tests_failed + 1;
                    log_failed_test(int'(alu_op), int'(a), int'(b), int'(alu_res), int'(expected));

                end
            endcase 
        end
    endtask



    task test_rlc_c0();
        alu_op = OP_RLC;
        alu_b = 0;
        alu_a = 8'b01101101;
        alu_flags_in = 4'b0000;
        #1
        $display();
        $display("============ RLC Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b", 8'b11011010);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b11011010: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b11011010));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 0);
        $display("ACTUAL VALUE: %b", alu_flags_out[C]);
        case(alu_flags_out[C])
            0: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 0);

            end
        endcase
    endtask

    task test_rlc_c1();
        alu_op = OP_RLC;
        alu_b = 0;
        alu_a = 8'b11101101;
        alu_flags_in = 4'b0000;
        #1
        $display();
        $display("============ RLC Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b", 8'b11011011);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b11011011: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b11011011));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase
    endtask


    task test_rrc_c1();
        alu_op = OP_RRC;
        alu_b = 0;
        alu_a = 8'b01101101;
        alu_flags_in = 4'b0000;
        #1
        $display();
        $display("============ RRC Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b", 8'b10110110);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b10110110: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b10110110));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %b", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase
    endtask

    task test_rrc_c0();
        alu_op = OP_RRC;
        alu_b = 0;
        alu_a = 8'b11101100;
        alu_flags_in = 4'b0000;
        #1
        $display();
        $display("============ RRC Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b", 8'b01110110);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b01110110: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b01110110));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 0);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            0: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 0);

            end
        endcase
    endtask


    task test_rl();
        alu_op = OP_RL;
        alu_flags_in = 4'b0001;
        alu_a = 8'b01110111;
        alu_b = '0;
        #1
        $display();
        $display("============ RL Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b11101111);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
           8'b11101111: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b11101111));
            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 0);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            0: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 0);

            end
        endcase



        #5
        alu_flags_in = 4'b0000;
        alu_a = 8'b11101111;
        #2
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b11011110);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
           8'b11011110: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b11011110));
            end
        endcase 

        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase

    endtask


    task test_rr();
        alu_op = OP_RR;
        alu_flags_in = 4'b0001;
        alu_a = 8'b01110111;
        alu_b = '0;
        #1
        $display();
        $display("============ RR Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b", 8'b10111011);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
           8'b10111011: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b10111011));
            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase



        #5
        alu_flags_in = 4'b0000;
        alu_a = 8'b11101111;
        #2
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b01110111);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
           8'b01110111: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b01110111));
            end
        endcase 

        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase

    endtask


    task test_sla();
        alu_op = OP_SLA;
        alu_a = 8'b11101111;
        alu_b = 0;
        alu_flags_in = 4'b000;
        #1
        #1
        $display();
        $display("============ SLA Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b11011110);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b11011110: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b11011110));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase
    endtask



    task test_sra();
        alu_op = OP_SRA;
        alu_a = 8'b01101111;
        alu_b = 0;
        alu_flags_in = 4'b000;
        #1
        #1
        $display();
        $display("============ SRA Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b00110111);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b00110111: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b00110111));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase
    endtask

    task test_srl();
        alu_op = OP_SRL;
        alu_a = 8'b11101111;
        alu_b = 0;
        alu_flags_in = 4'b000;
        #1
        #1
        $display();
        $display("============ SRL Value Test ============");
        $display("a = %d, b = %d", alu_a, alu_b);
        $display("EXPECTED VALUE: %b",8'b01110111);
        $display("ACTUAL VALUE: %b", alu_res);
        case(alu_res)
            8'b01110111: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), int'(8'b01110111));

            end
        endcase 
        $display("Checking carry flag...");
        $display("EXPECTED VALUE: %d", 1);
        $display("ACTUAL VALUE: %d", alu_flags_out[C]);
        case(alu_flags_out[C])
            1: $display("%sPASSED%s", GREEN, RESET);
            default: begin
                $display("%sFAILED%s", RED, RESET);
                tests_failed = tests_failed + 1;
                log_failed_test(int'(alu_op), int'(alu_a), int'(alu_b), int'(alu_res), 1);

            end
        endcase
    endtask


function void log_failed_test(int op, int a, int b, int result, int expected);

    $fdisplay(log_file, "OP: %d, a: %d, b: %d || EXPECTED: %d, ACTUAL: %d",op,a,b,expected,result);

endfunction







    

endmodule