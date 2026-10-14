// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "Vtop_sim__pch.h"

void Vtop_sim___024root___eval_triggers_vec__act(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_triggers_vec__act\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__en_wb__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__en_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__top_sim__DOT__u_core__DOT__id_in_ready__0 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vtop_sim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop_sim___024root___act_sequent__TOP__0(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___act_sequent__TOP__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb)));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err)))) 
           | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                  & ((~ ((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U)) 
                         | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x00000014U)))) 
                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))) 
                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                      >> 0x0000001fU)))) {
            if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)))) {
                                if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x01000000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000016U)))) {
                                                if (
                                                    (0x00200000U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00100000U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
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
            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                          >> 0x0000001eU)))) {
                if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001bU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((0x00400000U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000015U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000016U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000015U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000016U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000015U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
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
        if ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
             >> 0x0000001fU)) {
            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                          >> 0x0000001eU)))) {
                if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001bU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((0x01000000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00800000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00400000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00200000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    }
                                }
                            }
                        }
                        if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((0x01000000U 
                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00800000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00400000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((0x00200000U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0x00000000ffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))
                ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q
                : (1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
}

void Vtop_sim___024root___act_sequent__TOP__1(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___act_sequent__TOP__1\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch = 0U;
    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw 
                    = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                       & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid));
            }
            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                  ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)
                  : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec;
            }
        } else {
            if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                }
            } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = (1U & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                              >> 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)));
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch 
                    = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                    = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                             | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                >> 1U)));
                vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch = 1U;
            } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
            if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec) 
                                        << 3U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                          << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec))))))) {
                if ((0U != ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec) 
                              << 3U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:796: Assertion failed in %Ntop_sim.u_core.id_stage_i: unique case, but multiple matches found for '1'h1'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("ibex/rtl/ibex_id_stage.sv", 796, "");
                    }
                }
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))))))) {
            if ((0U != (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: ibex_id_stage.sv:794: Assertion failed in %Ntop_sim.u_core.id_stage_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 1,(IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
                    VL_STOP_MT("ibex/rtl/ibex_id_stage.sv", 794, "");
                }
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)))) 
           | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump) 
              | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop_sim__ConstPool__TABLE_hd509d426_0;

