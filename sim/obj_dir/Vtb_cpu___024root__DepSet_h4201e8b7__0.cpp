// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf);

void Vtb_cpu___024root___eval_initial(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_cpu___024root___eval_initial__TOP(vlSelf);
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 
        = vlSelf->tb_cpu__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__dut__DOT__m_clk__0 
        = vlSelf->tb_cpu__DOT__dut__DOT__m_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x9c4ULL, 
                                           nullptr, 
                                           "tb_cpu.sv", 
                                           22);
        vlSelf->tb_cpu__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(0x9c4ULL, 
                                           nullptr, 
                                           "tb_cpu.sv", 
                                           23);
        vlSelf->tb_cpu__DOT__clk = 0U;
    }
}

void Vtb_cpu___024root___act_sequent__TOP__0(Vtb_cpu___024root* vlSelf);

void Vtb_cpu___024root___eval_act(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_cpu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___act_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_call_en = 0U;
        vlSelf->tb_cpu__DOT__data_in = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
    } else {
        vlSelf->tb_cpu__DOT__data_in = vlSelf->tb_cpu__DOT__mem__DOT__mem
            [vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer];
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
        if ((0xcbU != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                      >> 2U)))) {
                            if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ (IData)(
                                                         (0x20U 
                                                          == 
                                                          (0xe7U 
                                                           & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                                        if ((0x10U 
                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                            }
                                                        } else if (
                                                                   (0U 
                                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                        }
                                                    } else if (
                                                               (0U 
                                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                            = 
                                                            (3U 
                                                             & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                >> 4U));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            if (
                                                                (2U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                            if (
                                                                (0U 
                                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                if (
                                                                    (1U 
                                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                    if (
                                                                        (2U 
                                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src = 0U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 1U;
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 1U;
                                                        } else {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en 
                                                    = 
                                                    (1U 
                                                     & ((2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))
                                                         ? 
                                                        (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))
                                                         : 
                                                        (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                    >> 2U)))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))));
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 2U)))) {
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(
                                                     (0x20U 
                                                      == 
                                                      (0xe7U 
                                                       & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                                    if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 1U;
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 1U;
                                                        } else if (
                                                                   (1U 
                                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (0U 
                                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            if (
                                                                (1U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                            } else if (
                                                                       (2U 
                                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                    }
                                }
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                }
                            }
                        }
                    } else {
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                }
                            } else if ((IData)((0x20U 
                                                == 
                                                (0xe7U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                }
                            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                   >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            } else if (
                                                       (2U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((IData)((0x20U == 
                                            (0xe7U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    } else if ((1U 
                                                != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 3U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x13U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 3U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x12U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    }
                } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x11U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    }
                } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x10U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xfU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xeU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xdU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    }
                } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xcU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xbU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xaU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 9U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                }
            } else {
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    }
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 8U;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 7U;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 6U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 5U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 4U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 2U;
                                            }
                                        }
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                            }
                                        }
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 8U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 7U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 6U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 5U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 6U)))) {
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                            = (7U & 
                                               ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                >> 3U));
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 3U));
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 1U;
                                }
                            }
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x16U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x15U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x17U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x14U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xcU;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xbU;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xaU;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 9U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                } else {
                                    if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                        }
                                    }
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            }
                        }
                    } else {
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 7U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                }
                            } else if ((IData)((0x20U 
                                                == 
                                                (0xe7U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 7U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                }
                            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((IData)((0x20U == 
                                            (0xe7U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                        >> 3U));
                                            }
                                        }
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                            = (7U & 
                                               ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                >> 3U));
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 3U));
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer 
            = (0xffffU & ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                           ? ((IData)(1U) + (0xffffU 
                                             & ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                 ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                  ? 
                                                 VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                   : 0U)))))
                           : ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                               ? ((0xffffU & ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                               ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                               : ((1U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                    ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                    : 0U)))) 
                                  - (IData)(1U)) : 
                              ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                                ? (0xffffU & ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                               ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                               : ((1U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                    ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                    : 0U))))
                                : 0U))));
        if ((0xcbU == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
        } else if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
            if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            }
        } else if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                            if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                        if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                            } else {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 3U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                                        } else {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        } else {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 3U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                                    } else {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                             >> 6U)))) {
            if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                        = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                  & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                        >> 7U)))) ? 1U
                            : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                   >> 7U)) ? 2U : 0U));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((IData)((0x20U == (0xe7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc 
                        = (3U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                 >> 3U));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met 
                        = (1U & ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                  ? ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                      ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)
                                      : (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)))
                                  : ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                      ? ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                         >> 3U) : (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                                    >> 3U)))));
                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                            = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                      & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                            >> 7U))))
                                ? 1U : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                         & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                            >> 7U))
                                         ? 2U : 0U));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                    } else {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 2U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                        } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__rst)))) {
        if ((0xcbU == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 1U;
        } else if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
            if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                             >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                          >> 6U)))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                        }
                    }
                } else if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ (IData)((0x20U 
                                              == (0xe7U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                            if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vtb_cpu___024root___nba_sequent__TOP__0(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_sequent__TOP__1(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_sequent__TOP__2(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_comb__TOP__0(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_sequent__TOP__3(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_comb__TOP__1(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___nba_comb__TOP__2(Vtb_cpu___024root* vlSelf);

void Vtb_cpu___024root___eval_nba(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__tb_cpu__DOT__dut__DOT__pc;
    __Vdly__tb_cpu__DOT__dut__DOT__pc = 0;
    CData/*7:0*/ __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9;
    __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 = 0;
    CData/*2:0*/ __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9;
    __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 = 0;
    CData/*7:0*/ __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10;
    __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 = 0;
    CData/*2:0*/ __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10;
    __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 = 0;
    CData/*7:0*/ __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11;
    __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 = 0;
    CData/*2:0*/ __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11;
    __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v0;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 = 0;
    // Body
    __Vdly__tb_cpu__DOT__dut__DOT__pc = vlSelf->tb_cpu__DOT__dut__DOT__pc;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v0 = 0U;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 = 0U;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 = 0U;
    __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__rst)))) {
        if (vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf) {
            vlSelf->tb_cpu__DOT__mem__DOT__mem[vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer] 
                = vlSelf->tb_cpu__DOT__dut__DOT__data_bus_out_buffer;
        }
        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)))) {
                if (vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf) {
                    if (vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf) {
                        if (vlSelf->tb_cpu__DOT__dut__DOT__d_bus_src) {
                            if (vlSelf->tb_cpu__DOT__dut__DOT__d_bus_src) {
                                vlSelf->tb_cpu__DOT__dut__DOT__data_bus_out_buffer 
                                    = vlSelf->tb_cpu__DOT__dut__DOT__accumulator;
                            }
                        } else {
                            vlSelf->tb_cpu__DOT__dut__DOT__data_bus_out_buffer 
                                = vlSelf->tb_cpu__DOT__dut__DOT__reg_rd;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__i = 0xbU;
        __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v0 = 1U;
    } else if (vlSelf->tb_cpu__DOT__dut__DOT__reg_we) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hfbbcb370__0 
            = vlSelf->tb_cpu__DOT__dut__DOT__reg_wd;
        if ((5U >= (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_wa))) {
            __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 
                = vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hfbbcb370__0;
            __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 
                = vlSelf->tb_cpu__DOT__dut__DOT__reg_wa;
            __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9 = 1U;
        }
    } else if (vlSelf->tb_cpu__DOT__dut__DOT__reg_wea) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hb7badc1b__0 
            = (0xffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_wda) 
                        >> 8U));
        if ((5U >= (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa) 
                          + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa))))) {
            __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 
                = vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hb7badc1b__0;
            __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 
                = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa) 
                         + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa)));
            __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10 = 1U;
        }
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_h057a96e2__0 
            = (0xffU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_wda));
        if ((5U >= (7U & ((IData)(1U) + ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa) 
                                         + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa)))))) {
            __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 
                = vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_h057a96e2__0;
            __VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 
                = (7U & ((IData)(1U) + ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa) 
                                        + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa))));
            __VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11 = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__rst)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst))) {
                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst)))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__reg_wd 
                            = vlSelf->tb_cpu__DOT__dut__DOT__alu_res;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)))) {
                vlSelf->tb_cpu__DOT__dut__DOT__reg_we = 0U;
            }
        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst))) {
                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst)))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__reg_we 
                        = vlSelf->tb_cpu__DOT__dut__DOT__reg_we_buffer;
                }
            }
        }
    }
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__ie = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__sp = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__m_clk = 1U;
        vlSelf->tb_cpu__DOT__dut__DOT__flags_reg = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__m_cycle = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__instruction = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer 
            = vlSelf->tb_cpu__DOT__dut__DOT__pc;
        __Vdly__tb_cpu__DOT__dut__DOT__pc = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__accumulator = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__t_cycle = 0U;
    } else {
        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__m_clk = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__m_cycle 
                    = vlSelf->tb_cpu__DOT__dut__DOT__next_m_cycle;
            }
            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)))) {
                if (vlSelf->tb_cpu__DOT__dut__DOT__pc_jp) {
                    if (vlSelf->tb_cpu__DOT__dut__DOT__jmp_dst) {
                        if (vlSelf->tb_cpu__DOT__dut__DOT__jmp_dst) {
                            __Vdly__tb_cpu__DOT__dut__DOT__pc 
                                = vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer;
                        }
                    } else {
                        __Vdly__tb_cpu__DOT__dut__DOT__pc 
                            = (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg) 
                                << 8U) | (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg));
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst))) {
                    __Vdly__tb_cpu__DOT__dut__DOT__pc 
                        = vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer;
                } else if ((3U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst))) {
                    __Vdly__tb_cpu__DOT__dut__DOT__pc 
                        = vlSelf->tb_cpu__DOT__dut__DOT__pc;
                }
                vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer 
                    = ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                        ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc)
                        : ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                            ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                            : ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                                ? (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg) 
                                    << 8U) | (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg))
                                : ((3U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                                    ? (0xffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc) 
                                                >> 8U))
                                    : 0U))));
                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf)))) {
                    if (vlSelf->tb_cpu__DOT__dut__DOT__fetch_en) {
                        vlSelf->tb_cpu__DOT__dut__DOT__instruction 
                            = vlSelf->tb_cpu__DOT__data_in;
                    }
                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__fetch_en)))) {
                        if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__z_wr_en)))) {
                            if (vlSelf->tb_cpu__DOT__dut__DOT__w_wr_en) {
                                vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg 
                                    = vlSelf->tb_cpu__DOT__data_in;
                            }
                        }
                        if (vlSelf->tb_cpu__DOT__dut__DOT__z_wr_en) {
                            vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg 
                                = vlSelf->tb_cpu__DOT__data_in;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc_jp)))) {
                    if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst))) {
                        if ((3U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg 
                                = (0xffU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer));
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
            vlSelf->tb_cpu__DOT__dut__DOT__m_clk = 0U;
            if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst))) {
                vlSelf->tb_cpu__DOT__dut__DOT__reg_wda 
                    = vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer;
            } else if (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_wda_src)) 
                        & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_wea))) {
                vlSelf->tb_cpu__DOT__dut__DOT__reg_wda 
                    = (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg) 
                        << 8U) | (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg));
            }
            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst))) {
                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg 
                        = vlSelf->tb_cpu__DOT__dut__DOT__alu_res;
                }
            }
        } else {
            vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer 
                = ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                    ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc)
                    : ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                        ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                        : ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                            ? (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg) 
                                << 8U) | (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg))
                            : ((3U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src))
                                ? (0xffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc) 
                                            >> 8U))
                                : 0U))));
        }
        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__flags_reg 
                    = vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg;
                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__accumulator 
                            = vlSelf->tb_cpu__DOT__dut__DOT__alu_res;
                    } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__d_bus_dst))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__accumulator 
                            = vlSelf->tb_cpu__DOT__data_in;
                    }
                }
            }
        }
        vlSelf->tb_cpu__DOT__dut__DOT__t_cycle = vlSelf->tb_cpu__DOT__dut__DOT__next_t_cycle;
    }
    if (__VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v0) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[0U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[1U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[2U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[3U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[4U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[5U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[0U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[1U] = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[2U] = 0U;
    }
    if (__VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[__VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9] 
            = __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v9;
    }
    if (__VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[__VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10] 
            = __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v10;
    }
    if (__VdlySet__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[__VdlyDim0__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11] 
            = __VdlyVal__tb_cpu__DOT__dut__DOT__registers__DOT__regs__v11;
    }
    vlSelf->tb_cpu__DOT__dut__DOT__pc = __Vdly__tb_cpu__DOT__dut__DOT__pc;
    vlSelf->tb_cpu__DOT__dut__DOT__next_t_cycle = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)));
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__1(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_call_en = 0U;
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__2(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_cpu__DOT__dut__DOT__wake = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_wake;
    vlSelf->tb_cpu__DOT__dut__DOT__stop = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop;
    vlSelf->tb_cpu__DOT__dut__DOT__halt = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt;
    vlSelf->tb_cpu__DOT__dut__DOT__next_imu = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next;
    vlSelf->tb_cpu__DOT__dut__DOT__next_acc = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out;
    vlSelf->tb_cpu__DOT__dut__DOT__alu_op = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr;
    vlSelf->tb_cpu__DOT__dut__DOT__idu_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src;
    vlSelf->tb_cpu__DOT__dut__DOT__idu_mode = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode;
    vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src;
    vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rd_adr = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr;
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en 
        = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wa = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_waa = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa;
    vlSelf->tb_cpu__DOT__dut__DOT__next_m_cycle = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle;
    vlSelf->tb_cpu__DOT__dut__DOT__d_bus_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_we_buffer = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wda_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src;
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wea = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea;
    vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src;
    vlSelf->tb_cpu__DOT__dut__DOT__d_bus_dst = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst;
    vlSelf->tb_cpu__DOT__dut__DOT__pc_jp = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp;
    vlSelf->tb_cpu__DOT__dut__DOT__pc_jp = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp;
    vlSelf->tb_cpu__DOT__dut__DOT__w_wr_en = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en;
    vlSelf->tb_cpu__DOT__dut__DOT__idu_dst = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst;
    vlSelf->tb_cpu__DOT__dut__DOT__z_wr_en = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en;
    vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en;
    vlSelf->tb_cpu__DOT__dut__DOT__fetch_en = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en;
    vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst = vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst;
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0 
        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr) 
                 + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr)));
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_comb__TOP__0(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__data_in = ((IData)(vlSelf->tb_cpu__DOT__rst)
                                     ? 0U : vlSelf->tb_cpu__DOT__mem__DOT__mem
                                    [vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer]);
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__3(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_comb__TOP__1(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rd = ((5U >= (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rd_adr))
                                              ? vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs
                                             [vlSelf->tb_cpu__DOT__dut__DOT__reg_rd_adr]
                                              : 0U);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rda = ((((5U 
                                                 >= (IData)(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0))
                                                 ? 
                                                vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs
                                                [vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0]
                                                 : 0U) 
                                               << 8U) 
                                              | ((5U 
                                                  >= 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0))))
                                                  ? 
                                                 vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs
                                                 [(7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0)))]
                                                  : 0U));
    vlSelf->tb_cpu__DOT__dut__DOT__alu_a = ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src))
                                             ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rd)
                                             : ((4U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src))
                                                 ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__accumulator)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src))
                                                  ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg)
                                                  : 0U)));
    vlSelf->tb_cpu__DOT__dut__DOT__alu_b = (0xffU & 
                                            ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                              ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rd)
                                              : ((4U 
                                                  == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                                  ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__accumulator)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                                   ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                                     ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src))
                                                      ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc)
                                                      : 0U)))))));
    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = vlSelf->tb_cpu__DOT__dut__DOT__flags_reg;
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
        } else if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = (0xffU & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg = 6U;
                } else {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                        = (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg));
                    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                        = ((0xeU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                           | (1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg))));
                }
            } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg = 1U;
            } else {
                if ((9U < (0xfU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = (0xffU & ((IData)(6U) + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                        = (0x1ffU & ((IData)(6U) + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                } else if ((0x90U < (0xf0U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = (0xffU & ((IData)(0x60U) 
                                    + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                        = (0x1ffU & ((IData)(0x60U) 
                                     + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = (0xffU & ((IData)(6U) + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                        = (0x1ffU & ((IData)(6U) + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                } else {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = vlSelf->tb_cpu__DOT__dut__DOT__alu_a;
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                        = vlSelf->tb_cpu__DOT__dut__DOT__alu_a;
                }
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                       | (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer)) 
                           << 3U) | (2U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer) 
                                           >> 2U))));
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = ((0xeU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                       | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer) 
                                >> 8U)));
            }
        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ 
                    = vlSelf->tb_cpu__DOT__dut__DOT__alu_a;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = vlSelf->tb_cpu__DOT__dut__DOT__flags_reg;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ 
                    = ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b) 
                                                      >> 3U)))));
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ;
            } else {
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ 
                    = vlSelf->tb_cpu__DOT__dut__DOT__alu_a;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = vlSelf->tb_cpu__DOT__dut__DOT__flags_reg;
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ 
                    = ((~ ((IData)(1U) << (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b) 
                                                 >> 3U)))) 
                       & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ));
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ;
            }
        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (8U & ((~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                >> (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)))) 
                            << 3U)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (2U | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))));
        } else {
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = (0x7fU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                            >> 1U));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                    << 3U) | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
        }
    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = ((0xf0U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                     << 4U)) | (0xfU 
                                                & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                                   >> 4U)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                        = ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                           << 3U);
                } else {
                    vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                        = ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)) 
                           | (0x7fU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                       >> 1U)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                        = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                            << 3U) | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                }
            } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = (0xfeU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                << 1U));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                        << 3U) | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                        >> 7U)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            } else {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = ((0x80U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                             >> 1U)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = ((7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                       | (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res))
                            ? 1U : 0U) << 3U));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                       | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
            }
        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = ((0xfeU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                 << 1U)) | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                        << 3U) | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                        >> 7U)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            } else {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = ((0x80U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                             >> 1U)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                        << 3U) | (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            }
        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = ((0xfeU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                             << 1U)) | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                              >> 7U)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                    << 3U) | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                    >> 7U)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
        } else {
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg = 8U;
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
        }
    } else if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                       | (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                       << 3U);
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            } else {
                vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                    = ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                       ^ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                    = (2U | ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                             << 3U));
                vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            }
        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                   & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = (2U | ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_res)) 
                         << 3U));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
        } else {
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                = (0x1ffU & (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                              - (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)) 
                             - (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))));
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = (0xffU & (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                             - (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)) 
                            - (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))));
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((3U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (4U | ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer)) 
                            << 3U)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((0xdU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (((0xfU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b) 
                                + (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)))) 
                       > (0xfU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a))) 
                      << 1U));
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((0xeU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | ((0xffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b) 
                                + (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)))) 
                      > (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a)));
        }
    } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                = (0x1ffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                             - (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = (0xffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                            - (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)));
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((3U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (4U | ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer)) 
                            << 3U)));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((0xcU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | ((((0xfU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)) 
                        > (0xfU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a))) 
                       << 1U) | ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b) 
                                 > (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a))));
        } else {
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
                = (0x1ffU & (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                              + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)) 
                             + (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))));
            vlSelf->tb_cpu__DOT__dut__DOT__alu_res 
                = (0xffU & (((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                             + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)) 
                            + (1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg))));
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((3U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer)) 
                      << 3U));
            vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((0xdU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer))
                        ? 1U : 0U) << 1U));
            vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
                = ((0xeU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
                   | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer) 
                            >> 8U)));
        }
    } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_op))) {
        vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer 
            = (0x1ffU & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                         + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)));
        vlSelf->tb_cpu__DOT__dut__DOT__alu_res = (0xffU 
                                                  & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_a) 
                                                     + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu_b)));
        vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
            = ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
               | (((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer)) 
                   << 3U) | (2U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer) 
                                   >> 2U))));
        vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
            = ((0xeU & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg)) 
               | (1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer) 
                        >> 8U)));
    } else {
        vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg 
            = vlSelf->tb_cpu__DOT__dut__DOT__flags_reg;
        vlSelf->tb_cpu__DOT__dut__DOT__alu_res = vlSelf->tb_cpu__DOT__dut__DOT__alu_a;
        vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = 0U;
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_comb__TOP__2(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_comb__TOP__2\n"); );
    // Body
    if (vlSelf->tb_cpu__DOT__rst) {
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer = 0U;
    } else {
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
        if ((0xcbU != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 3U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x13U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 3U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x12U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    }
                } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x11U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    }
                } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x10U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xfU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xeU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xdU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    }
                } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xcU;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xbU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xaU;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 9U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                }
            } else {
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                            = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                    = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                = (7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction));
                        }
                    }
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 8U;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 7U;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 6U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 5U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 4U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                                                }
                                            }
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 2U;
                                            }
                                        }
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                            }
                                        }
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 8U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 7U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 6U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 5U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 4U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 6U)))) {
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                            = (7U & 
                                               ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                >> 3U));
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr 
                                        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 3U));
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 1U;
                                }
                            }
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x16U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x15U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x17U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0x14U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xcU;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xbU;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0xaU;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 4U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 9U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                } else {
                                    if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                        }
                                    }
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 3U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 1U;
                            }
                        }
                    } else {
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 7U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                }
                            } else if ((IData)((0x20U 
                                                == 
                                                (0xe7U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = 7U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 1U;
                                }
                            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = 2U;
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                        } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((IData)((0x20U == 
                                            (0xe7U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                            }
                        } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                        >> 3U));
                                            }
                                        }
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                            = (7U & 
                                               ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                >> 3U));
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa 
                                        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 3U));
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                      >> 2U)))) {
                            if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ (IData)(
                                                         (0x20U 
                                                          == 
                                                          (0xe7U 
                                                           & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                                        if ((0x10U 
                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                            }
                                                        } else if (
                                                                   (0U 
                                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                = 
                                                                (3U 
                                                                 & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                    >> 4U));
                                                        }
                                                    } else if (
                                                               (0U 
                                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr 
                                                            = 
                                                            (3U 
                                                             & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                >> 4U));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            if (
                                                                (2U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa 
                                                                    = 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                                        >> 4U));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                            if (
                                                                (0U 
                                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                if (
                                                                    (1U 
                                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                    if (
                                                                        (2U 
                                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src = 0U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 1U;
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 1U;
                                                        } else {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = 0U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                    }
                                                }
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en 
                                                    = 
                                                    (1U 
                                                     & ((2U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))
                                                         ? 
                                                        (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))
                                                         : 
                                                        (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))));
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle)))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                }
                                            }
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 2U)))) {
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ (IData)(
                                                     (0x20U 
                                                      == 
                                                      (0xe7U 
                                                       & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                                    if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = 1U;
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 1U;
                                                        } else if (
                                                                   (1U 
                                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = 0U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                        if (
                                                            (0U 
                                                             != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                            if (
                                                                (1U 
                                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 1U;
                                                            } else if (
                                                                       (2U 
                                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                                }
                                            } else if (
                                                       (0U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                }
                                if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                        } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((IData)((0x20U == 
                                            (0xe7U 
                                             & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                            }
                        } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 0U;
                                    } else if ((1U 
                                                != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                }
                            } else if ((IData)((0x20U 
                                                == 
                                                (0xe7U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                }
                            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                   >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            } else if (
                                                       (2U 
                                                        == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0xcbU == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
        } else if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
            if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            }
        } else if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                            if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                        if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                            } else {
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 3U;
                                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                                        } else {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        } else {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 3U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                                    } else {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                             >> 6U)))) {
            if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                    }
                                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
            } else if ((0x18U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                        = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                  & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                        >> 7U)))) ? 1U
                            : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                   >> 7U)) ? 2U : 0U));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((IData)((0x20U == (0xe7U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc 
                        = (3U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                 >> 3U));
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met 
                        = (1U & ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                  ? ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                      ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)
                                      : (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)))
                                  : ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc))
                                      ? ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                         >> 3U) : (~ 
                                                   ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                                    >> 3U)))));
                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                            = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                      & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                            >> 7U))))
                                ? 1U : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                         & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                            >> 7U))
                                         ? 2U : 0U));
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                    } else {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                }
            } else if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 2U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 1U;
                                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                                }
                            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 2U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 1U;
                            } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 2U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                        } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                        } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                        }
                    }
                }
            }
        }
        vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer 
            = (0xffffU & ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                           ? ((IData)(1U) + (0xffffU 
                                             & ((0U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                 ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                  ? 
                                                 VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                   : 0U)))))
                           : ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                               ? ((0xffffU & ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                               ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                               : ((1U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                    ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                    : 0U)))) 
                                  - (IData)(1U)) : 
                              ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode))
                                ? (0xffffU & ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                               ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                               : ((1U 
                                                   == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                    ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                    : 0U))))
                                : 0U))));
    }
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__rst)))) {
        if ((0xcbU == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 1U;
        } else if (vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en) {
            if ((0x80U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                        }
                    } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                    }
                } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                }
            } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                             >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                          >> 6U)))) {
                if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((4U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                    if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                            if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                            }
                        } else if ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                            vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                        }
                    }
                } else if ((0U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                    if ((0x18U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                        if ((1U & (~ (IData)((0x20U 
                                              == (0xe7U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))))))) {
                            if ((0x10U != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                if ((8U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                    if ((1U & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction) 
                                                   >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction))) {
                                        if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__instruction)))) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                                                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vtb_cpu___024root___timing_resume(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf);

bool Vtb_cpu___024root___eval_phase__act(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_cpu___024root___timing_resume(vlSelf);
        Vtb_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cpu___024root___eval_phase__nba(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cpu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_cpu.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_cpu.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cpu___024root___eval_debug_assertions(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
