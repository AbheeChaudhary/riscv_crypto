// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_pkg.h for the primary calling header

#include "Vibex_pkg__pch.h"

VL_ATTR_COLD void Vibex_pkg___024root___eval_static(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_static\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__en_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vibex_pkg___024root___eval_initial__TOP(Vibex_pkg___024root* vlSelf);
VL_ATTR_COLD void Vibex_pkg___024root____Vm_traceActivitySetAll(Vibex_pkg___024root* vlSelf);

VL_ATTR_COLD void Vibex_pkg___024root___eval_initial(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_initial\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_pkg___024root___eval_initial__TOP(vlSelf);
    Vibex_pkg___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vibex_pkg___024root___eval_initial__TOP(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_initial__TOP\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (1U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (2U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (4U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (8U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x00000010U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x00000020U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x00000040U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10U] 
        = (0x00000080U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11U] 
        = (0x00000100U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12U] 
        = (0x00000200U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13U] 
        = (0x00000400U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14U] 
        = (0x00000800U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15U] 
        = (0x00001000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16U] 
        = (0x00002000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17U] 
        = (0x00004000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18U] 
        = (0x00008000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19U] 
        = (0x00010000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20U] 
        = (0x00020000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21U] 
        = (0x00040000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22U] 
        = (0x00080000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23U] 
        = (0x00100000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24U] 
        = (0x00200000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25U] 
        = (0x00400000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26U] 
        = (0x00800000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27U] 
        = (0x01000000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28U] 
        = (0x02000000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29U] 
        = (0x04000000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30U] 
        = (0x08000000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31U] 
        = (0x10000000U | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[2U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[0U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[1U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[2U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[3U] = 0ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[2U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[3U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14U] = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15U] = 0U;
}

VL_ATTR_COLD void Vibex_pkg___024root___eval_final(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_final\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_pkg___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vibex_pkg___024root___eval_phase__stl(Vibex_pkg___024root* vlSelf);

VL_ATTR_COLD void Vibex_pkg___024root___eval_settle(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_settle\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vibex_pkg___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/top_sim.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vibex_pkg___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vibex_pkg___024root___eval_triggers_vec__stl(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_triggers_vec__stl\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__en_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vibex_pkg___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_pkg___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vibex_pkg___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_sim.u_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] top_sim.u_core.en_wb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] top_sim.u_core.id_in_ready)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vibex_pkg___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<IData/*31:0*/, 128> Vibex_pkg__ConstPool__TABLE_ha3c5110d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_pkg__ConstPool__TABLE_h23304e2a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_pkg__ConstPool__TABLE_h2608d7a5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_pkg__ConstPool__TABLE_he65bff1b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_pkg__ConstPool__TABLE_h053660a6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_h139cf27b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_h611732e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_h7b340f8b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_h27e1e6b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_hac9147c9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_pkg__ConstPool__TABLE_h1e2ce85a_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vibex_pkg__ConstPool__TABLE_h9816e50e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vibex_pkg__ConstPool__TABLE_h0c298502_0;

VL_ATTR_COLD void Vibex_pkg___024root___stl_sequent__TOP__0(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___stl_sequent__TOP__0\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2;
    top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2 = 0;
    CData/*0:0*/ top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0;
    top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[2U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[3U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[2U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[3U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[3U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[2U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[3U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[2U];
    vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[3U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : 0x0000050bU);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : 0x0000050bU);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 2U) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 1U) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? 0U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                     ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                         ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                             ? (0x000000ffU & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x00000010U))
                             : 0U) : 0U) : ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? 
                                                (0x000000ffU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 0x00000010U))
                                                 : 
                                                (0x0000ffffU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 8U)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q
                                                 : 0U))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ 
        = (IData)((2U == (6U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ 
        = (IData)((1U == (3U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_5 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    __Vtableidx11 = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_hec32eb45__0 
        = Vibex_pkg__ConstPool__TABLE_ha3c5110d_0[__Vtableidx11];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
    top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2 
        = (1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                 | (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : 0x0000050bU);
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x0000001fU)))) {
        if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000016U)))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr = 1U;
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
    top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0 
        = ((0x03a0U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                        >> 0x00000014U)) | ((0x03a1U 
                                             == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                            | ((0x03a2U 
                                                == 
                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                               | ((0x03a3U 
                                                   == 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)) 
                                                  | ((0x03b0U 
                                                      == 
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x00000014U)) 
                                                     | ((0x03b1U 
                                                         == 
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U)) 
                                                        | ((0x03b2U 
                                                            == 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)) 
                                                           | ((0x03b3U 
                                                               == 
                                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x00000014U)) 
                                                              | ((0x03b4U 
                                                                  == 
                                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                   >> 0x00000014U)) 
                                                                 | ((0x03b5U 
                                                                     == 
                                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x00000014U)) 
                                                                    | ((0x03b6U 
                                                                        == 
                                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0x00000014U)) 
                                                                       | ((0x03b7U 
                                                                           == 
                                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                            >> 0x00000014U)) 
                                                                          | ((0x03b8U 
                                                                              == 
                                                                              (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                               >> 0x00000014U)) 
                                                                             | ((0x03b9U 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03baU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bbU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bcU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03bdU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | ((0x03beU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)) 
                                                                                | (0x03bfU 
                                                                                == 
                                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x00000014U)))))))))))))))))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err));
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) 
           & (0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h376d6acc__0 
        = (0U != (((2U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2) 
           & (3U != (3U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2) 
           & (3U != (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x00000010U))));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001bU)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000019U)))) {
                                if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((0x00400000U 
                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000015U)))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : 0x00000016U);
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000015U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001aU)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000019U)))) {
                            if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00800000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((0x00200000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x0000001fU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U))] 
                                               >> 0x20U));
                            }
                        }
                    }
                    if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000018U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000017U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000015U)))) {
                                    if ((0x00100000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001aU)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000019U)))) {
                            if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))]);
                            } else if ((0x00800000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))]);
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))]);
                            } else if ((0x00200000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))]);
                            } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                              [(0x0000001fU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))]);
                            }
                        }
                    }
                    if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000018U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000017U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000015U)))) {
                                    if ((0x00100000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000019U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000018U)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000017U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000016U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000015U)))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x00100000U 
                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000017U)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000016U)))) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((0x00200000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                            if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000016U)))) {
                                    if ((0x00200000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000016U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001aU)))) {
                        if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000018U)))) {
                                if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000016U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000015U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x0000001aU)))) {
                    if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00200000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12U]))
                                        : ((0x00200000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U])))
                                    : ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00200000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U]))
                                        : ((0x00200000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U])
                                            : ((0x00100000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U]
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U]))));
                        } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000017U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x00200000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00100000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12U]))
                                            : (((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U])))
                                        : ((0x00100000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U]))
                                            : (((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
                                                   << 0x00000010U)) 
                                               | ((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
                                                   << 8U) 
                                                  | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U]))));
                            }
                        }
                    }
                }
                if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000018U)))) {
                        if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x00000019U)))) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000018U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000017U)))) {
                            if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000015U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffffff7U 
                                               & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xffffff7fU 
                                               & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffff7ffU 
                                               & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0x8000ffffU 
                                               & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                    }
                                }
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x00200000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00100000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_hec32eb45__0)
                                        : ((0x00100000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
                if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U))];
                } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U))];
                    }
                } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x00000014U)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                }
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x00000018U)))) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000017U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000016U)))) {
                            if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000014U)))) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((0x00100000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000016U)))) {
                        if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000016U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000015U)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x00000016U)))) {
                    if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U)))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
                if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000014U)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0x0000000eU)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000080U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 9U)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x00000800U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 4U)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x00000010U)));
                }
            } else {
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x00000015U)))) {
                    if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffffff7U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (8U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U)));
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffff7fU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00000080U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 3U)));
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffe7ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00001800U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 9U)));
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffdffffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00020000U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000010U)));
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffdfffffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x00200000U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                 << 0x00000015U)));
                    }
                }
                if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    if (top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0) {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i))) 
                   << 1U));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__icache_inval = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_access = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U))
                : (0x050b0000U | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                  >> 0x00000010U)))
            : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                  >> 0x10U));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i 
                                  >> 0x10U));
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i);
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i 
                                  >> 0x10U));
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0x0000ffffU & ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                               ? (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                  >> 0x10U) : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i));
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0x0000ffffU & vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i);
    }
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                    = (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])))) 
                               << 1U));
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                    = (1ULL | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])) 
                               << 1U));
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                    = (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                               << 1U));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = (1ULL | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])) 
                           << 1U));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                           << 1U));
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = (1ULL | ((QData)((IData)((~ vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i))) 
                           << 1U));
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? (1ULL | ((QData)((IData)((~ vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i))) 
                           << 1U)) : (1ULL | ((QData)((IData)(
                                                              (~ vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i))) 
                                              << 1U)));
    }
    if ((0x00000040U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            if ((0U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x0302U == 
                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x07b2U == 
                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x0105U == 
                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x14U))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((0x0105U 
                                                         == 
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                        << 4U) 
                                                       | (((0x07b2U 
                                                            == 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x14U)) 
                                                           << 3U) 
                                                          | ((0x0302U 
                                                              == 
                                                              (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                             << 2U))) 
                                                      | (((1U 
                                                           == 
                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x14U)) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))))))) {
                                if ((0U != ((((0x0105U 
                                               == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                              << 4U) 
                                             | (((0x07b2U 
                                                  == 
                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                                 << 3U) 
                                                | ((0x0302U 
                                                    == 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                   << 2U))) 
                                            | (((1U 
                                                 == 
                                                 (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:689: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 689, "");
                                    }
                                }
                            }
                            if ((IData)((0U != (0x000f8f80U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__csr_access = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000000eU)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:724: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 724, "");
                                    }
                                }
                            }
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000000eU))) 
                           && (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000018U)) 
                                | (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0000000cU))))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                >> 0x0000001fU)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001dU)) 
                               || ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001cU)) 
                                   || ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000001bU)) 
                                       || ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000001aU)) 
                                           || ((1U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000019U)) 
                                               || ((0x00004000U 
                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x0000000cU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x0000000dU)) 
                                                    || (1U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000000cU)))))))));
                    } else if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ VL_ONEHOT_I((((2U == (3U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (3U & 
                                              (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h376d6acc__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:303: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 303, "");
                        }
                    }
                }
                if ((0U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)) 
                                   || ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU) 
                                       || ((0x40000000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((1U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U))))))
                                            : ((1U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x0000001cU)) 
                                                   || ((1U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000001bU)) 
                                                       || (0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x00000019U)))))))))))
                        : ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000000dU))) 
                           && ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)) 
                               && ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x0000001fU) 
                                   || ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       || ((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)) 
                                           || ((1U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000001cU)) 
                                               || ((1U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x0000001bU)) 
                                                   || (0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x00000019U)))))))))));
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:661: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 661, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                            >> 0x0000000eU)));
            if ((1U & (~ VL_ONEHOT_I((((2U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x0cU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x0cU))))))))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h376d6acc__0) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:320: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0cU)));
                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 320, "");
                    }
                }
            }
            if ((0U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x0cU)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0cU)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__illegal_c_insn_id) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__csr_access = 0U;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id);
    vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                          >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00001000U 
                                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00001000U 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                                            ? 0x0aU
                                                            : 0U)));
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
        } else if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                      >> 0x0000000eU)))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                        if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)) {
                            if ((0U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                        >> 0x0000001bU))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                               >> 0x0000001bU))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                ? ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id)
                                    ? 0x0aU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0000000cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1305: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 1305, "");
                            }
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x41U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    if ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err 
            = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))))) {
        if ((0U != (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:425: Assertion failed in %Ntop_sim.u_core.id_stage_i.rf_wdata_id_mux: unique case, but multiple matches found for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),1,
                             (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
                VL_STOP_MT("ibex/rtl/ibex_id_stage.sv", 425, "");
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i 
            >> 0x0000001fU) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i 
                                           >> 0x1fU)))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
            >> 0x0000001fU) & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U));
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_op = ((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x000f8000U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & ((2U 
                                                                == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                                                               | (3U 
                                                                  == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_dec 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    if (vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex));
    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x00000003fffc0000ULL & vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x0003ffffU & (IData)(
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                                                             >> 0x10U))))));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x000000000003ffffULL & vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & (- (IData)(
                                                    ((0U 
                                                      != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                     & (IData)(
                                                               (vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                                                                >> 0x21U)))))))) 
                      << 0x00000012U));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else if ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                                                          >> 0x10U)))));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                      >> 0x0000001fU))));
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0x0000ffffU & (IData)(
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                                                          >> 0x10U)))));
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) 
                               << 1U) | ((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                         | (6U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))))))) {
        if ((0U != ((((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                      | (7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) 
                     << 1U) | ((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (6U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:386: Assertion failed in %Ntop_sim.u_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("ibex/rtl/ibex_alu.sv", 386, "");
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x00000003ffffffffULL & ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? ((0x00000007ffffffffULL 
                                             & VL_MULS_QQQ(35, 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x00000007ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                         : ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                             ? (((QData)((IData)(
                                                                 (0x0000ffffU 
                                                                  & ((IData)(
                                                                             (0x00000007ffffffffULL 
                                                                              & VL_MULS_QQQ(35, 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                                     + (IData)(
                                                                               (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                                 << 0x00000010U) 
                                                | (QData)((IData)(
                                                                  (0x0000ffffU 
                                                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])))))
                                             : ((0x00000007ffffffffULL 
                                                 & VL_MULS_QQQ(35, 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                                + (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                                     : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                             ? (((QData)((IData)(
                                                                 (0x0000ffffU 
                                                                  & ((IData)(
                                                                             (0x00000007ffffffffULL 
                                                                              & VL_MULS_QQQ(35, 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                                     + (IData)(
                                                                               (0x00000007ffffffffULL 
                                                                                & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                                 << 0x00000010U) 
                                                | (QData)((IData)(
                                                                  (0x0000ffffU 
                                                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])))))
                                             : ((0x00000007ffffffffULL 
                                                 & VL_MULS_QQQ(35, 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x00000007ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                                + (0x00000007ffffffffULL 
                                                   & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                         : ((0x00000007ffffffffULL 
                                             & VL_MULS_QQQ(35, 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x00000007ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x00000010U) 
                                                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x00000007ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    __Vtableidx6 = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vibex_pkg__ConstPool__TABLE_h23304e2a_0[__Vtableidx6];
    __Vtableidx4 = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vibex_pkg__ConstPool__TABLE_h2608d7a5_0[__Vtableidx4];
    __Vtableidx3 = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vibex_pkg__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vibex_pkg__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vibex_pkg__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vibex_pkg__ConstPool__TABLE_h053660a6_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op)) 
           | ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op)) 
              | (3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op))));
    __Vtableidx2 = ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vibex_pkg__ConstPool__TABLE_h139cf27b_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vibex_pkg__ConstPool__TABLE_h611732e7_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vibex_pkg__ConstPool__TABLE_h7b340f8b_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vibex_pkg__ConstPool__TABLE_h27e1e6b7_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vibex_pkg__ConstPool__TABLE_hac9147c9_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vibex_pkg__ConstPool__TABLE_h1e2ce85a_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req))
            ? ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? 4U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                             ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)
                                 ? 2U : 4U) : (((- (IData)(
                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x0000001fU))) 
                                                << 0x00000014U) 
                                               | ((((0x000001feU 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x00000014U))))))
                : ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0xfffff000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                        : (((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 7U))))))
                    : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 7U))))
                        : (((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))))
            : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i);
    vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid = 
        ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel))) 
         || ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                               << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)))))) {
        if ((0U != (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate) 
                     << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:94: Assertion failed in %Ntop_sim.u_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("ibex/rtl/ibex_alu.sv", 94, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                                << 3U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel))))))) {
        if ((0U != ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3) 
                      << 3U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2) 
                                << 2U)) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_alu.sv:82: Assertion failed in %Ntop_sim.u_core.ex_block_i.alu_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("ibex/rtl/ibex_alu.sv", 82, "");
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | (((3U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                          >> 0x0000001eU)) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr)) 
                 | (((3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                            >> 0x0000001cU)) > (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                    | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
               | vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)
            : (((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                   & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)
                : (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                   ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                        << 1U)) | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                          >> 1U)) | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000001fU))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op))
                ? ((~ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex) 
                   & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                   | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x00000003ffffffffULL & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))) 
                                              << 2U))
                                          : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))) 
                                                    << 3U))
                                              : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))) 
                                                     << 4U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex)) 
                                                     << 1U)))))) 
                                    + (0x00000001ffffffffULL 
                                       & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                           ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                           : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                               ? (~ 
                                                  ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                                   << 1U))
                                               : ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                                  << 1U))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__illegal_insn_id 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id) 
              | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                 | (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                    | ((3U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                       & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                          | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec))))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    __Vtableidx7 = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0x0000000cU & ((IData)(
                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)) 
                                               << 2U)) 
                               | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_be 
        = Vibex_pkg__ConstPool__TABLE_h9816e50e_0[__Vtableidx7];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U]);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                       >> 0x0000001fU))))
                  ? (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
                             >> 0x1fU)) : (~ (IData)(
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x00000020U)))));
    __Vtableidx5 = (((0U != (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                     >> 1U))) << 9U) 
                    | ((0x00000100U & ((((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                          ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex) 
                                         >> 0x0000001fU)
                                         ? ((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000001fU) 
                                            ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 0x00000020U)))) 
                                       << 8U)) | ((
                                                   (0U 
                                                    == (IData)(
                                                               (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U))) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vibex_pkg__ConstPool__TABLE_h0c298502_0[__Vtableidx5];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_insn_id)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_5));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_insn_id) 
           & (6U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((QData)((IData)(
                                                                    ((8U 
                                                                      == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                        >> 0x0000001fU)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)
                                                       ? vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex
                                                       : 
                                                      (- vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)))));
    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i);
            }
        }
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i);
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U]);
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((((((((2U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed) 
                        << 1U)) | (1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                 >> 1U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 2U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 3U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 4U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 5U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 6U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 7U)))))) 
             << 0x00000018U) | ((((((2U & ((IData)(
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 8U)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 9U)))) 
                                   << 6U) | (((2U & 
                                               ((IData)(
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                         >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & ((IData)(
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                      >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x0000000dU)))) 
                                     << 2U) | ((2U 
                                                & ((IData)(
                                                           (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                            >> 0x0000000eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000000fU)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                 >> 0x00000010U)) << 1U)) 
                 | (1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                  >> 0x00000011U)))) 
                << 6U) | (((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 0x00000012U)) 
                                  << 1U)) | (1U & (IData)(
                                                          (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                           >> 0x00000013U)))) 
                          << 4U)) | ((((2U & ((IData)(
                                                      (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                       >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                        >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x00000017U)))))) 
             << 8U) | (((((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                          >> 0x00000018U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                          >> 0x00000019U)))) 
                         << 6U) | (((2U & ((IData)(
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                    >> 0x0000001aU)) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                     >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                             >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                              >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                                               >> 0x0000001fU))))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x0000001fU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                          - (IData)(1U)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])
                        : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                            ? (QData)((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U]))
                    : ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                        : (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x00000003ffffffffULL;
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i));
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
            : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x00000020U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x00000010U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x00000010U 
                                        & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U];
    if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U];
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U];
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U];
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U];
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U] 
            = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U]));
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U]));
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U] 
            = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U]));
        vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U]));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
            : ((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                    ? (0xa52cbc7cU ^ vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q)
                    : 0U) : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                              ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                  ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                  : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                              : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id;
}