void Vtop_sim___024root___act_comb__TOP__0(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___act_comb__TOP__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 1U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id = 1U;
    vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy = 1U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 2U;
            vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id = 2U;
            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                 & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save = 1U;
            }
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 2U;
            vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id = 2U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
        }
    } else if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 2U;
                vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 2U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id 
                        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 3U : 0U);
                    if ((1U & (~ VL_ONEHOT_I(((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))))))) {
                        if ((0U != ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) 
                                      << 5U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                                   << 3U))) 
                                    | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) 
                                        << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_controller.sv:757: Assertion failed in %Ntop_sim.u_core.id_stage_i.controller_i: unique case, but multiple matches found for '1'h1'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("ibex/rtl/ibex_controller.sv", 757, "");
                            }
                        }
                    }
                    vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause = 1U;
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval 
                            = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err_plus2)
                                ? ((IData)(2U) + vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)
                                : vlSelfRef.top_sim__DOT__u_core__DOT__pc_id);
                    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval 
                            = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)
                                ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_c_id)
                                : vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id);
                    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause 
                            = ((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                ? 0x0bU : 8U);
                    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                        if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause = 0U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 3U;
                        }
                    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 7U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval 
                            = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
                    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause = 5U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval 
                            = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
                    }
                } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 3U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id = 1U;
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                    }
                } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 4U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id = 1U;
                } else if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                }
                if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 1U;
            if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
            }
            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set;
                vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump 
                    = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set;
            }
            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
                 & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id) 
                    | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id)) 
                       & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else {
            if (vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
            if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            if ((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                       | (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy = 0U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__pc_set = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__en_wb = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id)) 
                                                  & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_5) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec 
        = (0x0000001fU & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause));
    if ((0x00000040U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id))
            ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id))
                ? 0x1a110808U : 0x1a110800U) : ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id))
                                                 ? 
                                                ((0xffffff00U 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec) 
                                                    << 2U))
                                                 : 
                                                (0xffffff00U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.top_sim__DOT__u_core__DOT__pc_id;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
        = (((3U == (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x1eU)) << 6U) | (((2U == (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  >> 0x1eU)) 
                                          << 5U) | 
                                         (0x0000001fU 
                                          & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__double_fault_seen_o = 0U;
    if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                      >> 0x0000001fU)))) {
            if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000016U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000015U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000014U)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                                                            = 
                                                            (0x000000c0U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x02000000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000016U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000015U)))) {
                                                if (
                                                    (0x00100000U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                } else {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0x40000000U 
                                                         | (0x0fffffffU 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                    if (
                                                        ((3U 
                                                          != 
                                                          (3U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                         & (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffffcU 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        ((0xfffffe3fU 
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                         | (0x000001c0U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xfffff7ffU 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xffffffe7U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xfffff9ffU 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xffffffdfU 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xffffbfffU 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                        = 
                                                        (0xf000ffffU 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001bU)))) {
                        if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000019U)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000018U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000017U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000016U)))) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x00100000U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                } else {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                }
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
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
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                    = 
                                                    ((((2U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                             >> 7U))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                            >> 9U)) 
                                                        | ((2U 
                                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                               >> 0x00000010U)) 
                                                           | (1U 
                                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 >> 0x15U)))));
                                                if (
                                                    ((3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                          >> 2U))) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                            >> 2U))))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                        = 
                                                        (0x33U 
                                                         & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d));
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
    if (vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause) {
        if (vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.top_sim__DOT__u_core__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id) 
                                   << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id) 
                         << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: ibex_cs_registers.sv:719: Assertion failed in %Ntop_sim.u_core.cs_registers_i: unique case, but multiple matches found for '1'h1'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("ibex/rtl/ibex_cs_registers.sv", 719, "");
                }
            }
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
        if (vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q) 
                      << 6U));
        } else if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((3U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (((4U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 3U)) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                      << 2U));
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
            if ((1U & (~ (IData)((0U != (0x60U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d))))))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                    = (0x00000040U | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                if ((0x00000040U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__double_fault_seen_o = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                        = (0x00000080U | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                }
            }
        }
    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id) {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id) {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U));
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
            = ((0x1fU & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d)) 
               | (0x00000020U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                 << 1U)));
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
            = (0xbfU & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
        if ((3U != (3U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                          >> 2U)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                = (0x3dU & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d));
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                      << 2U));
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d 
                = (0x00000010U | (0x23U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d)));
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id) 
                               << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id) 
                                          << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id) 
                     << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id) 
                                << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: ibex_cs_registers.sv:716: Assertion failed in %Ntop_sim.u_core.cs_registers_i: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("ibex/rtl/ibex_cs_registers.sv", 716, "");
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id) 
                     | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready 
        = (1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id)) 
                 & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                       | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id)))));
    vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q) 
              | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown)) 
            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int)) 
           & ((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                  >> 1U)) & ((~ (3U == (3U & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                       >> 1U))))))) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set))));
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb 
        = (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
            & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
               & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                  & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                     & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err)))))) 
           & ((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err) 
                  & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid))) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb)));
    vlSelfRef.top_sim__DOT__rf_we_wb = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                        & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec)));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec)));
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req = 
        ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
         & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id) 
            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    if (vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr 
            = (0xfffffffeU & ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                               ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                   ? 0x00000080U : 
                                  ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                    ? 0x00000080U : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                               : ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                   ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                       ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                       : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc)
                                   : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                       ? (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))
                                       : 0x00000080U))));
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr 
                              >> 1U));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                              + ((2U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                        << 1U)) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
              | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init;
    if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                      >> 0x0000001fU)))) {
            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                          >> 0x0000001eU)))) {
                if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001bU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001aU)))) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000017U)))) {
                                            if ((0x00400000U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000015U)))) {
                                                    if (
                                                        (0x00100000U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
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
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.top_sim__DOT__instr_req = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
                                         | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x00000020U) 
           | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : (((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                    >> 2U)) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb))
                ? (1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlSelfRef.top_sim__DOT__rf_wdata_wb = ((- (IData)((IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                           & vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id);
    vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec 
        = (((((((((IData)(((0x00000f80U == (0x00000f80U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                           & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                  << 3U) | ((IData)(((0x00000f00U == 
                                      (0x00000f80U 
                                       & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                     & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                            << 2U)) | (((IData)(((0x00000e80U 
                                                  == 
                                                  (0x00000f80U 
                                                   & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                 & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                        << 1U) | (IData)(
                                                         ((0x00000e00U 
                                                           == 
                                                           (0x00000f80U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                          & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
               << 0x0000000cU) | (((((IData)(((0x00000d80U 
                                               == (0x00000f80U 
                                                   & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                              & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                     << 3U) | ((IData)(
                                                       ((0x00000d00U 
                                                         == 
                                                         (0x00000f80U 
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                        & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                               << 2U)) 
                                   | (((IData)(((0x00000c80U 
                                                 == 
                                                 (0x00000f80U 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                       << 1U) | (IData)(
                                                        ((0x00000c00U 
                                                          == 
                                                          (0x00000f80U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                         & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
                                  << 8U)) | ((((((IData)(
                                                         ((0x00000b80U 
                                                           == 
                                                           (0x00000f80U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                          & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                 << 3U) 
                                                | ((IData)(
                                                           ((0x00000b00U 
                                                             == 
                                                             (0x00000f80U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                   << 2U)) 
                                               | (((IData)(
                                                           ((0x00000a80U 
                                                             == 
                                                             (0x00000f80U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0x00000a00U 
                                                              == 
                                                              (0x00000f80U 
                                                               & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
                                              << 4U) 
                                             | ((((IData)(
                                                          ((0x00000980U 
                                                            == 
                                                            (0x00000f80U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                           & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                  << 3U) 
                                                 | ((IData)(
                                                            ((0x00000900U 
                                                              == 
                                                              (0x00000f80U 
                                                               & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                    << 2U)) 
                                                | (((IData)(
                                                            ((0x00000880U 
                                                              == 
                                                              (0x00000f80U 
                                                               & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             ((0x00000800U 
                                                               == 
                                                               (0x00000f80U 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                              & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))))) 
            << 0x00000010U) | (((((((IData)(((0x00000780U 
                                              == (0x00000f80U 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                    << 3U) | ((IData)(
                                                      ((0x00000700U 
                                                        == 
                                                        (0x00000f80U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                       & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                              << 2U)) 
                                  | (((IData)(((0x00000680U 
                                                == 
                                                (0x00000f80U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                               & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                      << 1U) | (IData)(
                                                       ((0x00000600U 
                                                         == 
                                                         (0x00000f80U 
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                        & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
                                 << 0x0000000cU) | 
                                (((((IData)(((0x00000580U 
                                              == (0x00000f80U 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                    << 3U) | ((IData)(
                                                      ((0x00000500U 
                                                        == 
                                                        (0x00000f80U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                       & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                              << 2U)) 
                                  | (((IData)(((0x00000480U 
                                                == 
                                                (0x00000f80U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                               & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                      << 1U) | (IData)(
                                                       ((0x00000400U 
                                                         == 
                                                         (0x00000f80U 
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                        & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
                                 << 8U)) | ((((((IData)(
                                                        ((0x00000380U 
                                                          == 
                                                          (0x00000f80U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                         & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                << 3U) 
                                               | ((IData)(
                                                          ((0x00000300U 
                                                            == 
                                                            (0x00000f80U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                           & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                  << 2U)) 
                                              | (((IData)(
                                                          ((0x00000280U 
                                                            == 
                                                            (0x00000f80U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                           & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                  << 1U) 
                                                 | (IData)(
                                                           ((0x00000200U 
                                                             == 
                                                             (0x00000f80U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))) 
                                             << 4U) 
                                            | ((((IData)(
                                                         ((0x00000180U 
                                                           == 
                                                           (0x00000f80U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                          & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                 << 3U) 
                                                | ((IData)(
                                                           ((0x00000100U 
                                                             == 
                                                             (0x00000f80U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                   << 2U)) 
                                               | (((IData)(
                                                           ((0x00000080U 
                                                             == 
                                                             (0x00000f80U 
                                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                            & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              == 
                                                              (0x00000f80U 
                                                               & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                                             & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
            << 1U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                      | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
    vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_load = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__perf_store = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out = 1U;
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q;
                }
            }
        } else {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out = 1U;
            } else if (vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) {
                vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                if (vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)));
                    vlSelfRef.top_sim__DOT__u_core__DOT__perf_store 
                        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
                vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
        }
    } else if (vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) {
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
            = ((((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                 & (0U != (3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                         >> 1U))))) 
                | (IData)(((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                           & (6ULL == (6ULL & vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))))
                ? 1U : 3U);
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
                : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q;
    if ((2U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x00008000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x00000800U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x00000400U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x00000100U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 1U;
                                    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                            } else {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = 0x00008067U;
                                                if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 6U;
                                            }
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = 0x00000513U;
                                        } else {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__spimm 
                                                = (3U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 2U));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__rlist 
                                                = (0x0000000fU 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 4U));
                                            vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm = 0;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm 
                                                = (0x007fU 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__spimm 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__spimm;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__rlist 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__rlist;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__Vfuncout 
                                                = (0x0000007fU 
                                                   & (([&]() {
                                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist 
                                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__rlist;
                                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__Vfuncout 
                                                                = 
                                                                ((8U 
                                                                  & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist))
                                                                  ? 
                                                                 ((4U 
                                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist))
                                                                   ? 
                                                                  ((2U 
                                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist))
                                                                    ? 
                                                                   ((1U 
                                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist))
                                                                     ? 0x40U
                                                                     : 0x30U)
                                                                    : 0x30U)
                                                                   : 0x20U)
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__rlist))
                                                                   ? 0x10U
                                                                   : 0U));
                                                        }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__5__Vfuncout)) 
                                                      + 
                                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__spimm), 4U)));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm 
                                                = (
                                                   (0x0f80U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm)) 
                                                   | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__4__Vfuncout));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm_signed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__instr 
                                                = (0x00010113U 
                                                   | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__imm_signed) 
                                                      << 0x00000014U));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__Vfuncout 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__instr;
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__3__Vfuncout;
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                if (
                                                    (0x1cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 8U)))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 5U;
                                                } else if (
                                                           (0x1eU 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 8U)))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 6U;
                                                } else {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        VL_ONEHOT_I(
                                                                    (((0x1eU 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 8U))) 
                                                                      << 1U) 
                                                                     | (0x1cU 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                            >> 8U)))))))) {
                                                    if (
                                                        (0U 
                                                         != 
                                                         (((0x1eU 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0x1cU 
                                                             == 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 >> 8U)))))) {
                                                        if (VL_UNLIKELY((
                                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:674: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '5'h%x'\n",0,
                                                                         64,
                                                                         VL_TIME_UNITED_Q(1),
                                                                         -12,
                                                                         vlSymsp->name(),
                                                                         5,
                                                                         (0x0000001fU 
                                                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                             >> 8U)));
                                                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 674, "");
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__sp_offset 
                                                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__rlist 
                                                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q;
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                                    = 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q) 
                                                        - (IData)(1U)));
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                                    = 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q) 
                                                        - (IData)(1U)));
                                                if (
                                                    (4U 
                                                     == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 4U;
                                                }
                                            }
                                            vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr = 0;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr 
                                                = (3U 
                                                   | (0xffffff80U 
                                                      & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__rlist;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__Vfuncout 
                                                = (0x0000001fU 
                                                   & ((0x00000010U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                           ? 0U
                                                           : 
                                                          ((IData)(0x0bU) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                        ? 
                                                       ((IData)(0x0bU) 
                                                        + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                           ? 
                                                          ((IData)(0x0bU) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                           : 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                           ? 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__rlist))
                                                           : 1U))
                                                         : 0U))));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr 
                                                = (0x00012000U 
                                                   | ((0x0000007fU 
                                                       & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr) 
                                                      | (((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__sp_offset) 
                                                          << 0x00000016U) 
                                                         | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__7__Vfuncout) 
                                                            << 7U))));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__Vfuncout 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__instr;
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__6__Vfuncout;
                                        } else {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                    } else {
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__instr_rlist 
                                            = (0x0000000fU 
                                               & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__rlist 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__instr_rlist;
                                        if ((0x0fU 
                                             == (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__rlist))) {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__rlist = 0x10U;
                                        }
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__Vfuncout 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__rlist;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__8__Vfuncout;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                            = (0x0000001fU 
                                               & (([&]() {
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__spimm 
                                                            = 
                                                            (3U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 2U));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__rlist 
                                                            = 
                                                            (0x0000000fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 4U));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__spimm 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__spimm;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__rlist 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__rlist;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__Vfuncout 
                                                            = 
                                                            (0x0000007fU 
                                                             & (([&]() {
                                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist 
                                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__rlist;
                                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__Vfuncout 
                                                                            = 
                                                                            ((8U 
                                                                              & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist))
                                                                              ? 
                                                                             ((4U 
                                                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist))
                                                                               ? 
                                                                              ((2U 
                                                                                & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist))
                                                                                ? 
                                                                               ((1U 
                                                                                & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist))
                                                                                 ? 0x40U
                                                                                 : 0x30U)
                                                                                : 0x30U)
                                                                               : 0x20U)
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__rlist))
                                                                               ? 0x10U
                                                                               : 0U));
                                                                    }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__11__Vfuncout)) 
                                                                + 
                                                                VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__spimm), 4U)));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__tmp 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__10__Vfuncout;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__Vfuncout 
                                                            = 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__tmp) 
                                                                >> 2U));
                                                    }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__9__Vfuncout)) 
                                                  - (IData)(1U)));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__sp_offset 
                                            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__rlist 
                                            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d;
                                        vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr = 0;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr 
                                            = (3U | 
                                               (0xffffff80U 
                                                & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__rlist;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__Vfuncout 
                                            = (0x0000001fU 
                                               & ((0x00000010U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                       ? 0U
                                                       : 
                                                      ((IData)(0x0bU) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                    ? 
                                                   ((IData)(0x0bU) 
                                                    + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                       ? 
                                                      ((IData)(0x0bU) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                       : 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                       ? 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__rlist))
                                                       : 1U))
                                                     : 0U))));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr 
                                            = (0x00012000U 
                                               | ((0x0000007fU 
                                                   & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr) 
                                                  | (((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__sp_offset) 
                                                      << 0x00000016U) 
                                                     | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__13__Vfuncout) 
                                                        << 7U))));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__Vfuncout 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__instr;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__12__Vfuncout;
                                        if ((3U >= (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                        } else if (
                                                   (4U 
                                                    == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 4U;
                                            }
                                        } else {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                                = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d) 
                                                      - (IData)(1U)));
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                                = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d) 
                                                      - (IData)(1U)));
                                            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 3U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x00000200U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x00000100U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 1U;
                                    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                            } else {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = 0x00008067U;
                                                if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 6U;
                                            }
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = 0x00000513U;
                                        } else {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__spimm 
                                                = (3U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 2U));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__rlist 
                                                = (0x0000000fU 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 4U));
                                            vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm = 0;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm 
                                                = (0x007fU 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__spimm 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__spimm;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__rlist 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__rlist;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__Vfuncout 
                                                = (0x0000007fU 
                                                   & (([&]() {
                                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist 
                                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__rlist;
                                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__Vfuncout 
                                                                = 
                                                                ((8U 
                                                                  & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist))
                                                                  ? 
                                                                 ((4U 
                                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist))
                                                                   ? 
                                                                  ((2U 
                                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist))
                                                                    ? 
                                                                   ((1U 
                                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist))
                                                                     ? 0x40U
                                                                     : 0x30U)
                                                                    : 0x30U)
                                                                   : 0x20U)
                                                                  : 
                                                                 ((4U 
                                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__rlist))
                                                                   ? 0x10U
                                                                   : 0U));
                                                        }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__19__Vfuncout)) 
                                                      + 
                                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__spimm), 4U)));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm 
                                                = (
                                                   (0x0f80U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm)) 
                                                   | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__18__Vfuncout));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm_signed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__instr 
                                                = (0x00010113U 
                                                   | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__imm_signed) 
                                                      << 0x00000014U));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__Vfuncout 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__instr;
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__17__Vfuncout;
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                if (
                                                    (0x1cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 8U)))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 5U;
                                                } else if (
                                                           (0x1eU 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 8U)))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 6U;
                                                } else {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        VL_ONEHOT_I(
                                                                    (((0x1eU 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 8U))) 
                                                                      << 1U) 
                                                                     | (0x1cU 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                            >> 8U)))))))) {
                                                    if (
                                                        (0U 
                                                         != 
                                                         (((0x1eU 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 8U))) 
                                                           << 1U) 
                                                          | (0x1cU 
                                                             == 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 >> 8U)))))) {
                                                        if (VL_UNLIKELY((
                                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:674: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '5'h%x'\n",0,
                                                                         64,
                                                                         VL_TIME_UNITED_Q(1),
                                                                         -12,
                                                                         vlSymsp->name(),
                                                                         5,
                                                                         (0x0000001fU 
                                                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                             >> 8U)));
                                                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 674, "");
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__sp_offset 
                                                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__rlist 
                                                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q;
                                            if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                                    = 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q) 
                                                        - (IData)(1U)));
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                                    = 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q) 
                                                        - (IData)(1U)));
                                                if (
                                                    (4U 
                                                     == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q))) {
                                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 4U;
                                                }
                                            }
                                            vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr = 0;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr 
                                                = (3U 
                                                   | (0xffffff80U 
                                                      & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__rlist;
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__Vfuncout 
                                                = (0x0000001fU 
                                                   & ((0x00000010U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                           ? 0U
                                                           : 
                                                          ((IData)(0x0bU) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                        ? 
                                                       ((IData)(0x0bU) 
                                                        + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                           ? 
                                                          ((IData)(0x0bU) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                           : 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                           ? 
                                                          ((IData)(3U) 
                                                           + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__rlist))
                                                           : 1U))
                                                         : 0U))));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr 
                                                = (0x00012000U 
                                                   | ((0x0000007fU 
                                                       & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr) 
                                                      | (((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__sp_offset) 
                                                          << 0x00000016U) 
                                                         | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__21__Vfuncout) 
                                                            << 7U))));
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__Vfuncout 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__instr;
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                                = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__20__Vfuncout;
                                        } else {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                    } else {
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__instr_rlist 
                                            = (0x0000000fU 
                                               & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__rlist 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__instr_rlist;
                                        if ((0x0fU 
                                             == (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__rlist))) {
                                            vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__rlist = 0x10U;
                                        }
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__Vfuncout 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__rlist;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__22__Vfuncout;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                            = (0x0000001fU 
                                               & (([&]() {
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__spimm 
                                                            = 
                                                            (3U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 2U));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__rlist 
                                                            = 
                                                            (0x0000000fU 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 4U));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__spimm 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__spimm;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__rlist 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__rlist;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__Vfuncout 
                                                            = 
                                                            (0x0000007fU 
                                                             & (([&]() {
                                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist 
                                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__rlist;
                                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__Vfuncout 
                                                                            = 
                                                                            ((8U 
                                                                              & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist))
                                                                              ? 
                                                                             ((4U 
                                                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist))
                                                                               ? 
                                                                              ((2U 
                                                                                & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist))
                                                                                ? 
                                                                               ((1U 
                                                                                & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist))
                                                                                 ? 0x40U
                                                                                 : 0x30U)
                                                                                : 0x30U)
                                                                               : 0x20U)
                                                                              : 
                                                                             ((4U 
                                                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__rlist))
                                                                               ? 0x10U
                                                                               : 0U));
                                                                    }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__25__Vfuncout)) 
                                                                + 
                                                                VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__spimm), 4U)));
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__tmp 
                                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__24__Vfuncout;
                                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__Vfuncout 
                                                            = 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__tmp) 
                                                                >> 2U));
                                                    }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_word__23__Vfuncout)) 
                                                  - (IData)(1U)));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__sp_offset 
                                            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__rlist 
                                            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d;
                                        vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr = 0;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr 
                                            = (3U | 
                                               (0xffffff80U 
                                                & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__rlist;
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__Vfuncout 
                                            = (0x0000001fU 
                                               & ((0x00000010U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                       ? 0U
                                                       : 
                                                      ((IData)(0x0bU) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                    ? 
                                                   ((IData)(0x0bU) 
                                                    + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                       ? 
                                                      ((IData)(0x0bU) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                       : 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                       ? 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__rlist))
                                                       : 1U))
                                                     : 0U))));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr 
                                            = (0x00012000U 
                                               | ((0x0000007fU 
                                                   & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr) 
                                                  | (((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__sp_offset) 
                                                      << 0x00000016U) 
                                                     | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__27__Vfuncout) 
                                                        << 7U))));
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__Vfuncout 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__instr;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                            = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_pop_load_reg__26__Vfuncout;
                                        if ((3U >= (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                        } else if (
                                                   (4U 
                                                    == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 4U;
                                            }
                                        } else {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                                = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d) 
                                                      - (IData)(1U)));
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                                = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d) 
                                                      - (IData)(1U)));
                                            if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 3U;
                                            }
                                        }
                                    }
                                }
                            } else if ((0x00000100U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 1U;
                                if ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__instr_rlist 
                                        = (0x0000000fU 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 4U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__rlist 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__instr_rlist;
                                    if ((0x0fU == (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__rlist))) {
                                        vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__rlist = 0x10U;
                                    }
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__rlist;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_init__28__Vfuncout;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__rlist 
                                        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d;
                                    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr = 0;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr 
                                        = (0x00012e23U 
                                           | (0xfff00000U 
                                              & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__rlist;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__Vfuncout 
                                        = (0x0000001fU 
                                           & ((0x00000010U 
                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                      ? 0U
                                                      : 
                                                     ((IData)(0x0bU) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))))))
                                               : ((8U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                   ? 
                                                  ((IData)(0x0bU) 
                                                   + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                      ? 
                                                     ((IData)(0x0bU) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                      : 
                                                     ((IData)(3U) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__rlist))
                                                      : 1U))
                                                    : 0U))));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr 
                                        = (0xfe000000U 
                                           | ((0x000fffffU 
                                               & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr) 
                                              | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__30__Vfuncout) 
                                                 << 0x00000014U)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__instr;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__29__Vfuncout;
                                    if ((3U >= (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d))) {
                                        if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 2U;
                                        }
                                    } else {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                            = (0x0000001fU 
                                               & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d) 
                                                  - (IData)(1U)));
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d = 2U;
                                        if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 1U;
                                        }
                                    }
                                } else if ((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__sp_offset 
                                        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__rlist 
                                        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q;
                                    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d 
                                            = (0x0000001fU 
                                               & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q) 
                                                  - (IData)(1U)));
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d 
                                            = (0x0000001fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q)));
                                        if ((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q))) {
                                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 2U;
                                        }
                                    }
                                    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr = 0;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset_signed 
                                        = (0x00000fffU 
                                           & (- ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__sp_offset) 
                                                 << 2U)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset_signed;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr 
                                        = (0x00002023U 
                                           | ((0xffff8000U 
                                               & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr) 
                                              | (0x00000f80U 
                                                 & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset) 
                                                    << 7U))));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr 
                                        = (0x00010000U 
                                           | (0xfff07fffU 
                                              & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__rlist;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__Vfuncout 
                                        = (0x0000001fU 
                                           & ((0x00000010U 
                                               & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                      ? 0U
                                                      : 
                                                     ((IData)(0x0bU) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))))))
                                               : ((8U 
                                                   & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                   ? 
                                                  ((IData)(0x0bU) 
                                                   + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                      ? 
                                                     ((IData)(0x0bU) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                      : 
                                                     ((IData)(3U) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__rlist))
                                                      : 1U))
                                                    : 0U))));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr 
                                        = ((0x000fffffU 
                                            & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr) 
                                           | (((0x00000fe0U 
                                                & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__neg_offset)) 
                                               | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_top_reg__32__Vfuncout)) 
                                              << 0x00000014U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__instr;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_push_store_reg__31__Vfuncout;
                                } else if ((2U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__spimm 
                                        = (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__rlist 
                                        = (0x0000000fU 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 4U));
                                    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                    }
                                    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm = 0;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm 
                                        = (0x007fU 
                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__spimm 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__spimm;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__rlist 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__rlist;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__Vfuncout 
                                        = (0x0000007fU 
                                           & (([&]() {
                                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist 
                                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__rlist;
                                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__Vfuncout 
                                                        = 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist))
                                                             ? 0x40U
                                                             : 0x30U)
                                                            : 0x30U)
                                                           : 0x20U)
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__rlist))
                                                           ? 0x10U
                                                           : 0U));
                                                }(), (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj_base__35__Vfuncout)) 
                                              + VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__spimm), 4U)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm 
                                        = ((0x0f80U 
                                            & (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm)) 
                                           | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_stack_adj__34__Vfuncout));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm_signed 
                                        = (0x00000fffU 
                                           & (- (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__instr 
                                        = (0x00010113U 
                                           | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__imm_signed) 
                                              << 0x00000014U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__instr;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_addi__33__Vfuncout;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         (((2U 
                                                            == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                           << 2U) 
                                                          | (((1U 
                                                               == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                              << 1U) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)))))))) {
                                    if ((0U != (((2U 
                                                  == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                 << 2U) 
                                                | (((1U 
                                                     == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                    << 1U) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:557: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1),
                                                         -12,
                                                         vlSymsp->name(),
                                                         3,
                                                         (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q));
                                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 557, "");
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else if ((0x00000800U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x00000400U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 5U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 1U;
                                if ((1U & (~ VL_ONEHOT_I(
                                                         (((7U 
                                                            == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))))))) {
                                    if ((0U != (((7U 
                                                  == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:710: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1),
                                                         -12,
                                                         vlSymsp->name(),
                                                         3,
                                                         (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q));
                                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 710, "");
                                        }
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__rs 
                                        = (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__dst 
                                        = (((0U < (3U 
                                                   & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__rs) 
                                                      >> 1U))) 
                                            << 4U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__rs) 
                                                    >> 1U))) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__rs)));
                                    if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                         & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 7U;
                                    }
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__dst 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__dst;
                                    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr = 0;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr 
                                        = (0x00050013U 
                                           | ((0xfff00000U 
                                               & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr) 
                                              | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__dst) 
                                                 << 7U)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr 
                                        = (0x000fffffU 
                                           & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr);
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__instr;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__37__Vfuncout;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__36__Vfuncout;
                                } else if ((7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__rs 
                                        = (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__dst 
                                        = (((0U < (3U 
                                                   & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__rs) 
                                                      >> 1U))) 
                                            << 4U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__rs) 
                                                    >> 1U))) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__rs)));
                                    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                    }
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__dst 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__dst;
                                    vlSelf->__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr = 0;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr 
                                        = (0x00058013U 
                                           | ((0xfff00000U 
                                               & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr) 
                                              | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__dst) 
                                                 << 7U)));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr 
                                        = (0x000fffffU 
                                           & vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr);
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__instr;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__39__Vfuncout;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mvsa01__38__Vfuncout;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                }
                            } else if ((3U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 5U)))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 1U;
                                if ((1U & (~ VL_ONEHOT_I(
                                                         (((7U 
                                                            == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))))))) {
                                    if ((0U != (((7U 
                                                  == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:736: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1),
                                                         -12,
                                                         vlSymsp->name(),
                                                         3,
                                                         (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q));
                                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 736, "");
                                        }
                                    }
                                }
                                if ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__rs 
                                        = (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__src 
                                        = (((0U < (3U 
                                                   & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__rs) 
                                                      >> 1U))) 
                                            << 4U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__rs) 
                                                    >> 1U))) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__rs)));
                                    if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i) 
                                         & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 7U;
                                    }
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__src 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__src;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__instr 
                                        = (0x0513U 
                                           | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__src) 
                                              << 0x0000000fU));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__instr;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__41__Vfuncout;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__40__Vfuncout;
                                } else if ((7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q))) {
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__rs 
                                        = (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__src 
                                        = (((0U < (3U 
                                                   & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__rs) 
                                                      >> 1U))) 
                                            << 4U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__rs) 
                                                    >> 1U))) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__rs)));
                                    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded = 2U;
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                    }
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__src 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__src;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__instr 
                                        = (0x0593U 
                                           | ((IData)(vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__src) 
                                              << 0x0000000fU));
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__instr;
                                    vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__Vfuncout 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mv_reg__43__Vfuncout;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = vlSelfRef.__Vfunc_top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_mva01s__42__Vfuncout;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d = 0U;
                                }
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                            >> 5U))) 
                                                       << 1U) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             >> 5U)))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 5U))) 
                                             << 1U) 
                                            | (1U == 
                                               (3U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 5U)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:705: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 5U)));
                                        VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 705, "");
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0U != (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 2U)))
                            ? (0x33U | ((0x01f00000U 
                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000012U)) 
                                        | ((0x000f8000U 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x00000f80U 
                                              & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          >> 7U))) ? 0x00100073U
                                : (0x00e7U | (0x000f8000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)))));
                } else if ((0U != (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 2U)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x33U | ((0x01f00000U & 
                                     (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)));
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x0067U | (0x000f8000U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 8U)));
                    if ((0U == (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 7U)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            } else if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    if ((0U == (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 7U)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00001013U | ((0x01f00000U 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000012U)) 
                                      | ((0x000f8000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0x00000f80U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00008000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00000400U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x00000040U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x00000020U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x00000010U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    if ((8U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    } else if ((4U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                            = (0xfff44413U 
                                               | ((0x00038000U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 8U)) 
                                                  | (0x00000380U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)));
                                    } else {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((8U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((4U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x60541413U 
                                                   | ((0x00038000U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 8U)) 
                                                      | (0x00000380U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                                : (0x08044433U 
                                                   | ((0x00038000U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 8U)) 
                                                      | (0x00000380U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                            : ((4U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x60441413U 
                                                   | ((0x00038000U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 8U)) 
                                                      | (0x00000380U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                                : (0x0ff47413U 
                                                   | ((0x00038000U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 8U)) 
                                                      | (0x00000380U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                                }
                            } else {
                                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x02840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x00000020U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x00000020U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        } else if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((0U == ((0x00000020U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 2U))))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((2U == (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 7U)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x00000012U))))));
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x00008000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                            | (0x00000200U 
                                               & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 3U))))));
            }
        } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0x00000800U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00000400U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00000040U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00841023U | ((0x00700000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000100U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 3U)))));
                }
                if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 5U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 6U)))))))) {
                    if ((0U != ((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       >> 5U)) | (1U 
                                                  & (~ 
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      >> 6U)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:282: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         1,(1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 6U)));
                            VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 282, "");
                        }
                    }
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00840023U | ((0x00700000U 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000012U)) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | ((0x00000100U 
                                             & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 3U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 1U))))));
            }
        } else if ((0x00000400U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x00000040U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x00000040U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00041403U | ((0x00200000U 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000010U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))));
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045403U | ((0x00200000U 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 0x00000010U)) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 5U)))));
            }
            if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 5U)) 
                                      | (1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 6U)))))))) {
                if ((0U != ((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                   >> 5U)) | (1U & 
                                              (~ (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 6U)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: ibex_compressed_decoder.sv:257: Assertion failed in %Ntop_sim.u_core.if_stage_i.compressed_decoder_i: unique case, but multiple matches found for '1'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     1,(1U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 6U)));
                        VL_STOP_MT("ibex/rtl/ibex_compressed_decoder.sv", 257, "");
                    }
                }
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00044403U | ((((8U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           >> 2U)) 
                                    | (4U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 4U))) 
                                   << 0x00000012U) 
                                  | ((0x00038000U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 8U)) | (0x00000380U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 5U)))));
        }
    } else if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 5U)))))));
        }
    } else if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
            = (0x00010413U | ((0x3c000000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x00000013U)) 
                              | ((0x03000000U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x0000000dU)) 
                                 | ((0x00800000U & 
                                     (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      << 0x00000012U)) 
                                    | ((0x00400000U 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x00000010U)) 
                                       | (0x00000380U 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 5U)))))));
        if ((0U == (0x000000ffU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                                   >> 5U)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
             ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
             : (0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3) 
              << 2U));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(vlSelfRef.top_sim__DOT__instr_req) 
                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                      >> 1U)) << 1U)) | (1U & ((IData)(vlSelfRef.top_sim__DOT__instr_req) 
                                               | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    __Vtableidx8 = ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q) 
                      << 4U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
                                << 3U)) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                            << 1U) 
                                           | ((IData)(vlSelfRef.top_sim__DOT__instr_req) 
                                              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = Vtop_sim__ConstPool__TABLE_hd509d426_0[__Vtableidx8];
    vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_we_ex 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) 
           | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i)
            ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded)
            : 0U);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) 
            & (1U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded))) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__));
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_6)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_7)));
}

