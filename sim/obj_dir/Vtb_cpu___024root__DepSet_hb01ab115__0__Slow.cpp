// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu__Syms.h"
#include "Vtb_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers__stl(Vtb_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
