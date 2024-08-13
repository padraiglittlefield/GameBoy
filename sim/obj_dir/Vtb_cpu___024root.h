// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cpu.h for the primary calling header

#ifndef VERILATED_VTB_CPU___024ROOT_H_
#define VERILATED_VTB_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cpu__DOT__clk;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__m_clk;
        CData/*0:0*/ tb_cpu__DOT__rst;
        CData/*7:0*/ tb_cpu__DOT__data_in;
        CData/*3:0*/ tb_cpu__DOT__flags_in;
        CData/*3:0*/ tb_cpu__DOT__flags_out;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__data_bus_out_buffer;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__m_cycle;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__next_m_cycle;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__imu;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__instruction;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__ie;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__accumulator;
        CData/*3:0*/ tb_cpu__DOT__dut__DOT__flags_reg;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__next_acc;
        CData/*3:0*/ tb_cpu__DOT__dut__DOT__next_flags_reg;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__next_imu;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__fetch_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__stop;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__halt;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__wake;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__cpu_wr_en_buf;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__imm_z_reg;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__imm_w_reg;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__z_wr_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__w_wr_en;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__adr_bus_src;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__alu_res_dst;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__alu_a_src;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__alu_b_src;
        CData/*4:0*/ tb_cpu__DOT__dut__DOT__alu_op;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__alu_res;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__alu_a;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__alu_b;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__reg_we_buffer;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__reg_we;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__reg_wa;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__reg_wd;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__reg_rd;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__reg_rd_adr;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__reg_wea;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__reg_waa;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__reg_rda_adr;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__reg_wda_src;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__idu_mode;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__d_bus_src;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__jmp_dst;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__pc_jp;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__d_bus_dst;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__idu_src;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__idu_dst;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__next_cb_instr;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__t_cycle;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__next_t_cycle;
        CData/*3:0*/ tb_cpu__DOT__dut__DOT__registers__DOT__waa_cl;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hfbbcb370__0;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_hb7badc1b__0;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__registers__DOT____Vlvbound_h057a96e2__0;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__registers__DOT____VdfgRegularize_h73f2c231_0_0;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__alu0__DOT__varZ;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__cc_met;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__cb_instr_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__next_cb_instr_en;
    };
    struct {
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_fetch_en;
        CData/*7:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_acc_out;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_res_dst;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_a_src;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_b_src;
        CData/*4:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_alu_op;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_we;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wa;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rd_adr;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wea;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_waa;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_rda_adr;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_mode;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_dst;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_call_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_pc_jp;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_ime_next;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_halt;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_stop;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_z_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_imm_w_en;
        CData/*2:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_next_m_cycle;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_adr_bus_src;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_cpu_wr_en;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_jmp_dst;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_wake;
        CData/*0:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_reg_wda_src;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_d_bus_dst;
        CData/*1:0*/ tb_cpu__DOT__dut__DOT__signal_controller__DOT__comb_idu_src;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cpu__DOT__dut__DOT__m_clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__address_bus_buffer;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__pc;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__sp;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__idu_res_buffer;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__reg_wda;
        SData/*15:0*/ tb_cpu__DOT__dut__DOT__reg_rda;
        SData/*8:0*/ tb_cpu__DOT__dut__DOT__alu0__DOT__alu_res_buffer;
        IData/*31:0*/ tb_cpu__DOT__dut__DOT__registers__DOT__i;
        IData/*31:0*/ tb_cpu__DOT__mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 6> tb_cpu__DOT__dut__DOT__registers__DOT__regs;
        VlUnpacked<CData/*7:0*/, 65536> tb_cpu__DOT__mem__DOT__mem;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cpu___024root(Vtb_cpu__Syms* symsp, const char* v__name);
    ~Vtb_cpu___024root();
    VL_UNCOPYABLE(Vtb_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