void Vtop_sim___024root___eval_act(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_act\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop_sim___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop_sim___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop_sim___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<IData/*31:0*/, 128> Vtop_sim__ConstPool__TABLE_ha3c5110d_0;

void Vtop_sim___024root___nba_sequent__TOP__0(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___nba_sequent__TOP__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    QData/*33:0*/ __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0;
    QData/*33:0*/ __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0;
    // Body
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q 
            = ((IData)(1U) + vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q);
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_we_ex))) {
            __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0U];
            __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_we_ex))) {
            __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1U];
            __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = ((0x00020000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   << 0x0000000eU)) 
                   | ((0x00010000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      << 9U)) | ((0x00008000U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     << 4U)) 
                                                 | (0x00007fffU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                       >> 0x00000010U)))));
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init)
                    ? 1U : (1U | (0xffffff00U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d;
        if (vlSelfRef.top_sim__DOT__instr_rvalid) {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U);
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U);
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n;
            vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q 
            = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                ? 1U : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                         ? 4U : 0U));
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req)
                    ? ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)));
        }
        if ((2U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((4U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((8U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000010U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000020U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000040U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000080U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000100U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000200U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000400U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00000800U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00001000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00002000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00004000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00008000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00010000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00020000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00040000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00080000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00100000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00200000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00400000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x00800000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x01000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x02000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x04000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x08000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x10000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x20000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((0x40000000U & vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        if ((vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec 
             >> 0x1fU)) {
            vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
                = vlSelfRef.top_sim__DOT__rf_wdata_wb;
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        }
        if (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q = 0U;
        __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
        __VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    if (__VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __VdlyVal__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__VdlySet__top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.top_sim__DOT__instr_rvalid = ((IData)(vlSelfRef.rst_n) 
                                            && (IData)(vlSelfRef.top_sim__DOT__instr_req));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0x0000000fU) : ((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                           >> 0x0000000cU))));
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[1U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[2U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[3U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[4U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[5U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[6U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[7U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[8U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[9U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[10U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[11U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[12U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[13U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[14U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[15U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[16U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[17U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[18U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[19U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[20U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[21U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[22U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[23U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[24U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[25U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[26U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[27U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[28U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[29U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[30U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[31U] 
        = vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
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
    vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
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
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q) 
           & (0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
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
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id 
            = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id = 0U;
    }
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
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U];
    __Vtableidx11 = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_hec32eb45__0 
        = Vtop_sim__ConstPool__TABLE_ha3c5110d_0[__Vtableidx11];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__instr_rvalid));
    vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err));
}

void Vtop_sim___024root___nba_sequent__TOP__1(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___nba_sequent__TOP__1\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0;
    top_sim__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h96e00bc5__0 = 0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.rst_n) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered)) 
                      & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__shutdown_latched_q)))))) {
        VL_WRITEF_NX("\n==========================================================================\n [CRITICAL HARDWARE SECURITY ALERT] SENSOR DATA COMPROMISED!\n Attack detected: Injected ciphertext or spoofed sensor data in register.\n Cipher Token: 0x%08x | Expected MAC: 0x%04x | Received MAC: 0x%04x\n Action taken: CPU processes halted. System locked down to prevent exploit.\n==========================================================================\n\n",0,
                     32,vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex,
                     16,(0x0000ffffU & (0xa52cU ^ (
                                                   (((IData)(0x00005a1fU) 
                                                     + 
                                                     ((IData)(0x00009e37U) 
                                                      * 
                                                      (0x0000ffffU 
                                                       & (0xa55aU 
                                                          ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex)))) 
                                                    >> 0x00000010U) 
                                                   ^ 
                                                   ((IData)(0x5a1fU) 
                                                    + 
                                                    ((IData)(0x00009e37U) 
                                                     * 
                                                     (0x0000ffffU 
                                                      & (0xa55aU 
                                                         ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))))))),
                     16,(0x0000ffffU & (0xa52cU ^ (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                   >> 0x00000010U))));
    }
    if (((IData)(vlSelfRef.rst_n) & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb))) {
        if (VL_UNLIKELY(((0x00000084U == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("----------------------------------------------------------------------\n>>> PHASE 1: HARDCODED SENSOR INPUT TEST\n    Hardware Sensor Line   : 0x%08x (Hardcoded Constant)\n    LDSENS x%0# committed   : Encrypted Cipher Token = 0x%08x (Raw data never in RF)\n",0,
                         32,((0x00000090U > vlSelfRef.top_sim__DOT__fetch_addr_q)
                              ? 0x000000ffU : 0x000004a2U),
                         5,(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U)),
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        } else if (VL_UNLIKELY(((0x0000008cU == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("    VRFSENS x%0#, x10 committed: Decrypted Plaintext     = 0x%08x [MATCH & AUTHENTICATED]\n>>> PHASE 1 RESULT: SUCCESS (Hardcoded Sensor Decrypted & Authenticated)\n----------------------------------------------------------------------\n\n",0,
                         5,(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U)),
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        } else if (VL_UNLIKELY(((0x00000094U == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("----------------------------------------------------------------------\n>>> PHASE 2: VARIABLE SENSOR TELEMETRY TEST\n    Hardware Sensor Line   : 0x%08x (Dynamic Live Sensor Reading)\n    LDSENS x%0# committed   : Encrypted Cipher Token = 0x%08x (Raw telemetry protected)\n",0,
                         32,((0x00000090U > vlSelfRef.top_sim__DOT__fetch_addr_q)
                              ? 0x000000ffU : 0x000004a2U),
                         5,(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U)),
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        } else if (VL_UNLIKELY(((0x0000009cU == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("    VRFSENS x%0#, x10 committed: Decrypted Plaintext     = 0x%08x [MATCH & AUTHENTICATED]\n>>> PHASE 2 RESULT: SUCCESS (Dynamic Telemetry Decrypted & Authenticated)\n----------------------------------------------------------------------\n\n",0,
                         5,(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U)),
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        } else if (VL_UNLIKELY(((0x000000a4U == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("----------------------------------------------------------------------\n>>> PHASE 3: SIMULATED ATTACK & TAMPER DETECTION TEST\n    Simulated Injection (ADDI): Tampered Cipher Token in x10 = 0x%08x\n",0,
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        } else if (VL_UNLIKELY(((0x000000acU == vlSelfRef.top_sim__DOT__fetch_addr_q)))) {
            VL_WRITEF_NX("    VRFSENS x%0#, x10 evaluated: Sanitized Output Plaintext   = 0x%08x (Blocked Exploit)\n>>> PHASE 3 RESULT: SUCCESS (Tampering Detected, Alert Triggered, CPU Halted)\n----------------------------------------------------------------------\n\n",0,
                         5,(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U)),
                         32,vlSelfRef.top_sim__DOT__rf_wdata_wb);
        }
    }
    if (((~ (IData)(vlSelfRef.top_sim__DOT__instr_req)) 
         & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_gets_expanded_id 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded;
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_expanded_id 
            = (0x0000ffffU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata);
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_c_id 
            = (0x0000ffffU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata);
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err_plus2 
            = (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                   >> 1U) & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))));
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata));
        vlSelfRef.top_sim__DOT__u_core__DOT__pc_id 
            = (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
        vlSelfRef.top_sim__DOT__u_core__DOT__illegal_c_insn_id 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
        vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d;
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q 
        = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d;
    if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
         | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__ 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__;
    }
    if (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__ = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
            = vlSelfRef.top_sim__DOT__instr_rdata;
    }
    if (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
         | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3))) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
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
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h376d6acc__0 
        = (0U != (((2U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 2U) | (((1U == (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000000cU))) 
                              << 1U) | (0U == (3U & 
                                               (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0000000cU))))));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h5634867c__0 
        = (0U != (((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                 >> 0x0000000cU))) 
                   << 1U) | (0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000000cU)))));
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
         >> 0x0000001fU)) {
        if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                } else if ((0x04000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                                if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
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
                            if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((0x00400000U 
                                        & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x20000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                    if ((0x00100000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
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
}

void Vtop_sim___024root___nba_sequent__TOP__2(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___nba_sequent__TOP__2\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__shutdown_latched_q = 1U;
        }
        if (vlSelfRef.top_sim__DOT__instr_req) {
            vlSelfRef.top_sim__DOT__fetch_addr_q = 
                (0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d);
        }
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                << 2U) | ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                           << 1U) | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__shutdown_latched_q = 0U;
        vlSelfRef.top_sim__DOT__fetch_addr_q = 0U;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
    }
    vlSelfRef.sensor_data_live_o = ((0x00000090U > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                     ? 0x000000ffU : 0x000004a2U);
    vlSelfRef.top_sim__DOT__instr_rdata = ((((0x00000080U 
                                              == vlSelfRef.top_sim__DOT__fetch_addr_q) 
                                             | (0x00000084U 
                                                == vlSelfRef.top_sim__DOT__fetch_addr_q)) 
                                            | (((0x00000088U 
                                                 == vlSelfRef.top_sim__DOT__fetch_addr_q) 
                                                | (0x0000008cU 
                                                   == vlSelfRef.top_sim__DOT__fetch_addr_q)) 
                                               | ((0x00000090U 
                                                   == vlSelfRef.top_sim__DOT__fetch_addr_q) 
                                                  | ((0x00000094U 
                                                      == vlSelfRef.top_sim__DOT__fetch_addr_q) 
                                                     | ((0x00000098U 
                                                         == vlSelfRef.top_sim__DOT__fetch_addr_q) 
                                                        | (0x0000009cU 
                                                           == vlSelfRef.top_sim__DOT__fetch_addr_q))))))
                                            ? ((0x00000080U 
                                                == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                ? 0x0000050bU
                                                : (
                                                   (0x00000084U 
                                                    == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                    ? 0x00000013U
                                                    : 
                                                   ((0x00000088U 
                                                     == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                     ? 0x0005158bU
                                                     : 
                                                    ((0x0000008cU 
                                                      == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                      ? 0x00000013U
                                                      : 
                                                     ((0x00000090U 
                                                       == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                       ? 0x0000050bU
                                                       : 
                                                      ((0x00000094U 
                                                        == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                        ? 0x00000013U
                                                        : 
                                                       ((0x00000098U 
                                                         == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                         ? 0x0005158bU
                                                         : 0x00000013U)))))))
                                            : ((0x000000a0U 
                                                == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                ? 0x00150513U
                                                : (
                                                   (0x000000a4U 
                                                    == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                    ? 0x00000013U
                                                    : 
                                                   ((0x000000a8U 
                                                     == vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                     ? 0x0005160bU
                                                     : 0x00000013U))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__ 
        = (IData)((2U == (6U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__ 
        = (IData)((1U == (3U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_7 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__ 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_6 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_7) 
                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__ 
        = (IData)((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_6) 
                 | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_sim__ConstPool__TABLE_h23304e2a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_sim__ConstPool__TABLE_h2608d7a5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_sim__ConstPool__TABLE_he65bff1b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_sim__ConstPool__TABLE_h053660a6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_h139cf27b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_h611732e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_h7b340f8b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_h27e1e6b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_hac9147c9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop_sim__ConstPool__TABLE_h1e2ce85a_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop_sim__ConstPool__TABLE_h9816e50e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop_sim__ConstPool__TABLE_h0c298502_0;

void Vtop_sim___024root___nba_comb__TOP__0(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___nba_comb__TOP__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2;
    top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2 = 0;
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
    // Body
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_5 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err));
    vlSelfRef.top_sim__DOT__rf_rdata_b = vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg
        [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                         >> 0x00000014U))];
    vlSelfRef.top_sim__DOT__rf_rdata_a = vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg
        [(0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
                }
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
                } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000001aU)))) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000019U)))) {
                        if ((0x01000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x0000001fU 
                                            & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]);
                        } else if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
            }
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
                        } else if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000016U)))) {
                                if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))) {
                                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000016U)))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            }
        } else if ((0x10000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x08000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                              >> 0x0000001aU)))) {
                    if ((0x02000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000018U)))) {
                            if ((0x00800000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000016U)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000015U)))) {
                                        if ((1U & (~ 
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
                } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x00000016U)))) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000015U)))) {
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U)))) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
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
            } else if ((0x00400000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x00200000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000014U)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
            } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
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
        }
    }
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
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:705: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '12'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     12,
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x14U));
                                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 705, "");
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
                                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:740: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1),
                                                     -12,
                                                     vlSymsp->name(),
                                                     2,
                                                     (3U 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 740, "");
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
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:304: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 304, "");
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
                        if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h5634867c__0) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:677: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 677, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
                } else if ((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                } else {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ VL_ONEHOT_I((((1U == (7U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 1U) | 
                                          (0U == (7U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h5634867c__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:447: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         3,(7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 447, "");
                        }
                    }
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
                        VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:321: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0cU)));
                        VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 321, "");
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
        = (0x0000007fU & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id);
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
                                if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x00004000U 
                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
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
                    if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
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
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000001aU)))) {
                            if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0000001fU)))) {
                                if ((0x40000000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
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
                                                  (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x00001000U 
                                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x00001000U 
                                                                    & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x00001000U 
                                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x00001000U 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
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
                                                          & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
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
                        if ((1U & (~ (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
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
                    if ((0x00004000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? 4U : 3U);
                        } else if ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001bU))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001bU))) {
                                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x00001000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                    ? 0x0aU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
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
                        if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h5634867c__0) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1324: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             3,(7U 
                                                & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)));
                                VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 1324, "");
                            }
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                if ((0U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x41U;
                } else if ((1U == (7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x42U;
                }
                if ((1U & (~ VL_ONEHOT_I((((1U == (7U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 1U) | 
                                          (0U == (7U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                    if (vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT____VdfgExtracted_h5634867c__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: ibex_decoder.sv:1063: Assertion failed in %Ntop_sim.u_core.id_stage_i.decoder_i: unique case, but multiple matches found for '3'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         3,(7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0cU)));
                            VL_STOP_MT("ibex/rtl/ibex_decoder.sv", 1063, "");
                        }
                    }
                }
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
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 2U) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__ 
        = (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
            >> 1U) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__));
    top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2 
        = (1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                 | (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__ 
        = ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.top_sim__DOT__instr_rdata);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__ 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.top_sim__DOT__instr_rdata);
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.top_sim__DOT__instr_rdata);
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.top_sim__DOT__rf_rdata_b))) 
                   << 1U));
    if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__rf_rdata_b 
                                  >> 0x10U));
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__rf_rdata_a 
                                  >> 0x10U));
        } else {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0x0000ffffU & vlSelfRef.top_sim__DOT__rf_rdata_b);
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0x0000ffffU & (vlSelfRef.top_sim__DOT__rf_rdata_a 
                                  >> 0x10U));
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0x0000ffffU & ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                               ? (vlSelfRef.top_sim__DOT__rf_rdata_b 
                                  >> 0x10U) : vlSelfRef.top_sim__DOT__rf_rdata_b));
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0x0000ffffU & vlSelfRef.top_sim__DOT__rf_rdata_a);
    }
    if ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_sim__DOT__rf_rdata_b))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.top_sim__DOT__rf_rdata_a))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.top_sim__DOT__rf_rdata_b))) 
                                                  << 1U))));
    }
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
        = ((vlSelfRef.top_sim__DOT__rf_rdata_a >> 0x0000001fU) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_sim__DOT__rf_rdata_a 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.top_sim__DOT__rf_rdata_a 
                                           >> 0x1fU)))));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelfRef.top_sim__DOT__rf_rdata_b >> 0x0000001fU) 
           & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
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
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0U];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)) 
              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)));
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
                            >> 1U) & (vlSelfRef.top_sim__DOT__rf_rdata_b 
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
                            >> 1U) & (vlSelfRef.top_sim__DOT__rf_rdata_b 
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
        = Vtop_sim__ConstPool__TABLE_h23304e2a_0[__Vtableidx6];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens = 0U;
    if ((0x41U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((0x42U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
            vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens = 1U;
        }
    }
    __Vtableidx4 = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop_sim__ConstPool__TABLE_h2608d7a5_0[__Vtableidx4];
    __Vtableidx3 = vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vtop_sim__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vtop_sim__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vtop_sim__ConstPool__TABLE_he65bff1b_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vtop_sim__ConstPool__TABLE_h053660a6_0[__Vtableidx3];
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2) 
           & (3U != (3U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_2) 
           & (3U != (3U & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x00000010U))));
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
        = Vtop_sim__ConstPool__TABLE_h139cf27b_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vtop_sim__ConstPool__TABLE_h611732e7_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vtop_sim__ConstPool__TABLE_h7b340f8b_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vtop_sim__ConstPool__TABLE_h27e1e6b7_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vtop_sim__ConstPool__TABLE_hac9147c9_0[__Vtableidx2];
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vtop_sim__ConstPool__TABLE_h1e2ce85a_0[__Vtableidx2];
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
            : vlSelfRef.top_sim__DOT__rf_rdata_b);
    vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
        = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))
                : vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.top_sim__DOT__rf_rdata_a));
    vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid = 
        ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel))) 
         || ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x00000010U) | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U))
                : ((vlSelfRef.top_sim__DOT__instr_rdata 
                    << 0x00000010U) | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                       >> 0x00000010U)))
            : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
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
    if ((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err 
            = ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err 
            = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
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
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__auth_match 
        = ((0x0000ffffU & (0xa52cU ^ (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                      >> 0x00000010U))) 
           == (0x0000ffffU & (0xa52cU ^ ((((IData)(0x00005a1fU) 
                                           + ((IData)(0x00009e37U) 
                                              * (0x0000ffffU 
                                                 & (0xa55aU 
                                                    ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex)))) 
                                          >> 0x00000010U) 
                                         ^ ((IData)(0x5a1fU) 
                                            + ((IData)(0x00009e37U) 
                                               * (0x0000ffffU 
                                                  & (0xa55aU 
                                                     ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))))))));
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
    vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i 
        = ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)) 
           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw));
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
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_tamper_alert = 0U;
    vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_decrypted_data = 0U;
    if (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens) {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_tamper_alert 
            = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__auth_match)));
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_decrypted_data 
            = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__auth_match)
                ? (0x0000ffffU & (0xbc83U ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))
                : 0U);
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered 
            = (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__auth_match)));
    } else {
        vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered = 0U;
    }
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
        = Vtop_sim__ConstPool__TABLE_h9816e50e_0[__Vtableidx7];
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
        = Vtop_sim__ConstPool__TABLE_h0c298502_0[__Vtableidx5];
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
    vlSelfRef.alert_major_o = vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_tamper_alert;
    vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown 
        = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__shutdown_latched_q) 
           | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered));
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
                                   >> 1U)) : vlSelfRef.top_sim__DOT__rf_rdata_a);
            }
        }
        if ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.top_sim__DOT__rf_rdata_b);
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
                = (QData)((IData)(vlSelfRef.top_sim__DOT__rf_rdata_a));
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
                    ? ((0xffff0000U & ((0xffff0000U 
                                        & ((IData)(0x00005a1fU) 
                                           + ((IData)(0x00009e37U) 
                                              * (0x0000ffffU 
                                                 & (0x19d9U 
                                                    ^ 
                                                    ((0x00000090U 
                                                      > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                      ? 0x000000ffU
                                                      : 0x000004a2U)))))) 
                                       ^ (((IData)(0x5a1fU) 
                                           + ((IData)(0x00009e37U) 
                                              * (0x0000ffffU 
                                                 & (0x19d9U 
                                                    ^ 
                                                    ((0x00000090U 
                                                      > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                      ? 0x000000ffU
                                                      : 0x000004a2U))))) 
                                          << 0x00000010U))) 
                       | (0x0000ffffU & (0xbc83U ^ 
                                         ((0x00000090U 
                                           > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                           ? 0x000000ffU
                                           : 0x000004a2U))))
                    : 0U) : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens)
                              ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_decrypted_data
                              : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                  ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                      ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                      : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                  : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result))));
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

void Vtop_sim___024root___eval_nba(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_nba\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x000000000000001bULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_sim___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
}

void Vtop_sim___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop_sim___024root___eval_phase__act(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_phase__act\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_sim___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop_sim___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop_sim___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_sim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_sim___024root___eval_phase__nba(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_phase__nba\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_sim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_sim___024root___eval_nba(vlSelf);
        Vtop_sim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_sim___024root___eval(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_sim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/top_sim.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("sim/top_sim.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop_sim___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop_sim___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop_sim___024root___eval_debug_assertions(Vtop_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root___eval_debug_assertions\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