void Vibex_pkg___024root___act_sequent__TOP__0(Vibex_pkg___024root* vlSelf);
void Vibex_pkg___024root___act_sequent__TOP__1(Vibex_pkg___024root* vlSelf);
void Vibex_pkg___024root___act_comb__TOP__0(Vibex_pkg___024root* vlSelf);

VL_ATTR_COLD void Vibex_pkg___024root___eval_stl(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_stl\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vibex_pkg___024root___stl_sequent__TOP__0(vlSelf);
        Vibex_pkg___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vibex_pkg___024root___act_sequent__TOP__0(vlSelf);
        Vibex_pkg___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vibex_pkg___024root___act_sequent__TOP__1(vlSelf);
        Vibex_pkg___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vibex_pkg___024root___act_comb__TOP__0(vlSelf);
        Vibex_pkg___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vibex_pkg___024root___eval_phase__stl(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___eval_phase__stl\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vibex_pkg___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_pkg___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vibex_pkg___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vibex_pkg___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vibex_pkg___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_pkg___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vibex_pkg___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top_sim.u_core.id_stage_i.instr_executing_spec)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] top_sim.u_core.en_wb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] top_sim.u_core.id_in_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_pkg___024root____Vm_traceActivitySetAll(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root____Vm_traceActivitySetAll\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[10U] = 1U;
}

