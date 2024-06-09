// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_cpu__Syms.h"


void Vtb_cpu___024root__trace_chg_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_0\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_cpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_cpu___024root__trace_chg_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out),8);
        bufp->chgBit(oldp+1,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp));
        bufp->chgBit(oldp+2,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next));
        bufp->chgBit(oldp+3,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt));
        bufp->chgBit(oldp+4,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+5,(vlSelf->tb_cpu__DOT__dut__DOT__idu_res_buffer),16);
        bufp->chgCData(oldp+6,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc),2);
        bufp->chgBit(oldp+7,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met));
        bufp->chgBit(oldp+8,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en));
        bufp->chgBit(oldp+9,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en));
        bufp->chgCData(oldp+10,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst),2);
        bufp->chgCData(oldp+11,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src),3);
        bufp->chgCData(oldp+12,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src),3);
        bufp->chgCData(oldp+13,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op),5);
        bufp->chgBit(oldp+14,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we));
        bufp->chgCData(oldp+15,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa),3);
        bufp->chgCData(oldp+16,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr),3);
        bufp->chgBit(oldp+17,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea));
        bufp->chgCData(oldp+18,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa),2);
        bufp->chgCData(oldp+19,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr),2);
        bufp->chgCData(oldp+20,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode),2);
        bufp->chgCData(oldp+21,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst),2);
        bufp->chgBit(oldp+22,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en));
        bufp->chgBit(oldp+23,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en));
        bufp->chgCData(oldp+24,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle),3);
        bufp->chgCData(oldp+25,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src),2);
        bufp->chgBit(oldp+26,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus));
        bufp->chgBit(oldp+27,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en));
        bufp->chgBit(oldp+28,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src));
        bufp->chgCData(oldp+29,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst),2);
        bufp->chgCData(oldp+30,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+31,(vlSelf->tb_cpu__DOT__dut__DOT__data_bus_out_buffer),8);
        bufp->chgSData(oldp+32,(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer),16);
        bufp->chgCData(oldp+33,(vlSelf->tb_cpu__DOT__dut__DOT__m_cycle),3);
        bufp->chgCData(oldp+34,(vlSelf->tb_cpu__DOT__dut__DOT__instruction),8);
        bufp->chgCData(oldp+35,(vlSelf->tb_cpu__DOT__dut__DOT__ie),8);
        bufp->chgCData(oldp+36,(vlSelf->tb_cpu__DOT__dut__DOT__accumulator),8);
        bufp->chgCData(oldp+37,(vlSelf->tb_cpu__DOT__dut__DOT__flags_reg),4);
        bufp->chgSData(oldp+38,(vlSelf->tb_cpu__DOT__dut__DOT__pc),16);
        bufp->chgSData(oldp+39,(vlSelf->tb_cpu__DOT__dut__DOT__sp),16);
        bufp->chgCData(oldp+40,(vlSelf->tb_cpu__DOT__dut__DOT__imm_z_reg),8);
        bufp->chgCData(oldp+41,(vlSelf->tb_cpu__DOT__dut__DOT__imm_w_reg),8);
        bufp->chgBit(oldp+42,(vlSelf->tb_cpu__DOT__dut__DOT__reg_we));
        bufp->chgCData(oldp+43,(vlSelf->tb_cpu__DOT__dut__DOT__reg_wd),8);
        bufp->chgSData(oldp+44,(vlSelf->tb_cpu__DOT__dut__DOT__reg_wda),16);
        bufp->chgCData(oldp+45,(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle),2);
        bufp->chgCData(oldp+46,((3U & ((IData)(1U) 
                                       + (IData)(vlSelf->tb_cpu__DOT__dut__DOT__t_cycle)))),2);
        bufp->chgCData(oldp+47,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[0]),8);
        bufp->chgCData(oldp+48,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[1]),8);
        bufp->chgCData(oldp+49,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[2]),8);
        bufp->chgCData(oldp+50,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[3]),8);
        bufp->chgCData(oldp+51,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[4]),8);
        bufp->chgCData(oldp+52,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__regs[5]),8);
        bufp->chgIData(oldp+53,(vlSelf->tb_cpu__DOT__dut__DOT__registers__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+54,(vlSelf->tb_cpu__DOT__dut__DOT__cpu_wr_en_buf));
        bufp->chgCData(oldp+55,(vlSelf->tb_cpu__DOT__dut__DOT__next_m_cycle),3);
        bufp->chgCData(oldp+56,(vlSelf->tb_cpu__DOT__dut__DOT__next_acc),8);
        bufp->chgBit(oldp+57,(vlSelf->tb_cpu__DOT__dut__DOT__next_imu));
        bufp->chgBit(oldp+58,(vlSelf->tb_cpu__DOT__dut__DOT__fetch_en));
        bufp->chgBit(oldp+59,(vlSelf->tb_cpu__DOT__dut__DOT__stop));
        bufp->chgBit(oldp+60,(vlSelf->tb_cpu__DOT__dut__DOT__halt));
        bufp->chgBit(oldp+61,(vlSelf->tb_cpu__DOT__dut__DOT__wake));
        bufp->chgBit(oldp+62,(vlSelf->tb_cpu__DOT__dut__DOT__z_wr_en));
        bufp->chgBit(oldp+63,(vlSelf->tb_cpu__DOT__dut__DOT__w_wr_en));
        bufp->chgCData(oldp+64,(vlSelf->tb_cpu__DOT__dut__DOT__adr_bus_src),2);
        bufp->chgCData(oldp+65,(vlSelf->tb_cpu__DOT__dut__DOT__alu_res_dst),2);
        bufp->chgCData(oldp+66,(vlSelf->tb_cpu__DOT__dut__DOT__alu_a_src),3);
        bufp->chgCData(oldp+67,(vlSelf->tb_cpu__DOT__dut__DOT__alu_b_src),3);
        bufp->chgCData(oldp+68,(vlSelf->tb_cpu__DOT__dut__DOT__alu_op),5);
        bufp->chgBit(oldp+69,(vlSelf->tb_cpu__DOT__dut__DOT__reg_we_buffer));
        bufp->chgCData(oldp+70,(vlSelf->tb_cpu__DOT__dut__DOT__reg_wa),3);
        bufp->chgCData(oldp+71,(vlSelf->tb_cpu__DOT__dut__DOT__reg_rd_adr),3);
        bufp->chgBit(oldp+72,(vlSelf->tb_cpu__DOT__dut__DOT__reg_wea));
        bufp->chgCData(oldp+73,(vlSelf->tb_cpu__DOT__dut__DOT__reg_waa),2);
        bufp->chgCData(oldp+74,(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda_adr),2);
        bufp->chgBit(oldp+75,(vlSelf->tb_cpu__DOT__dut__DOT__reg_wda_src));
        bufp->chgCData(oldp+76,(vlSelf->tb_cpu__DOT__dut__DOT__idu_mode),2);
        bufp->chgBit(oldp+77,(vlSelf->tb_cpu__DOT__dut__DOT__d_bus_src));
        bufp->chgBit(oldp+78,(vlSelf->tb_cpu__DOT__dut__DOT__pc_jp));
        bufp->chgCData(oldp+79,(vlSelf->tb_cpu__DOT__dut__DOT__d_bus_dst),2);
        bufp->chgCData(oldp+80,(vlSelf->tb_cpu__DOT__dut__DOT__idu_src),2);
        bufp->chgCData(oldp+81,(vlSelf->tb_cpu__DOT__dut__DOT__idu_dst),2);
        bufp->chgBit(oldp+82,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+83,(vlSelf->tb_cpu__DOT__dut__DOT__next_flags_reg),4);
        bufp->chgCData(oldp+84,(vlSelf->tb_cpu__DOT__dut__DOT__alu_res),8);
        bufp->chgCData(oldp+85,(vlSelf->tb_cpu__DOT__dut__DOT__alu_a),8);
        bufp->chgCData(oldp+86,(vlSelf->tb_cpu__DOT__dut__DOT__alu_b),8);
        bufp->chgCData(oldp+87,(vlSelf->tb_cpu__DOT__dut__DOT__reg_rd),8);
        bufp->chgSData(oldp+88,(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda),16);
        bufp->chgSData(oldp+89,(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer),9);
        bufp->chgCData(oldp+90,(vlSelf->tb_cpu__DOT__dut__DOT__alu0__DOT__varZ),8);
    }
    bufp->chgBit(oldp+91,(vlSelf->tb_cpu__DOT__clk));
    bufp->chgBit(oldp+92,(vlSelf->tb_cpu__DOT__rst));
    bufp->chgCData(oldp+93,(vlSelf->tb_cpu__DOT__data_in),8);
    bufp->chgBit(oldp+94,(vlSelf->tb_cpu__DOT__dut__DOT__m_clk));
    bufp->chgSData(oldp+95,((0xffffU & ((0U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                         ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__address_bus_buffer)
                                         : ((1U == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                             ? VL_SHIFTR_III(16,16,32, (IData)(vlSelf->tb_cpu__DOT__dut__DOT__pc), 8U)
                                             : ((2U 
                                                 == (IData)(vlSelf->tb_cpu__DOT__dut__DOT__idu_src))
                                                 ? (IData)(vlSelf->tb_cpu__DOT__dut__DOT__reg_rda)
                                                 : 0U))))),16);
    bufp->chgBit(oldp+96,(vlSelf->tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_call_en));
    bufp->chgIData(oldp+97,(vlSelf->tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i),32);
}

void Vtb_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_cleanup\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
