// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_sim__Syms.h"


void Vtop_sim___024root__trace_chg_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_chg_0\n"); );
    // Body
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_sim___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_sim___024root__trace_chg_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_chg_0_sub_0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+2,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+4,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+6,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[3]),34);
        bufp->chgCData(oldp+8,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[0U]),6);
        bufp->chgCData(oldp+9,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[1U]),6);
        bufp->chgCData(oldp+10,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[2U]),6);
        bufp->chgCData(oldp+11,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[3U]),6);
        bufp->chgBit(oldp+12,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[0]));
        bufp->chgBit(oldp+13,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[1]));
        bufp->chgBit(oldp+14,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[2]));
        bufp->chgCData(oldp+15,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U]),6);
        bufp->chgCData(oldp+16,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U]),6);
        bufp->chgCData(oldp+17,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U]),6);
        bufp->chgCData(oldp+18,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U]),6);
        bufp->chgQData(oldp+19,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[0]),34);
        bufp->chgQData(oldp+21,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[1]),34);
        bufp->chgQData(oldp+23,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[2]),34);
        bufp->chgQData(oldp+25,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[3]),34);
        bufp->chgIData(oldp+27,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        bufp->chgCData(oldp+43,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        bufp->chgIData(oldp+59,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1]),32);
        bufp->chgQData(oldp+95,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+97,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+99,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+101,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        bufp->chgCData(oldp+103,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U]),6);
        bufp->chgCData(oldp+104,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U]),6);
        bufp->chgCData(oldp+105,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U]),6);
        bufp->chgCData(oldp+106,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U]),6);
        bufp->chgIData(oldp+107,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[0]),22);
        bufp->chgIData(oldp+108,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[1]),22);
        bufp->chgQData(oldp+109,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[0]),64);
        bufp->chgQData(oldp+111,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[1]),64);
        bufp->chgIData(oldp+113,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
        bufp->chgIData(oldp+114,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
        bufp->chgQData(oldp+115,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+119,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en));
        bufp->chgBit(oldp+120,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
        bufp->chgBit(oldp+121,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
        bufp->chgBit(oldp+122,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
        bufp->chgBit(oldp+123,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
        bufp->chgBit(oldp+124,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        bufp->chgIData(oldp+125,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        bufp->chgIData(oldp+126,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        bufp->chgBit(oldp+127,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 1U))));
        bufp->chgBit(oldp+128,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 1U))));
        bufp->chgBit(oldp+129,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+130,((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                  >> 3U)),29);
        bufp->chgIData(oldp+131,((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                  >> 3U)),29);
        bufp->chgBit(oldp+132,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        bufp->chgBit(oldp+133,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        bufp->chgQData(oldp+134,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+136,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        bufp->chgQData(oldp+137,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                      >> 2U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                      >> 2U))));
        bufp->chgBit(oldp+141,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgBit(oldp+142,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch));
        bufp->chgBit(oldp+143,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        bufp->chgBit(oldp+144,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set));
        bufp->chgBit(oldp+145,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw));
        bufp->chgBit(oldp+146,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
        bufp->chgBit(oldp+147,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
        bufp->chgBit(oldp+148,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
        bufp->chgBit(oldp+149,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
        bufp->chgBit(oldp+150,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
        bufp->chgBit(oldp+151,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
        bufp->chgBit(oldp+152,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[3U] 
                       | vlSelfRef.__Vm_traceActivity[4U]) 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgCData(oldp+153,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy) 
                                   | (((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlSelfRef.top_sim__DOT__instr_req)) 
                                      | (0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                   ? 5U : 0x0aU)),4);
        bufp->chgBit(oldp+154,((1U & ((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering) 
                                          | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                      & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
        bufp->chgBit(oldp+155,(((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                | (IData)(vlSelfRef.top_sim__DOT__instr_req))));
        bufp->chgBit(oldp+156,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) 
                                 | (0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                & (0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        bufp->chgBit(oldp+157,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready))));
        bufp->chgBit(oldp+158,(((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb))));
        bufp->chgBit(oldp+159,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) 
                                | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgBit(oldp+160,(vlSelfRef.top_sim__DOT__instr_req));
        bufp->chgBit(oldp+161,(vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out));
        bufp->chgBit(oldp+162,(vlSelfRef.top_sim__DOT__u_core__DOT__double_fault_seen_o));
        bufp->chgCData(oldp+163,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_we_ex),2);
        bufp->chgBit(oldp+164,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear));
        bufp->chgBit(oldp+165,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set));
        bufp->chgCData(oldp+166,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id),3);
        bufp->chgCData(oldp+167,(vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id),2);
        bufp->chgCData(oldp+168,(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause),7);
        bufp->chgBit(oldp+169,(vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy));
        bufp->chgBit(oldp+170,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req));
        bufp->chgBit(oldp+171,(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready));
        bufp->chgBit(oldp+172,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int));
        bufp->chgBit(oldp+173,(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb));
        bufp->chgBit(oldp+174,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if));
        bufp->chgBit(oldp+175,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id));
        bufp->chgBit(oldp+176,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+177,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id));
        bufp->chgBit(oldp+178,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+179,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init));
        bufp->chgIData(oldp+180,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval),32);
        bufp->chgBit(oldp+181,(vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering));
        bufp->chgBit(oldp+182,(vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+183,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb));
        bufp->chgBit(oldp+184,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump));
        bufp->chgBit(oldp+185,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch));
        bufp->chgBit(oldp+186,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_load));
        bufp->chgBit(oldp+187,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_store));
        bufp->chgIData(oldp+188,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+189,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        bufp->chgCData(oldp+190,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        bufp->chgBit(oldp+191,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
        bufp->chgIData(oldp+192,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
        bufp->chgBit(oldp+193,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
        bufp->chgCData(oldp+194,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),7);
        bufp->chgBit(oldp+195,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
        bufp->chgIData(oldp+196,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
        bufp->chgBit(oldp+197,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
        bufp->chgBit(oldp+198,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
        bufp->chgIData(oldp+199,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        bufp->chgBit(oldp+200,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
        bufp->chgIData(oldp+201,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
        bufp->chgBit(oldp+202,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
        bufp->chgBit(oldp+203,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
        bufp->chgCData(oldp+204,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
        bufp->chgBit(oldp+205,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
        bufp->chgQData(oldp+206,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+208,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        bufp->chgQData(oldp+209,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        bufp->chgCData(oldp+211,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
        bufp->chgBit(oldp+212,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        bufp->chgBit(oldp+213,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        bufp->chgBit(oldp+214,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        bufp->chgBit(oldp+215,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec));
        bufp->chgBit(oldp+216,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
        bufp->chgBit(oldp+217,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        bufp->chgCData(oldp+218,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        bufp->chgBit(oldp+219,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        bufp->chgBit(oldp+220,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        bufp->chgBit(oldp+221,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        bufp->chgBit(oldp+222,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        bufp->chgBit(oldp+223,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
        bufp->chgIData(oldp+224,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr),32);
        bufp->chgBit(oldp+225,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw));
        bufp->chgBit(oldp+226,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) 
                                & (1U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded)))));
        bufp->chgIData(oldp+227,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+228,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgCData(oldp+229,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded),2);
        bufp->chgIData(oldp+230,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc),32);
        bufp->chgCData(oldp+231,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec),5);
        bufp->chgBit(oldp+232,((IData)((0U != (0x60U 
                                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause))))));
        bufp->chgBit(oldp+233,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i));
        bufp->chgBit(oldp+234,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i));
        bufp->chgCData(oldp+235,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d),5);
        bufp->chgCData(oldp+236,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d),5);
        bufp->chgCData(oldp+237,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d),3);
        bufp->chgCData(oldp+238,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded),2);
        bufp->chgBit(oldp+239,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        bufp->chgBit(oldp+240,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        bufp->chgCData(oldp+241,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+242,(((IData)(vlSelfRef.top_sim__DOT__instr_req)
                                   ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                   : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        bufp->chgCData(oldp+243,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        bufp->chgCData(oldp+244,(((IData)(vlSelfRef.top_sim__DOT__instr_req)
                                   ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                   : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        bufp->chgBit(oldp+245,(((~ (IData)(vlSelfRef.top_sim__DOT__instr_req)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))));
        bufp->chgBit(oldp+246,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))));
        bufp->chgBit(oldp+247,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        bufp->chgCData(oldp+248,(((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                                   << 2U) | ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))))),3);
        bufp->chgCData(oldp+249,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+250,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+251,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__)))),3);
        bufp->chgBit(oldp+252,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        bufp->chgBit(oldp+253,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        bufp->chgBit(oldp+254,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3))));
        bufp->chgBit(oldp+255,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr)));
        bufp->chgBit(oldp+256,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        bufp->chgBit(oldp+257,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        bufp->chgCData(oldp+258,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+259,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        bufp->chgBit(oldp+260,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
        bufp->chgQData(oldp+261,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0]),34);
        bufp->chgQData(oldp+263,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1]),34);
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+266,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 2U))));
        bufp->chgCData(oldp+267,((7U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+268,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id));
        bufp->chgBit(oldp+269,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err));
        bufp->chgBit(oldp+270,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err));
        bufp->chgBit(oldp+271,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req));
        bufp->chgIData(oldp+272,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        bufp->chgBit(oldp+273,((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        bufp->chgIData(oldp+274,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                                   ? 0U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x00000010U))
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x00000010U))
                                                    : 
                                                   (0x0000ffffU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 8U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q
                                                    : 0U))))),32);
        bufp->chgBit(oldp+275,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid));
        bufp->chgBit(oldp+276,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err));
        bufp->chgBit(oldp+277,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 5U))));
        bufp->chgIData(oldp+279,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+280,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+281,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+282,((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        bufp->chgCData(oldp+283,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        bufp->chgCData(oldp+284,((3U & ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                         ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 2U) : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        bufp->chgBit(oldp+285,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgCData(oldp+286,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+287,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 2U))));
        bufp->chgBit(oldp+288,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+289,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0x0000000cU))));
        bufp->chgIData(oldp+290,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+291,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        bufp->chgIData(oldp+292,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        bufp->chgIData(oldp+293,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+294,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+295,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+298,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        bufp->chgCData(oldp+299,((7U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U))),3);
        bufp->chgIData(oldp+300,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+301,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+302,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgCData(oldp+303,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        bufp->chgQData(oldp+304,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        bufp->chgQData(oldp+306,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        bufp->chgQData(oldp+308,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        bufp->chgQData(oldp+310,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        bufp->chgQData(oldp+312,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        bufp->chgQData(oldp+314,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        bufp->chgQData(oldp+316,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        bufp->chgQData(oldp+318,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        bufp->chgQData(oldp+320,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        bufp->chgQData(oldp+322,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        bufp->chgQData(oldp+324,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        bufp->chgQData(oldp+326,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        bufp->chgQData(oldp+328,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        bufp->chgQData(oldp+330,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        bufp->chgQData(oldp+332,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        bufp->chgQData(oldp+334,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        bufp->chgQData(oldp+336,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        bufp->chgQData(oldp+338,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        bufp->chgQData(oldp+340,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        bufp->chgQData(oldp+342,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        bufp->chgQData(oldp+344,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        bufp->chgQData(oldp+346,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        bufp->chgQData(oldp+348,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        bufp->chgQData(oldp+350,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        bufp->chgQData(oldp+352,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        bufp->chgQData(oldp+354,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        bufp->chgQData(oldp+356,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        bufp->chgQData(oldp+358,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        bufp->chgQData(oldp+360,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        bufp->chgQData(oldp+362,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        bufp->chgQData(oldp+364,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        bufp->chgQData(oldp+366,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        bufp->chgQData(oldp+368,((1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+370,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        bufp->chgCData(oldp+372,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
        bufp->chgBit(oldp+373,((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))));
        bufp->chgQData(oldp+374,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        bufp->chgQData(oldp+376,((1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+378,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[0]),34);
        bufp->chgQData(oldp+380,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[1]),34);
        bufp->chgQData(oldp+382,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        bufp->chgQData(oldp+384,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        bufp->chgIData(oldp+386,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        bufp->chgIData(oldp+387,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        bufp->chgIData(oldp+388,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0]),32);
        bufp->chgIData(oldp+389,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1]),32);
        bufp->chgIData(oldp+390,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+391,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        bufp->chgQData(oldp+392,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0]),34);
        bufp->chgQData(oldp+394,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1]),34);
        bufp->chgIData(oldp+396,(((IData)(1U) << (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+397,((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])),32);
        bufp->chgIData(oldp+398,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+399,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+400,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        bufp->chgCData(oldp+401,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        bufp->chgBit(oldp+402,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        bufp->chgBit(oldp+403,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        bufp->chgBit(oldp+404,((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+405,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        bufp->chgCData(oldp+406,((3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                >> 0x00000020U)))),2);
        bufp->chgSData(oldp+407,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+408,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+409,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        bufp->chgIData(oldp+410,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q),32);
        bufp->chgQData(oldp+411,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[0]),34);
        bufp->chgQData(oldp+413,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[1]),34);
        bufp->chgBit(oldp+415,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set));
        bufp->chgBit(oldp+416,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        bufp->chgBit(oldp+417,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        bufp->chgQData(oldp+418,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        bufp->chgQData(oldp+420,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        bufp->chgBit(oldp+422,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
        bufp->chgCData(oldp+423,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        bufp->chgBit(oldp+424,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        bufp->chgBit(oldp+425,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        bufp->chgBit(oldp+426,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        bufp->chgBit(oldp+427,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+428,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        bufp->chgBit(oldp+429,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        bufp->chgBit(oldp+430,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        bufp->chgBit(oldp+431,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        bufp->chgBit(oldp+432,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        bufp->chgBit(oldp+433,((IData)((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 5U) | (0U 
                                                   == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
        bufp->chgCData(oldp+434,((0x000000ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        bufp->chgCData(oldp+435,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q),3);
        bufp->chgBit(oldp+436,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        bufp->chgBit(oldp+437,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        bufp->chgCData(oldp+438,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+439,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        bufp->chgCData(oldp+440,(((2U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                         >> 1U)))),2);
        bufp->chgBit(oldp+441,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
        bufp->chgBit(oldp+442,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgBit(oldp+443,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
        bufp->chgIData(oldp+444,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        bufp->chgCData(oldp+445,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+446,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgBit(oldp+447,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        bufp->chgBit(oldp+448,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgIData(oldp+449,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? (0x000000ffU 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                             >> 0x00000010U))
                                       : (0x0000ffffU 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                             >> 8U)))
                                   : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q
                                       : 0U))),32);
        bufp->chgIData(oldp+450,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? (0x000000ffU 
                                          & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                             >> 0x00000010U))
                                       : 0U) : 0U)),32);
        bufp->chgBit(oldp+451,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        bufp->chgBit(oldp+452,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        bufp->chgBit(oldp+453,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        bufp->chgBit(oldp+454,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        bufp->chgBit(oldp+455,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        bufp->chgCData(oldp+456,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        __Vtemp_3[0U] = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        __Vtemp_3[1U] = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        __Vtemp_3[2U] = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
        __Vtemp_3[3U] = (IData)((((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                     << 1U)))));
        __Vtemp_3[4U] = (IData)(((((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                     << 1U)))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+457,(__Vtemp_3),160);
        bufp->chgBit(oldp+462,(((3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000001cU)) 
                                > (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        bufp->chgBit(oldp+463,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[7U])))) {
        bufp->chgIData(oldp+464,(((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                   ? ((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                       ? (0xa52cbc7cU 
                                          ^ vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q)
                                       : 0U) : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                 ? 
                                                ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                                  ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                                  : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                                 : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result))),32);
        bufp->chgIData(oldp+465,(((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                   ? (0xa52cbc7cU ^ vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q)
                                   : 0U)),32);
        bufp->chgIData(oldp+466,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                   ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                   : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        bufp->chgBit(oldp+467,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
        bufp->chgQData(oldp+468,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                   ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                   : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                       ? (1ULL | ((QData)((IData)(
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
                                               ? (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))) 
                                                     << 4U))
                                               : (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex)) 
                                                     << 1U))))))),33);
        bufp->chgQData(oldp+470,((0x00000001ffffffffULL 
                                  & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                      : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                          ? (~ ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                                << 1U))
                                          : ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                             << 1U))))),33);
        bufp->chgCData(oldp+472,((0x0000001fU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)
                                                  ? vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex
                                                  : 
                                                 (- vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)))),6);
        bufp->chgQData(oldp+473,((0x00000007ffffffffULL 
                                  & (VL_MULS_QQQ(35, 
                                                 (0x00000007ffffffffULL 
                                                  & VL_EXTENDS_QI(35,17, 
                                                                  (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                    << 0x00000010U) 
                                                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                 (0x00000007ffffffffULL 
                                                  & VL_EXTENDS_QI(35,17, 
                                                                  (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                    << 0x00000010U) 
                                                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                     + VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        bufp->chgQData(oldp+475,((0x00000003ffffffffULL 
                                  & ((0x00000007ffffffffULL 
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
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        bufp->chgBit(oldp+477,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                                & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                   ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
        bufp->chgBit(oldp+478,((1U & (IData)((1ULL 
                                              & ((VL_MULS_QQQ(35, 
                                                              (0x00000007ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                              (0x00000007ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(35,34, vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                 >> 0x00000022U))))));
        bufp->chgBit(oldp+479,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))));
        bufp->chgBit(oldp+480,(((3U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
        bufp->chgBit(oldp+481,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                   & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                      | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id))))));
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                 ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)
                                 : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid))));
        bufp->chgBit(oldp+483,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req))));
        bufp->chgCData(oldp+484,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                   ? 1U : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                            ? 4U : 0U))),3);
        bufp->chgBit(oldp+485,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                      | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err))))));
        bufp->chgIData(oldp+486,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req)
                                   ? ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 3U)) 
                                      << 2U) : (IData)(
                                                       (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))),32);
        bufp->chgIData(oldp+487,(vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        bufp->chgIData(oldp+488,(vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+489,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+490,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+491,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
        bufp->chgIData(oldp+492,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id),32);
        bufp->chgIData(oldp+493,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id),32);
        bufp->chgSData(oldp+494,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_c_id),16);
        bufp->chgBit(oldp+495,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id));
        bufp->chgCData(oldp+496,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_gets_expanded_id),2);
        bufp->chgSData(oldp+497,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_expanded_id),16);
        bufp->chgBit(oldp+498,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err));
        bufp->chgBit(oldp+499,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err_plus2));
        bufp->chgBit(oldp+500,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_c_insn_id));
        bufp->chgIData(oldp+501,((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U)),32);
        bufp->chgIData(oldp+502,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id),32);
        bufp->chgSData(oldp+503,((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x00000014U)),12);
        bufp->chgBit(oldp+504,((1U & VL_REDXOR_16(vlSelfRef.top_sim__DOT__u_core__DOT__instr_expanded_id))));
        bufp->chgBit(oldp+505,((1U & VL_REDXOR_2(vlSelfRef.top_sim__DOT__u_core__DOT__instr_gets_expanded_id))));
        bufp->chgBit(oldp+506,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr));
        bufp->chgBit(oldp+507,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
        bufp->chgCData(oldp+508,((7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x00000019U))),3);
        bufp->chgIData(oldp+509,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x00000014U))),32);
        bufp->chgIData(oldp+510,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U))))),32);
        bufp->chgIData(oldp+511,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+512,((0xfffff000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+513,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U))))),32);
        bufp->chgIData(oldp+514,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000fU))),32);
        bufp->chgBit(oldp+515,(((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)) 
                                | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))));
        bufp->chgSData(oldp+516,(((0x000003e0U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                                  >> 0x0000000aU)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_alu_id 
                                      >> 7U)))),10);
        bufp->chgCData(oldp+517,((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000001bU)),5);
        bufp->chgCData(oldp+518,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q),5);
        bufp->chgCData(oldp+519,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q),5);
        bufp->chgIData(oldp+520,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+521,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        bufp->chgWData(oldp+522,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        bufp->chgCData(oldp+525,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)))),3);
        bufp->chgIData(oldp+526,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity[7U])))) {
        bufp->chgBit(oldp+527,((1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                      & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                         & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                            & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                                               & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err)))))))));
        bufp->chgBit(oldp+528,(((3U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x0000001eU)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))));
        bufp->chgIData(oldp+529,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                   ? 0U : (0x0000001fU 
                                           & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000fU)))),32);
        bufp->chgIData(oldp+530,(((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                   ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                       ? 4U : ((1U 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)
                                                    ? 2U
                                                    : 4U)
                                                : (
                                                   ((- (IData)(
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
                                           ? (0xfffff000U 
                                              & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)
                                           : (((- (IData)(
                                                          (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000dU) 
                                              | ((((2U 
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
                                           ? (((- (IData)(
                                                          (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000fe0U 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 7U))))
                                           : (((- (IData)(
                                                          (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)))))),32);
        bufp->chgIData(oldp+531,((0x7fffffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 + 
                                                 ((2U 
                                                   & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+532,((3U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                        >> 1U))),2);
        bufp->chgCData(oldp+533,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+534,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+535,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        bufp->chgCData(oldp+536,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
        bufp->chgIData(oldp+537,(((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 3U)) 
                                  << 2U)),32);
        bufp->chgIData(oldp+538,(((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                           << 0x00000018U) 
                                          | (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                             >> 8U))
                                       : ((vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                           << 0x00000010U) 
                                          | (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                             >> 0x00000010U)))
                                   : ((1U & (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                           << 8U) | 
                                          (vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i 
                                           >> 0x00000018U))
                                       : vlSelfRef.top_sim__DOT__u_core__DOT__rf_rdata_b_ecc_i))),32);
        bufp->chgQData(oldp+539,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0]),34);
        bufp->chgQData(oldp+541,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1]),34);
        bufp->chgBit(oldp+543,(vlSelfRef.top_sim__DOT__u_core__DOT__icache_inval));
        bufp->chgBit(oldp+544,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3))));
        bufp->chgBit(oldp+545,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we))));
        bufp->chgIData(oldp+546,((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U))),32);
        bufp->chgBit(oldp+547,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        bufp->chgBit(oldp+548,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        bufp->chgBit(oldp+549,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        bufp->chgIData(oldp+550,(vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id),32);
        bufp->chgCData(oldp+551,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgIData(oldp+552,(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex),32);
        bufp->chgIData(oldp+553,(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex),32);
        bufp->chgBit(oldp+554,(vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex));
        bufp->chgBit(oldp+555,(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex));
        bufp->chgCData(oldp+556,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        bufp->chgCData(oldp+557,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        bufp->chgBit(oldp+558,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_access));
        bufp->chgCData(oldp+559,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op),2);
        bufp->chgIData(oldp+560,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+561,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id));
        bufp->chgCData(oldp+562,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        bufp->chgBit(oldp+563,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        bufp->chgBit(oldp+564,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid));
        bufp->chgBit(oldp+565,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_insn_id));
        bufp->chgIData(oldp+566,(((0x00020000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 0x0000000eU)) 
                                  | ((0x00010000U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       << 9U)) | ((0x00008000U 
                                                   & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      << 4U)) 
                                                  | (0x00007fffU 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                        >> 0x00000010U)))))),18);
        bufp->chgCData(oldp+567,((0x000000ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),8);
        bufp->chgCData(oldp+568,((0x000000c0U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),8);
        bufp->chgIData(oldp+569,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+570,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr));
        bufp->chgBit(oldp+571,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 1U))));
        bufp->chgBit(oldp+572,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 2U))));
        bufp->chgCData(oldp+573,((7U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                        >> 3U))),3);
        bufp->chgBit(oldp+574,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        bufp->chgQData(oldp+575,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[0]),34);
        bufp->chgQData(oldp+577,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[1]),34);
        bufp->chgBit(oldp+579,((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgIData(oldp+580,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
        bufp->chgQData(oldp+581,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        bufp->chgBit(oldp+583,((0U == (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))));
        bufp->chgBit(oldp+584,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        bufp->chgQData(oldp+585,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        bufp->chgQData(oldp+587,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        bufp->chgIData(oldp+589,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgQData(oldp+590,((0x00000001ffffffffULL 
                                  & (~ ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                        << 1U)))),33);
        bufp->chgBit(oldp+592,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+593,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+594,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+595,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgBit(oldp+596,((1U & (((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                        ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex) 
                                       >> 0x0000001fU)
                                       ? ((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 0x0000001fU) 
                                          ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                       : (~ (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 0x00000020U)))))));
        bufp->chgBit(oldp+597,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        bufp->chgBit(oldp+598,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+599,((8U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgCData(oldp+600,((0x0000003fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)))),6);
        bufp->chgIData(oldp+601,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        bufp->chgQData(oldp+602,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        bufp->chgBit(oldp+604,((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                              >> 0x00000020U)))));
        bufp->chgIData(oldp+605,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+606,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+607,(((0x00000010U & ((~ 
                                                   (0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                                        >> 0x00000018U)))) 
                                                  << 4U)) 
                                  | (0x0000000fU & 
                                     (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                      >> 0x00000018U)))),5);
        bufp->chgCData(oldp+608,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                                 >> 0x00000010U))),5);
        bufp->chgBit(oldp+609,(((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (6U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgBit(oldp+610,(((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgIData(oldp+611,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                  | vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+612,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                  & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+613,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                  ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+614,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        bufp->chgBit(oldp+615,((1U & (((IData)(0x20U) 
                                       - (0x0000001fU 
                                          & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                      >> 5U))));
        bufp->chgQData(oldp+616,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0]),34);
        bufp->chgQData(oldp+618,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1]),34);
        bufp->chgQData(oldp+620,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        bufp->chgBit(oldp+622,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        bufp->chgBit(oldp+623,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        bufp->chgBit(oldp+624,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        bufp->chgBit(oldp+625,((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        bufp->chgQData(oldp+626,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        bufp->chgQData(oldp+628,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        bufp->chgBit(oldp+630,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        bufp->chgBit(oldp+631,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        bufp->chgBit(oldp+632,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        bufp->chgIData(oldp+633,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+634,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+635,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        bufp->chgIData(oldp+636,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        bufp->chgQData(oldp+637,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        bufp->chgCData(oldp+639,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        bufp->chgBit(oldp+640,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        bufp->chgBit(oldp+641,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        bufp->chgCData(oldp+642,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        bufp->chgCData(oldp+643,(((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x00000021U)) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        bufp->chgCData(oldp+644,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        bufp->chgQData(oldp+645,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0]),34);
        bufp->chgQData(oldp+647,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1]),34);
        bufp->chgBit(oldp+649,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        bufp->chgBit(oldp+650,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+651,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+652,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+653,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+654,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+655,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        bufp->chgBit(oldp+656,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        bufp->chgBit(oldp+657,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+658,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        bufp->chgBit(oldp+659,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        bufp->chgBit(oldp+660,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_dec));
        bufp->chgBit(oldp+661,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        bufp->chgBit(oldp+662,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        bufp->chgCData(oldp+663,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+664,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        bufp->chgBit(oldp+665,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        bufp->chgBit(oldp+666,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+667,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        bufp->chgCData(oldp+668,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        bufp->chgBit(oldp+669,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
        bufp->chgBit(oldp+670,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
        bufp->chgBit(oldp+671,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        bufp->chgBit(oldp+672,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        bufp->chgBit(oldp+673,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        bufp->chgBit(oldp+674,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        bufp->chgBit(oldp+675,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        bufp->chgBit(oldp+676,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        bufp->chgBit(oldp+677,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        bufp->chgBit(oldp+678,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        bufp->chgBit(oldp+679,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        bufp->chgBit(oldp+680,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        bufp->chgBit(oldp+681,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        bufp->chgBit(oldp+682,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        bufp->chgBit(oldp+683,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        bufp->chgBit(oldp+684,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+685,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        bufp->chgBit(oldp+686,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgBit(oldp+687,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        bufp->chgCData(oldp+688,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgCData(oldp+689,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        bufp->chgCData(oldp+690,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        bufp->chgIData(oldp+691,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        bufp->chgBit(oldp+692,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
        bufp->chgBit(oldp+693,((3U != (3U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
        __Vtemp_4[0U] = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__;
        __Vtemp_4[1U] = (IData)((0x0000050b00000000ULL 
                                 | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__))));
        __Vtemp_4[2U] = (IData)(((0x0000050b00000000ULL 
                                  | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+694,(__Vtemp_4),96);
        bufp->chgCData(oldp+697,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__))),3);
        bufp->chgIData(oldp+698,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        bufp->chgBit(oldp+699,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        bufp->chgBit(oldp+700,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+701,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+702,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgCData(oldp+703,((3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+704,((((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                                 & (0U != (3U & (IData)(
                                                        (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U))))) 
                                | (IData)(((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                                           & (6ULL 
                                              == (6ULL 
                                                  & vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))))));
    }
    bufp->chgBit(oldp+705,(vlSelfRef.clk));
    bufp->chgBit(oldp+706,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+707,((0xfffffffcU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
                                              ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
                                              : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                                  ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
                                                  : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)))),32);
    bufp->chgBit(oldp+708,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                            & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec)))));
    bufp->chgIData(oldp+709,(((- (IData)(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                          & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec))))) 
                              & vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id)),32);
    bufp->chgBit(oldp+710,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
    bufp->chgBit(oldp+711,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
    bufp->chgBit(oldp+712,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id))));
    bufp->chgBit(oldp+713,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                            & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))));
    bufp->chgBit(oldp+714,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->chgBit(oldp+715,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->chgIData(oldp+716,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init)
                               ? 1U : (1U | (0xffffff00U 
                                             & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->chgCData(oldp+717,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                               ? (5U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
    bufp->chgIData(oldp+718,((1U | ((((((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
                                          & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
                                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)) 
                                           << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch))) 
                                      << 9U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch) 
                                                 << 8U) 
                                                | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump) 
                                                    << 7U) 
                                                   | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_store) 
                                                      << 6U)))) 
                                    | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_load) 
                                         << 5U) | (
                                                   (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready)) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                       & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                                          & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                                      << 3U))) 
                                       | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                          << 2U))))),32);
    bufp->chgIData(oldp+719,((((((((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                    << 3U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
                                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                       & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)) 
                                      << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch))) 
                                 << 9U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch) 
                                            << 8U) 
                                           | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump) 
                                               << 7U) 
                                              | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_store) 
                                                 << 6U)))) 
                               | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_load) 
                                    << 5U) | ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready)) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                                  & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                                     & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                                 << 3U))) 
                                  | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                     << 2U))) >> 3U)),29);
    bufp->chgBit(oldp+720,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
                            & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                               | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->chgBit(oldp+721,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                            & ((~ ((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)) 
                                   | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))) 
                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->chgBit(oldp+722,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                            | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                                & ((~ ((0x0340U == 
                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)) 
                                       | (0x0341U == 
                                          (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U)))) 
                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))) 
                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+723,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                             & ((~ ((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                    | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))) 
                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->chgIData(oldp+724,(((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
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
                                       : 0x00000080U)))),32);
    bufp->chgBit(oldp+725,((1U & ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                   ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                       ? 0x00000080U
                                       : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                           ? 0x00000080U
                                           : vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                   : ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                       ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                           ? vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                           : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc)
                                       : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
                                           ? (IData)(
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U))
                                           : 0x00000080U))))));
    bufp->chgBit(oldp+726,((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                            & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                >> 1U) & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                          & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))))));
    bufp->chgIData(oldp+727,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
                               ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
                               : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                   ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
                                   : vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q))),32);
    bufp->chgIData(oldp+728,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
                                : (0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                              + ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3) 
                                 << 2U))),32);
    bufp->chgBit(oldp+729,((1U & (~ (3U == (3U & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                   >> 1U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                           >> 1U))))))))));
    bufp->chgIData(oldp+730,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                               ? ((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                     >> 0x00000010U))
                               : (0x050b0000U | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x00000010U)))),32);
    bufp->chgBit(oldp+731,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                             ? (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                             : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))));
    bufp->chgBit(oldp+732,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                             >> 1U) & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                       & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)))));
    bufp->chgBit(oldp+733,((1U & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                   >> 1U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->chgIData(oldp+734,((0x7fffffffU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                              ? (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                 >> 1U)
                                              : (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 + 
                                                 ((2U 
                                                   & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgCData(oldp+735,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                              & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec)))),2);
}

void Vtop_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_cleanup\n"); );
    // Body
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
}