VL_ATTR_COLD void Vibex_pkg___024root___ctor_var_reset(Vibex_pkg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_pkg___024root___ctor_var_reset\n"); );
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->top_sim__DOT__instr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7492599001536187207ull);
    vlSelf->top_sim__DOT__u_core__DOT__rf_rdata_a_ecc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5403652619153368651ull);
    vlSelf->top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11812484663896972851ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5196732937089953735ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ic_data_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2650182986485237502ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ic_scr_key_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5404152995557404432ull);
    vlSelf->top_sim__DOT__u_core__DOT__double_fault_seen_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9300267422509235413ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17645944473284271220ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_rdata_alu_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6804085740835306786ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_rdata_c_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10957213709088991895ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10305117642108512587ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_gets_expanded_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1276675606668710847ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_expanded_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16439680438054693567ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3815243629436042535ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_fetch_err_plus2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5977915878165199522ull);
    vlSelf->top_sim__DOT__u_core__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1063734500965900970ull);
    vlSelf->top_sim__DOT__u_core__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14145980211137317997ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__imd_val_d_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16479218063825150995ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__imd_val_q_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5543483274397096346ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__imd_val_we_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9009713560248078934ull);
    vlSelf->top_sim__DOT__u_core__DOT__icache_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16349542321941889924ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_first_cycle_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4624067066348090187ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_valid_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17890745239802471658ull);
    vlSelf->top_sim__DOT__u_core__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14384836481480431934ull);
    vlSelf->top_sim__DOT__u_core__DOT__pc_mux_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12908970737328036242ull);
    vlSelf->top_sim__DOT__u_core__DOT__exc_pc_mux_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13829107564984667282ull);
    vlSelf->top_sim__DOT__u_core__DOT__exc_cause = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5760226317434232863ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_load_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4410236938476940869ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_store_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1095588619256969240ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_addr_incr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10943348412685653398ull);
    vlSelf->top_sim__DOT__u_core__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18177618909123293000ull);
    vlSelf->top_sim__DOT__u_core__DOT__rf_wdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15536785415250873313ull);
    vlSelf->top_sim__DOT__u_core__DOT__alu_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14542394443617667337ull);
    vlSelf->top_sim__DOT__u_core__DOT__alu_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5340951971928602830ull);
    vlSelf->top_sim__DOT__u_core__DOT__mult_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4922632480903408945ull);
    vlSelf->top_sim__DOT__u_core__DOT__div_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7089302214690291258ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8057783691119185581ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2995070980855500525ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_op_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6160709734702349867ull);
    vlSelf->top_sim__DOT__u_core__DOT__illegal_csr_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12606334883018104522ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8948507489556909134ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9992607579387619855ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12041605800606331227ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 696359197753024692ull);
    vlSelf->top_sim__DOT__u_core__DOT__lsu_resp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1741286052572147210ull);
    vlSelf->top_sim__DOT__u_core__DOT__instr_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4963627897242950129ull);
    vlSelf->top_sim__DOT__u_core__DOT__en_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8326375199509351910ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18335371304485897586ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3579677046700509537ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__pmp_req_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4836931871044364828ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__data_req_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3167047080505136811ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_save_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3640138255793684880ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_save_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12245372483439773847ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_restore_mret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11387822709266433151ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_restore_dret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16917933471387454973ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_save_cause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2910715745775819463ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_mtvec_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10944333262650559547ull);
    vlSelf->top_sim__DOT__u_core__DOT__csr_mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6230439732897546714ull);
    vlSelf->top_sim__DOT__u_core__DOT__debug_mode_entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14627979280573260767ull);
    vlSelf->top_sim__DOT__u_core__DOT__debug_csr_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14673857327748474052ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_instr_ret_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 916295385155688312ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12882818286820699783ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729287485690760748ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_tbranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16364839639838877950ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2905622075351757138ull);
    vlSelf->top_sim__DOT__u_core__DOT__perf_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13319783784411620679ull);
    vlSelf->top_sim__DOT__u_core__DOT__illegal_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4985190652717189349ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1202076493559682550ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12320441214771933026ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7572755021094610068ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16167253982902071724ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456695051095164866ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8275827849967177365ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6031345497831195383ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3145315689636763879ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14905606838050107575ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14906677579031762111ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15829963876111719599ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16735253529482981475ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3187920439686214567ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5139319734249095338ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14717217203339323193ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13697998061483292169ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12530888642147915441ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i = 0;
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2831385752799444657ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17837937274417501006ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1141131402217173931ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2931844477810693891ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13391562917819372234ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6184283121976996297ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10400344413450575273ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9927012588682940486ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11224968080956385524ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15665521765612306969ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6984952508786958323ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 585215660836784847ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1878225497473271050ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8230559667925256ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12445474630730955937ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9000526798132154969ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15068111755867482677ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17641876967654372894ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15024451674926793188ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13141435890975290967ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10626771692151468094ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10310443429337551115ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16510666424472779993ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8039352423815462715ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q, __VscopeHash, 6409301705428650295ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8397758015484838851ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14049841039547294673ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8706845987812446531ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 732282120166036724ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12653740402174929230ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2503111530014353377ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15040903704167700066ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643765198578484470ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7464352795552788629ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16010220813813776420ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8312177178701857594ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1163096566189010716ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 897593870081085385ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8099794903022625537ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11319667367706787677ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14419229814725292217ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6514590188283452921ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17503111578593201140ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15046436176641334226ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443651850750733319ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11273565432798769929ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7409725472388513753ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3598582566681698831ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10165888202018390086ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 13247553889010455512ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 2325281785830555853ull);
    vlSelf->top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16119713319048955878ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14502249096013795523ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11739486947666121123ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3762158242619780415ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 698865987353780293ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7136980333191715647ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6627352787068094030ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 321173349210305852ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14334114033885380504ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3313390382796432293ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13612091532078438364ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17302308993103010156ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12049775012402658370ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 751337179314785720ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613172430475390894ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3210933983358772732ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2172296362627452582ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 486721668116437061ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6400160329842996391ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5119833580629460968ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12648431350731675524ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13507661020992452279ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9542244248375300346ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9879899872699146436ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2806539937915460787ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7534629025089049910ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3122625654049998244ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16625339743218466408ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11413580346311375273ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5332653654481511355ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4583917899725014648ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13276289472142361585ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9133347184783520539ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1144385610309252578ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8699221331149042641ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11257539553585857911ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628324969076806544ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434552187869584308ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1180193719439845136ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8342441530221265732ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 656606453451591930ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7569729537963911777ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12960122900277486018ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17555887598386739572ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16081396553270873137ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14908796912819406101ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5354104425525225293ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8536102468966443886ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_5 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12053482701656941038ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16243653142706585227ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10346470309287524051ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8686400374009136559ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16197685385929697816ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3452245170608161833ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h376d6acc__0 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4517204410294818307ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1240675005638122663ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1106981191941668071ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8260911282154765423ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14179705613003417543ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12659585733268746224ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9348317438377864800ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7139085122296080410ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4477238116485422328ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17117365423422639069ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 396476910072672333ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6043575937980529545ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13722195180807877105ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2889193347490697531ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18377491025110740056ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 932624749910041977ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10305938720789920562ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5878870910305398403ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15986113330875991753ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11722572801912052552ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087173980453335788ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17221340570386491955ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15816964673658097689ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1002431060644164793ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10843108428457850857ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16675991168167497827ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8132058680426021997ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1622055932324520433ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6577891198926313565ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7694459289142910336ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9489809461404768508ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11556006194991579407ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9487505184890500995ull);
    vlSelf->top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8415721683820651732ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16107612845214906480ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3751985909559567648ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12152525138812430460ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3951809860152736220ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3257038810581626543ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8040811236591858995ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120006511899640440ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8784327465331029256ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16990304338122333413ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 390379741249637301ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12039409631834820185ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10735870877976791331ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18119424648067106123ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16546729944765509776ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14668922099742737408ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5282309918998665078ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3537599289750686396ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7182484125824095227ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1721594869433521390ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 756208612770724478ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3462237599687112922ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17282582375957662159ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 454116651914285748ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5098896803979514867ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10687372538726751114ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16354215799188926005ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4073372426851267998ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8589565653875195869ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18088295331298213097ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7830635941872236250ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 592240598358864811ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4463325991702901322ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7200879682864745683ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9434499566036235210ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12303954431022175002ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3099945277027316744ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15969616758720372564ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12260586765637177688ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7510128379058215529ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18101987605203380607ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4579242607437499110ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8026881034700468434ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11411978636440193353ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8745962264066230626ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2748936091084782721ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9233519390537767195ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17109656704031369425ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10483378475105911909ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12541788516170891154ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5263902639347334026ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 855140749061866401ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4927254039917361117ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13730295107007724945ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10223802468080898936ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774247221349070572ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12608070057468120263ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11945424219204029725ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4484969412731461288ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14680301945088945278ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13518317103680714900ull);
    vlSelf->top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9810487578857571360ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4733120908518490210ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12265129920911178664ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1962611480619635278ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4637409290393728321ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15620061515215332641ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9781409647788153102ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4487480959652210248ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1483834988883512990ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10726864173386117175ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 418117749669782525ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6845897913598490339ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11969555991019608429ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 236820620763214223ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14110287265552643712ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8831726565461994722ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698485359751043568ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14477660711225249855ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10193894795938464932ull);
    vlSelf->top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14396837310215470291ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559260455284997004ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8436346278630974094ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13271778062620901606ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12241035188257257448ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11414993902768785160ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 826677660330306762ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8509073374165932911ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4825575271837568822ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12069474903487685801ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123457729671704712ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16645552516459824678ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7091288596767007611ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8117608114742159121ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5348637127963233607ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7071268345801074685ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 355163523006958110ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16852593575048341620ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4600758368167022340ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252258408473087652ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16999629295094650498ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1469983464313334324ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1077970070091263011ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18118708227443813134ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275594274782001427ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15641817725762418583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6385483127959538257ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1488786432392765898ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3872360687404293576ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11628187989562888896ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9561864163794644101ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10393206259617313588ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3670515156299924772ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10027927842202502769ull);
    }
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3879238476233298086ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9735639885945568272ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14882860808380022867ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16795310172388190984ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11521205064756838730ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5558873973302412364ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1024966475598037251ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9102688977663931932ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_hec32eb45__0 = 0;
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10975835868226096293ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5985035574229504652ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16250987602836062159ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12681216327992000259ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6934744470006620644ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15516785253381893131ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2058679135042332792ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8122910580670382995ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15201196198867105247ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13772637968245275582ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5867101292698541751ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1552611797265544436ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3214598579542430554ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2793376106321390399ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15262341350584986737ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14538919836696037310ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8562501636410477611ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6354012014243781017ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2127443658423598680ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13434322238558256997ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8883335654743102266ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1690010633606176522ull);
    vlSelf->top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13041068358111163398ull);
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm_signed = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__sp_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__instr_rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__tmp = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__sp_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm_signed = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__sp_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__instr_rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__tmp = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__sp_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__instr_rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__sp_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset_signed = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm_signed = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__spimm = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__rs = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__dst = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__dst = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__rs = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__dst = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__dst = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__rs = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__src = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__src = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__instr = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__rs = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__src = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__Vfuncout = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__src = 0;
    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__instr = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
