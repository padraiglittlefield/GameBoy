// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_static(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_cpu__DOT__dut__DOT__m_clk = 1U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0U] = 0xc6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[1U] = 0xa1U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[2U] = 0xd6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[3U] = 1U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[4U] = 4U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[5U] = 4U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[6U] = 0x80U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[7U] = 0xeU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[8U] = 0xeaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[9U] = 7U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xaU] = 0x11U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xbU] = 0xdaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xcU] = 0xdaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xdU] = 0xfaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xeU] = 0xddU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xfU] = 0xddU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x10U] = 0x81U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x11U] = 0xeaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x12U] = 0xeeU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x13U] = 0xeeU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x14U] = 0xd6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x15U] = 0x94U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x16U] = 0xfaU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x17U] = 0xeeU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x18U] = 0xeeU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x19U] = 0xcbU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1aU] = 0xc3U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1bU] = 0xcbU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1cU] = 0x83U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1dU] = 0x20U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1eU] = 5U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x1fU] = 0xc6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x20U] = 5U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x21U] = 0U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x22U] = 0U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x23U] = 0xd6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x24U] = 5U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x25U] = 0x12U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x26U] = 0xd6U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x27U] = 0x17U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x28U] = 0x1aU;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x29U] = 3U;
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0x2aU] = 0xbU;
    vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i = 0x2cU;
    while (VL_GTS_III(32, 0x7fffU, vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_cpu__DOT__mem__DOT__mem[(0xffffU 
                                            & vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_cpu__DOT__mem__DOT__mem[0xddddU] = 0xaaU;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_settle(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_cpu.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__dut__DOT__next_t_cycle = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)));
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
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0 
        = (7U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr) 
                 + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr)));
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
    if (vlSelf->tb_cpu__DOT__rst) {
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
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
        vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer = 0U;
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
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                        = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                  & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                        >> 7U)))) ? 1U
                            : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                   >> 7U)) ? 2U : 0U));
                } else if ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_jmp_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
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
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 1U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 3U;
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode 
                        = ((1U & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg) 
                                  & (~ ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                        >> 7U)))) ? 1U
                            : (((~ (IData)(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg)) 
                                & ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg) 
                                   >> 7U)) ? 2U : 0U));
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
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_jmp_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 2U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 2U;
                    } else {
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = 1U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = 0U;
                        vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle))) {
                    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = 0U;
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

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_cpu.dut.m_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_cpu.dut.m_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___ctor_var_reset(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__flags_in = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__flags_out = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__data_bus_out_buffer = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__m_cycle = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__next_m_cycle = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__imu = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__instruction = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__ie = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__accumulator = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__flags_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__dut__DOT__pc = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__sp = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__m_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__next_acc = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__dut__DOT__next_imu = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__fetch_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__halt = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__wake = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__z_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__w_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_res = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_a = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_b = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_we_buffer = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wa = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wd = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rd = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rd_adr = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wea = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wda = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_waa = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rda = VL_RAND_RESET_I(16);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__reg_wda_src = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__idu_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__d_bus_src = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__jmp_dst = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__pc_jp = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__d_bus_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__idu_src = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__idu_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__next_cb_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__t_cycle = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__next_t_cycle = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__waa_cl = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hfbbcb370__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hb7badc1b__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_h057a96e2__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0 = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer = VL_RAND_RESET_I(9);
    vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out = VL_RAND_RESET_I(8);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op = VL_RAND_RESET_I(5);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_call_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_jmp_dst = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_wake = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_cpu__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__dut__DOT__m_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
