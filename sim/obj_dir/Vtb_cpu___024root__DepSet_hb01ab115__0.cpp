// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu__Syms.h"
#include "Vtb_cpu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f637075U;
    __Vtemp_1[2U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_cpu__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "tb_cpu.sv", 
                                       52);
    vlSelf->tb_cpu__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x124f80ULL, 
                                       nullptr, "tb_cpu.sv", 
                                       57);
    VL_FINISH_MT("tb_cpu.sv", 59, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_cpu__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_cpu__DOT__dut__DOT__m_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__dut__DOT__m_clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 
        = vlSelf->tb_cpu__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__dut__DOT__m_clk__0 
        = vlSelf->tb_cpu__DOT__dut__DOT__m_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
