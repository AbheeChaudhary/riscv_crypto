// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_sim__Syms.h"


VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__ibex_pkg__0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__prim_cipher_pkg__0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_sub__TOP__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+784,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"alert_major_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+787,0,"sensor_data_live_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ibex_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_sim___024root__trace_init_sub__TOP__ibex_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_cipher_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_sim___024root__trace_init_sub__TOP__prim_cipher_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top_sim", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+784,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"alert_major_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+787,0,"sensor_data_live_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"instr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"instr_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"fetch_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"direct_sensor_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"rf_raddr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+593,0,"rf_rdata_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"rf_raddr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,0,"rf_rdata_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rf_wdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+821,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+822,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMPRstCfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+823,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstAddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+824+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+856,0,"PMPRstMsecCfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+821,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+857,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+860,0,"RV32ZC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICacheTweakInfection",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"BusSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+862,0,"TagSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+863,0,"LineSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+864,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+865,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+866,0,"RndCnstLfsrPerm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBit(c+820,0,"SecureIbex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"RegFileECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"RegFileDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+871,0,"DmBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+872,0,"DmAddrMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+873,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+874,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+875,0,"CsrMvendorId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"CsrMimpId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+597,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+542,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+543,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+165,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"rf_wdata_wb_ecc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"rf_rdata_a_ecc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"rf_rdata_b_ecc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"ic_tag_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+876,0,"ic_tag_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"ic_tag_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"ic_tag_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ic_tag_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+880+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+877,0,"ic_data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+876,0,"ic_data_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"ic_data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+882,0,"ic_data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ic_data_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+884+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+888,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"ic_scr_key_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+876,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_pending_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+518,0,"crash_dump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBit(c+167,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+876,0,"alert_minor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"alert_major_internal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"alert_major_bus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+585,0,"direct_sensor_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"core_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+891,0,"PMPNumChan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"PCIncrCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ShadowCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_valid_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_new_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr_rdata_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"instr_rdata_alu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"instr_rdata_c_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+546,0,"instr_is_compressed_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"instr_gets_expanded_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+548,0,"instr_expanded_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+578,0,"instr_perf_count_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_bp_taken_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"instr_fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"instr_fetch_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"illegal_c_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"pc_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"pc_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("imd_val_d_ex", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+599+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_ex", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+262+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+168,0,"imd_val_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+266,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"dummy_instr_seed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"dummy_instr_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"icache_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"icache_ecc_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"pc_mismatch_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_shadow_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"crypto_tamper_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"crypto_shutdown",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_first_cycle_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"instr_valid_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pc_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"nt_branch_mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"nt_branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"exc_pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"exc_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+876,0,"instr_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"lsu_load_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"lsu_load_err_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"lsu_store_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"lsu_store_err_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"lsu_load_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"lsu_store_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"expecting_load_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"expecting_store_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"lsu_addr_incr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"lsu_addr_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"branch_target_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"branch_decision",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ctrl_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"if_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"rf_raddr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+593,0,"rf_rdata_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"rf_raddr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,0,"rf_rdata_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+610,0,"rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rf_wdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"rf_wdata_fwd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"rf_wdata_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_we_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_ecc_err_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rf_waddr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+612,0,"rf_wdata_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_rd_a_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_rd_b_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"alu_operator_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+614,0,"alu_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"alu_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bt_a_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bt_b_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"alu_adder_result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"mult_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"div_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"mult_sel_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_sel_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"multdiv_operator_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"multdiv_signed_mode_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"multdiv_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"multdiv_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+892,0,"multdiv_ready_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"csr_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+621,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"csr_op_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+554,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+622,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+623,0,"illegal_csr_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"lsu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+625,0,"lsu_sign_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"lsu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"lsu_rdata_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"lsu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"lsu_req_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"id_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"lsu_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"lsu_resp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"instr_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"instr_req_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"instr_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"en_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"instr_type_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+892,0,"ready_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_write_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_load_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_store_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"nmi_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"irqs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+279,0,"csr_mstatus_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"csr_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"csr_depc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("csr_pmp_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+0+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_cfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+8,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+9,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+10,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->declBus(c+856,0,"csr_pmp_mseccfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("pmp_req_err", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+166,0,"data_req_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"csr_save_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"csr_save_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_save_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"csr_restore_mret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"csr_restore_dret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"csr_save_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"csr_mtvec_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"csr_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,0,"csr_mstatus_tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"priv_mode_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+285,0,"priv_mode_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+286,0,"debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"debug_mode_entering",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"debug_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+187,0,"debug_csr_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"debug_single_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"debug_ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"debug_ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"trigger_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"instr_id_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_done_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"perf_instr_ret_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"perf_instr_ret_compressed_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"perf_instr_ret_wb_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"perf_instr_ret_compressed_wb_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"perf_iside_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"perf_dside_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"perf_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"perf_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"perf_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"perf_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"perf_tbranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"perf_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"perf_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"illegal_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"unused_illegal_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"crash_dump_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+261,0,"unused_instr_new_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"unused_instr_id_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_instr_done_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"unused_instr_expanded_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"unused_instr_gets_expanded_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cs_registers_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+864,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ShadowCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+821,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+857,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+821,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+822,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMPRstCfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+823,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstAddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+895+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+856,0,"PMPRstMsecCfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+820,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+875,0,"CsrMvendorId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"CsrMimpId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"priv_mode_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+285,0,"priv_mode_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+283,0,"csr_mstatus_tw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"csr_mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"csr_mtvec_init_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+620,0,"csr_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+554,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+614,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"csr_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"csr_op_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+278,0,"nmi_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_pending_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"irqs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+279,0,"csr_mstatus_mie_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"csr_mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("csr_pmp_cfg_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+15,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+18,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_addr_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+19+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+856,0,"csr_pmp_mseccfg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+286,0,"debug_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"debug_mode_entering_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"debug_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+187,0,"debug_csr_save_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"csr_depc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+288,0,"debug_single_step_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"debug_ebreakm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"debug_ebreaku_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"trigger_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"pc_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"data_ind_timing_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"dummy_instr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"dummy_instr_mask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"dummy_instr_seed_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"dummy_instr_seed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"icache_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_shadow_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"csr_save_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"csr_save_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_save_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"csr_restore_mret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"csr_restore_dret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"csr_save_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"csr_mcause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+185,0,"csr_mtval_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+623,0,"illegal_csr_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"instr_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"instr_ret_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_ret_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_ret_compressed_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"iside_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"mem_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"mem_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"dside_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"mul_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"div_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"RV32BExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+864,0,"RV32MEnabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+861,0,"PMPAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+927,0,"MISA_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"exception_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"priv_lvl_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+194,0,"priv_lvl_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"mstatus_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+195,0,"mstatus_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+876,0,"mstatus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"mstatus_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+629,0,"mie_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+120,0,"mie_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"mscratch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"mepc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"mepc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+199,0,"mcause_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+200,0,"mcause_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"mtval_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"mtval_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"mtvec_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"mtvec_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"mtvec_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+296,0,"dcsr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"dcsr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"dcsr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"depc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"depc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"depc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"dscratch0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"dscratch1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"dscratch0_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"dscratch1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"mstack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+300,0,"mstack_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+208,0,"mstack_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"mstack_epc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"mstack_epc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"mstack_cause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+295,0,"mstack_cause_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("pmp_addr_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pmp_cfg_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+876,0,"pmp_csr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+928,0,"pmp_mseccfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+303,0,"mcountinhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"mcountinhibit_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+304,0,"mcountinhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"mcountinhibit_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mhpmcounter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+305+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+125,0,"mhpmcounter_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"mhpmcounterh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+798,0,"mhpmcounter_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mhpmevent", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+542,0,"mhpmcounter_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+127,0,"unused_mhpmcounter_we_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"unused_mhpmcounterh_we_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_mhpmcounter_incr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+369,0,"minstret_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"minstret_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+875,0,"tselect_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"tmatch_control_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"tmatch_value_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"cpuctrlsts_part_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"cpuctrlsts_part_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+630,0,"cpuctrlsts_part_wdata_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"cpuctrlsts_part_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+210,0,"cpuctrlsts_part_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"cpuctrlsts_part_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"cpuctrlsts_ic_scr_key_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"cpuctrlsts_ic_scr_key_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"csr_wdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"csr_rdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"csr_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"csr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"dbg_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"illegal_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"illegal_csr_priv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"illegal_csr_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"illegal_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"unused_boot_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+559,0,"unused_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+554,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+929,0,"MSTATUS_RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+930,0,"DCSR_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"MSTACK_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("g_mcountinhibit_reduced", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"unused_mhphcounter_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+131,0,"unused_mhphcounterh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+799,0,"unused_mhphcounter_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+932,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+933,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+934,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+935,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+936,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+937,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+938,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+939,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+940,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+941,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+942,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+943,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+944,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+945,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+946,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+947,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+948,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+949,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+950,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+951,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+952,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+953,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+954,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+955,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+956,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+957,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+958,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("gen_unimp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_no_compressed_instr_cnt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+876,0,"unused_instr_ret_compressed_spec_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+959,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+960,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+634,0,"unused_dit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dummy", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+635,0,"unused_dummy_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"unused_dummy_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_icache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+637,0,"unused_icen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"unused_ic_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mcycle_counter_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+961,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ProvideValUpd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"counter_inc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"counterh_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"counter_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"counter_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+375,0,"counter_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+882,0,"counter_val_upd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+375,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"counter_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"counter_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+136,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+137,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+962,0,"UseDsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+375,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("minstret_counter_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+961,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+963,0,"ProvideValUpd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"counter_inc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"counterh_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"counter_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"counter_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+371,0,"counter_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"counter_val_upd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"counter_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+211,0,"counter_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+213,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+214,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+962,0,"UseDsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+371,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_cpuctrlsts_part_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+964,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+965,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 7,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+210,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dcsr_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+966,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_depc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dscratch0_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dscratch1_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mcause_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+968,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+969,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 6,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+200,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mepc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mie_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+970,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+971,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 17,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+629,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+120,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mscratch_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_cause_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+968,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+969,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 6,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+208,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+972,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 2,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+208,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_epc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+208,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstatus_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+973,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+974,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 5,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+196,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mtval_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+967,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mtvec_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+975,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+796,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ex_block_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"alu_operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+614,0,"alu_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"alu_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+269,0,"alu_instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"bt_a_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bt_b_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"multdiv_operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+789,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"multdiv_signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"multdiv_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"multdiv_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+892,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+638+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+379+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+608,0,"alu_adder_result_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"result_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"branch_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"branch_decision_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"tamper_alert_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"shutdown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+585,0,"direct_sensor_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+642,0,"crypto_en_ldsens",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"crypto_en_vrfsens",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"crypto_secure_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"crypto_decrypted_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+604,0,"crypto_tamper_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"crypto_shutdown",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"multdiv_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+646,0,"multdiv_alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+383,0,"multdiv_alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+648,0,"alu_adder_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+609,0,"alu_cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"alu_is_equal_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"multdiv_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"multdiv_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+385+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_imd_val_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+877,0,"alu_imd_val_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("multdiv_imd_val_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+652+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+216,0,"multdiv_imd_val_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alu_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+613,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+614,0,"operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+269,0,"instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+383,0,"multdiv_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+646,0,"multdiv_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+651,0,"multdiv_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+387+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+877,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+608,0,"adder_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+648,0,"adder_result_ext_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+645,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"comparison_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"is_equal_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"operand_a_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+657,0,"operand_b_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+659,0,"adder_op_a_shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"adder_op_a_shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"adder_op_a_shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"adder_op_b_negate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+527,0,"adder_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+663,0,"adder_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+608,0,"adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+650,0,"is_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"is_greater_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"cmp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"shift_ones",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"shift_arith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"shift_funnel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"shift_sbmode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"shift_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+669,0,"shift_amt_compl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+670,0,"shift_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+671,0,"shift_result_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+671,0,"shift_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+673,0,"unused_shift_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"shift_result_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"bfp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+676,0,"bfp_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"bfp_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+875,0,"bfp_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bfp_mask_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bfp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+678,0,"bwlogic_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"bwlogic_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+615,0,"bwlogic_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"bwlogic_or_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"bwlogic_and_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,0,"bwlogic_xor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"bwlogic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"bwlogic_op_b_negate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"bitcnt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+875,0,"minmax_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"pack_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"sext_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"singlebit_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"rev_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"shuffle_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"xperm_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"butterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"invbutterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"clmul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"multicycle_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+684,0,"unused_shift_amt_compl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_no_alu_rvb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unused_imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+389+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+875,0,"unused_butterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"unused_invbutterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_no_branch_target_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+875,0,"unused_bt_a_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"unused_bt_b_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_multdiv_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multdiv_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+648,0,"alu_adder_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+608,0,"alu_adder_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+650,0,"equal_to_zero_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+383,0,"alu_operand_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+646,0,"alu_operand_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+391+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+685+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+216,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+892,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+525,0,"multdiv_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+526,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+689,0,"mac_res_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+689,0,"mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+691,0,"accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+693,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"mult_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"signed_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+697,0,"mac_res_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+699,0,"op_remainder_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+701,0,"mac_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+703,0,"div_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"div_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"is_greater_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"div_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"rem_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"one_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"op_denominator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"op_numerator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+398,0,"op_quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"op_denominator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"op_numerator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+708,0,"op_quotient_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"next_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+710,0,"next_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+608,0,"res_adder_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+399,0,"div_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"div_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+712,0,"div_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+217,0,"multdiv_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"mult_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"div_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"div_by_zero_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"div_by_zero_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"mult_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"div_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"md_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+715,0,"md_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+616,0,"unused_mult_sel_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"unused_imd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+716,0,"unused_mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+717,0,"unused_alu_adder_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+403,0,"unused_sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_mult_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+718,0,"mult_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+719,0,"mult_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"mult_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+720,0,"mult_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_crypto_engine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"en_ldsens_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+585,0,"direct_sensor_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+643,0,"en_vrfsens_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"cipher_token_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"secure_payload_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"decrypted_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+604,0,"tamper_alert_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"shutdown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+977,0,"SILICON_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"KEY_UPPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+979,0,"KEY_LOWER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"hw_timer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"ldsens_mac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+721,0,"rec_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+722,0,"rec_mac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+723,0,"exp_mac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+724,0,"auth_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"is_tampered",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"shutdown_latched_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_instr_req_gated_non_secure", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+892,0,"unused_fetch_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_no_check_mem_response", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+606,0,"unused_expecting_load_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"unused_expecting_store_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_no_pmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"unused_priv_lvl_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unused_csr_pmp_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+95+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unused_csr_pmp_cfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+103,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+104,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->declBus(c+856,0,"unused_csr_pmp_mseccfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_regfile_ecc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+610,0,"unused_rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"unused_rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_rf_rd_a_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_rf_rd_b_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("id_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"instr_rdata_alu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"instr_rdata_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+546,0,"instr_is_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_bp_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_first_cycle_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"instr_valid_clear_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"id_in_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"icache_inval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"branch_decision_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"nt_branch_mispredict_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"nt_branch_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"exc_pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"exc_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+551,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"instr_fetch_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"instr_fetch_err_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+626,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"lsu_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"alu_operator_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+614,0,"alu_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"alu_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"imd_val_we_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("imd_val_d_ex_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+726+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_ex_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+408+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+875,0,"bt_a_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"bt_b_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"mult_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"div_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"mult_sel_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_sel_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"multdiv_operator_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"multdiv_signed_mode_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"multdiv_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"multdiv_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+892,0,"multdiv_ready_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"csr_access_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+621,0,"csr_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+554,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+119,0,"csr_op_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_save_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"priv_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+283,0,"csr_mstatus_tw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"illegal_csr_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"lsu_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"lsu_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"lsu_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+625,0,"lsu_sign_ext_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"lsu_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"lsu_req_done_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"lsu_addr_incr_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"lsu_addr_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+279,0,"csr_mstatus_mie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_pending_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"irqs_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+876,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"nmi_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"lsu_load_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"lsu_load_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"lsu_store_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"lsu_store_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"expecting_load_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"expecting_store_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"debug_mode_entering_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"debug_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+187,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"result_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"csr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+593,0,"rf_rdata_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,0,"rf_rdata_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+610,0,"rf_ren_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"rf_ren_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rf_waddr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+612,0,"rf_wdata_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_rd_a_wb_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_rd_b_wb_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rf_waddr_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+875,0,"rf_wdata_fwd_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rf_write_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"en_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"instr_type_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+578,0,"instr_perf_count_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ready_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_load_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_store_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"perf_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"perf_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"perf_tbranch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"perf_dside_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"perf_mul_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"perf_div_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"instr_id_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"illegal_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"illegal_dret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"illegal_umode_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"ebrk_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"dret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"ecall_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"wfi_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"wb_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"id_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"branch_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"branch_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"branch_set_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"branch_set_raw_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"branch_jump_set_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"branch_jump_set_done_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"branch_not_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"jump_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"jump_set_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"jump_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"jump_set_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_first_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"instr_executing_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"instr_executing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"instr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"controller_run",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"stall_ld_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"stall_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"stall_multdiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"stall_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"stall_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"stall_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"stall_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"flush_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"multicycle_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"mem_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"imm_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"imm_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"imm_b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"imm_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"imm_j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"zimm_rs1_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"imm_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+740,0,"rf_wdata_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"rf_we_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"rf_we_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+742,0,"rf_ren_a_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"rf_ren_b_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+593,0,"rf_rdata_a_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"rf_rdata_b_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"alu_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+744,0,"alu_op_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+745,0,"alu_op_a_mux_sel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+535,0,"alu_op_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"alu_op_b_mux_sel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"alu_multicycle_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"stall_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+415+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+980,0,"bt_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+928,0,"bt_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+747,0,"imm_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"imm_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+749,0,"imm_b_mux_sel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+789,0,"mult_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"mult_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"div_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"div_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"multdiv_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"multdiv_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"multdiv_signed_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+595,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"lsu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+625,0,"lsu_sign_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"lsu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"lsu_req_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"data_req_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"no_flush_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"csr_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+419,0,"id_fsm_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"id_fsm_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("controller_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"illegal_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"ecall_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"dret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"wfi_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"ebrk_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"csr_pipe_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"instr_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+546,0,"instr_is_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_bp_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"instr_fetch_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"instr_fetch_err_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"instr_valid_clear_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"id_in_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"controller_run_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"nt_branch_mispredict_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"exc_pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"exc_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+273,0,"lsu_addr_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"load_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"store_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"mem_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"wb_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"id_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"branch_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"branch_not_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"jump_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"csr_mstatus_mie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_pending_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"irqs_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+876,0,"irq_nm_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"nmi_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"debug_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+187,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"debug_mode_entering_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"csr_save_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"priv_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+149,0,"stall_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"stall_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"flush_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ready_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"perf_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"perf_tbranch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"ctrl_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+223,0,"ctrl_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"nmi_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"nmi_mode_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"debug_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"debug_mode_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"debug_cause_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+287,0,"debug_cause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+421,0,"load_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"load_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"store_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"store_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"exc_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"exc_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"illegal_insn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"illegal_insn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"instr_fetch_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"illegal_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"ecall_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"ebrk_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"store_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"load_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"halt_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"retain_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"flush_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"exc_req_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"special_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"special_req_pc_change",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"special_req_flush_only",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"do_single_step_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"do_single_step_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"enter_debug_mode_prio_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"enter_debug_mode_prio_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"enter_debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"ebreak_into_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"irq_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"handle_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"id_wb_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_nm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"irq_nm_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"irq_nm_int_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"irq_nm_int_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+982,0,"mfip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+876,0,"unused_irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"ecall_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"mret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"dret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"wfi_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"ebrk_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"csr_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"instr_fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_no_intg_irq_int", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+876,0,"unused_mem_resp_intg_err_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+858,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+859,0,"RV32B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"ebrk_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"dret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"ecall_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"wfi_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"jump_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"icache_inval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"instr_rdata_alu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+551,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"imm_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"imm_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+980,0,"bt_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+928,0,"bt_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+560,0,"imm_i_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"imm_s_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"imm_b_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"imm_u_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"imm_j_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"zimm_rs1_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+740,0,"rf_wdata_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"rf_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+542,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+543,0,"rf_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+742,0,"rf_ren_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"rf_ren_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"alu_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+745,0,"alu_op_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+746,0,"alu_op_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"alu_multicycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"mult_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"div_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"mult_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"multdiv_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"multdiv_signed_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+620,0,"csr_access_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+621,0,"csr_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+554,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+753,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"data_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+625,0,"data_sign_extension_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"jump_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"branch_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"illegal_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"illegal_reg_rv32e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"csr_illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"instr_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"unused_instr_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+541,0,"instr_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+542,0,"instr_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+568,0,"instr_rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+543,0,"instr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+876,0,"use_rs3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"use_rs3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+768,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+769,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+770,0,"opcode_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("gen_no_rs3_flop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+784,0,"unused_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"unused_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_branch_set_flop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+413,0,"branch_set_raw_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_nobtalu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+980,0,"unused_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+928,0,"unused_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_stall_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+156,0,"unused_data_req_done_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"unused_rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+876,0,"unused_rf_write_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_outstanding_load_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_outstanding_store_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_wb_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"unused_rf_wdata_fwd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+736,0,"unused_id_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("if_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+873,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+874,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+860,0,"RV32ZC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ICacheTweakInfection",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"BusSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+862,0,"TagSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+863,0,"LineSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"PCIncrCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+865,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+866,0,"RndCnstLfsrPerm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBit(c+820,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+791,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"instr_bus_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"ic_tag_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+876,0,"ic_tag_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"ic_tag_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"ic_tag_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ic_tag_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+877,0,"ic_data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+876,0,"ic_data_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"ic_data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+882,0,"ic_data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ic_data_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+109+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+888,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"ic_scr_key_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_valid_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_new_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"instr_rdata_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"instr_rdata_alu_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"instr_rdata_c_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+546,0,"instr_is_compressed_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"instr_gets_expanded_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+548,0,"instr_expanded_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+876,0,"instr_bp_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"instr_fetch_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"instr_fetch_err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"illegal_c_insn_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"pc_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"pc_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"pmp_err_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"pmp_err_if_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"instr_valid_clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pc_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"nt_branch_mispredict_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"nt_branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"exc_pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"exc_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+267,0,"dummy_instr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"dummy_instr_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"dummy_instr_seed_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"dummy_instr_seed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"icache_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"icache_inval_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"icache_ecc_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"branch_target_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"csr_mepc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"csr_depc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"csr_mtvec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"csr_mtvec_init_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"id_in_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"pc_mismatch_alert_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"if_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"instr_valid_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_valid_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"instr_new_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_new_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"prefetch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"branch_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"fetch_addr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+806,0,"unused_fetch_addr_n0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"prefetch_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"prefetch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+771,0,"fetch_valid_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"fetch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"fetch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+772,0,"fetch_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+552,0,"fetch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+773,0,"fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"fetch_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"instr_decompressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"illegal_c_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"instr_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"instr_gets_expanded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+771,0,"if_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+772,0,"if_instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+552,0,"if_instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+773,0,"if_instr_bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"if_instr_pmp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"if_instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"if_instr_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"exc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"if_id_pipe_reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"stall_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+774,0,"instr_is_compressed_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"instr_gets_expanded_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+232,0,"illegal_c_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"instr_err_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"predict_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"predict_branch_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"irq_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+171,0,"pc_mux_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+878,0,"unused_boot_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"unused_csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+236,0,"unused_exc_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("compressed_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+860,0,"RV32ZC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"id_in_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+772,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+774,0,"is_compressed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"gets_expanded_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+232,0,"illegal_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"cm_rlist_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+569,0,"cm_rlist_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+239,0,"cm_sp_offset_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+570,0,"cm_sp_offset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+240,0,"cm_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+432,0,"cm_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+241,0,"gets_expanded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dummy_instr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"unused_dummy_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"unused_dummy_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+876,0,"unused_dummy_seed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"unused_dummy_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_prefetch_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+154,0,"unused_icen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"unused_icinv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"unused_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unused_tag_ram_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unused_data_ram_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+115+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefetch_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+772,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+552,0,"addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+773,0,"err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+983,0,"NUM_REQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+242,0,"valid_new_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"valid_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"valid_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"valid_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"discard_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"discard_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"rdata_outstanding_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"rdata_outstanding_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+435,0,"rdata_outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+245,0,"branch_discard_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"branch_discard_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"branch_discard_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+437,0,"rdata_outstanding_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+246,0,"stored_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"stored_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"stored_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"fetch_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"fetch_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"fetch_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"instr_addr_w_aligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+438,0,"fifo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"fifo_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+809,0,"fifo_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"fifo_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"fifo_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("fifo_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"NUM_REQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+438,0,"in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"in_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"in_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"out_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"out_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+773,0,"out_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"out_err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+891,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+810,0,"rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+573,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+776,0,"err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+576,0,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+249,0,"valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+589,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+590,0,"lowest_free_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+591,0,"valid_pushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+250,0,"valid_popped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+813,0,"entry_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+251,0,"pop_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"rdata_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+778,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"err_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"valid_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"aligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"unaligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"addr_incr_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"instr_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBus(c+818,0,"instr_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBus(c+577,0,"instr_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBit(c+252,0,"instr_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"unused_addr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("load_store_unit_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_bus_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_pmp_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+595,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+595,0,"lsu_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"lsu_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,0,"lsu_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+625,0,"lsu_sign_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"lsu_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"lsu_rdata_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"lsu_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"adder_result_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+272,0,"addr_incr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"addr_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"lsu_req_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"lsu_resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"load_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"load_resp_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"store_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"store_resp_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"perf_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"perf_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"data_addr_w_aligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"addr_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"addr_last_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+439,0,"addr_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"ctrl_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"rdata_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,8);
    tracep->declBus(c+443,0,"rdata_offset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"data_type_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+445,0,"data_sign_ext_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"data_we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"data_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+596,0,"data_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,0,"data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"data_rdata_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"rdata_w_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"rdata_h_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"rdata_b_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+783,0,"split_misaligned_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"handle_misaligned_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"handle_misaligned_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"pmp_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"pmp_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"lsu_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"lsu_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"data_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"data_or_pmp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"ls_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+256,0,"ls_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+820,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"en_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"instr_type_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+553,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+546,0,"instr_is_compressed_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"instr_perf_count_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ready_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rf_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_load_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"outstanding_store_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"perf_instr_ret_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"perf_instr_ret_compressed_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"perf_instr_ret_wb_spec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"perf_instr_ret_compressed_wb_spec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rf_waddr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+612,0,"rf_wdata_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"rf_wdata_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"rf_we_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"rf_wdata_fwd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rf_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"lsu_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"lsu_resp_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"instr_done_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rf_wdata_wb_mux", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+539+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+257,0,"rf_wdata_wb_mux_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("g_bypass_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+784,0,"unused_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"unused_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"unused_instr_type_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+553,0,"unused_pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"unused_dummy_instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+820,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+861,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+875,0,"WordZeroVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"dummy_instr_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"raddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+593,0,"rdata_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"raddr_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,0,"rdata_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"waddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"wdata_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"we_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+861,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rf_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+455+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+258,0,"we_a_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+819,0,"unused_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"unused_test_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_normal_r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+876,0,"unused_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+487,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+488,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+489,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+490,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+492,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+493,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+494,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+498,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+499,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+500,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+501,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+502,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+503,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+504,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+505,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+506,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+507,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+508,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+513,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+514,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+515,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+516,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+517,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__prim_cipher_pkg__0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_sub__TOP__prim_cipher_pkg__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declQuad(c+985,0,"PRINCE_SBOX4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+987,0,"PRINCE_SBOX4_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+989,0,"PRINCE_SHIFT_ROWS64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+991,0,"PRINCE_SHIFT_ROWS64_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+993,0,"PRINCE_ROUND_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 767,0);
    tracep->declQuad(c+1017,0,"PRINCE_ALPHA_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1019,0,"PRINCE_SHIFT_ROWS_CONST0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1020,0,"PRINCE_SHIFT_ROWS_CONST1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1021,0,"PRINCE_SHIFT_ROWS_CONST2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1022,0,"PRINCE_SHIFT_ROWS_CONST3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1023,0,"PRESENT_SBOX4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1025,0,"PRESENT_SBOX4_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1027,0,"PRESENT_PERM32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+1032,0,"PRESENT_PERM32_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+1037,0,"PRESENT_PERM64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 383,0);
    tracep->declArray(c+1049,0,"PRESENT_PERM64_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 383,0);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_init_sub__TOP__ibex_pkg__0(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_sub__TOP__ibex_pkg__0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+1061,0,"ExcCauseIrqSoftwareM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1062,0,"ExcCauseIrqTimerM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1063,0,"ExcCauseIrqExternalM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1064,0,"ExcCauseIrqNm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1065,0,"ExcCauseInsnAddrMisa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1066,0,"ExcCauseInstrAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1067,0,"ExcCauseIllegalInsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1068,0,"ExcCauseBreakpoint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1069,0,"ExcCauseLoadAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1070,0,"ExcCauseStoreAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1071,0,"ExcCauseEcallUMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1072,0,"ExcCauseEcallMMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+861,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+861,0,"BUS_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+822,0,"BUS_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"BUS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1073,0,"IC_SIZE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"IC_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+863,0,"IC_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+964,0,"IC_LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+891,0,"IC_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1074,0,"IC_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"IC_LINE_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+864,0,"IC_LINE_BEATS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+964,0,"IC_INDEX_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1075,0,"IC_INDEX_HI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+862,0,"IC_TAG_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"IC_OUTPUT_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+968,0,"IC_DATA_ECC_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+973,0,"IC_TAG_ECC_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1076,0,"SCRAMBLE_KEY_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+863,0,"SCRAMBLE_NONCE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1077,0,"PMP_MAX_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+964,0,"PMP_CFG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1078,0,"PMP_ADDR_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"PMP_ADDR_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+821,0,"PMP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+864,0,"PMP_I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"PMP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1079,0,"CSR_OFF_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1080,0,"CSR_OFF_PMP_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+891,0,"CSR_MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+968,0,"CSR_MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1081,0,"CSR_MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1082,0,"CSR_MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1083,0,"CSR_MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1084,0,"CSR_MSTATUS_TW_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1085,0,"CSR_MISA_MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+891,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+968,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1081,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1077,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1086,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+821,0,"CSR_MSECCFG_MML_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+864,0,"CSR_MSECCFG_MMWP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+983,0,"CSR_MSECCFG_RLB_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1087,0,"CSR_MARCHID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"CSR_MCONFIGPTR_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"LfsrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+865,0,"RndCnstLfsrSeedDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+866,0,"RndCnstLfsrPermDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+1089,0,"RndCnstIbexKeyDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1093,0,"RndCnstIbexNonceDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+943,0,"IbexMuBiWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1095,0,"IbexMuBiOn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1096,0,"IbexMuBiOff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("PmpCfgRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+823,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+823,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("PmpAddrRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1097+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+856,0,"PmpMseccfgRst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_init_top(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_init_top\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_sim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_sim___024root__trace_register(Vtop_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_register\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_sim___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_sim___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_sim___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_sim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_const_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_const_0\n"); );
    // Body
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_sim___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<24>/*767:0*/ Vtop_sim__ConstPool__CONST_h08bc5fc5_0;
extern const VlWide<12>/*383:0*/ Vtop_sim__ConstPool__CONST_h24667f93_0;
extern const VlWide<12>/*383:0*/ Vtop_sim__ConstPool__CONST_h98189d5c_0;

VL_ATTR_COLD void Vtop_sim___024root__trace_const_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_const_0_sub_0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+820,(0U));
    bufp->fullIData(oldp+821,(0U),32);
    bufp->fullIData(oldp+822,(4U),32);
    bufp->fullCData(oldp+823,(0U),6);
    bufp->fullQData(oldp+824,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[0]),34);
    bufp->fullQData(oldp+826,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[1]),34);
    bufp->fullQData(oldp+828,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[2]),34);
    bufp->fullQData(oldp+830,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[3]),34);
    bufp->fullQData(oldp+832,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[4]),34);
    bufp->fullQData(oldp+834,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[5]),34);
    bufp->fullQData(oldp+836,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[6]),34);
    bufp->fullQData(oldp+838,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[7]),34);
    bufp->fullQData(oldp+840,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[8]),34);
    bufp->fullQData(oldp+842,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[9]),34);
    bufp->fullQData(oldp+844,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[10]),34);
    bufp->fullQData(oldp+846,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[11]),34);
    bufp->fullQData(oldp+848,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[12]),34);
    bufp->fullQData(oldp+850,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[13]),34);
    bufp->fullQData(oldp+852,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[14]),34);
    bufp->fullQData(oldp+854,(vlSelfRef.top_sim__DOT__u_core__DOT__PMPRstAddr[15]),34);
    bufp->fullCData(oldp+856,(0U),3);
    bufp->fullIData(oldp+857,(0x00000028U),32);
    bufp->fullIData(oldp+858,(2U),32);
    bufp->fullIData(oldp+859,(0U),32);
    bufp->fullIData(oldp+860,(3U),32);
    bufp->fullIData(oldp+861,(0x00000020U),32);
    bufp->fullIData(oldp+862,(0x00000016U),32);
    bufp->fullIData(oldp+863,(0x00000040U),32);
    bufp->fullIData(oldp+864,(1U),32);
    bufp->fullIData(oldp+865,(0xac533bf4U),32);
    __Vtemp_1[0U] = 0x78a8daedU;
    __Vtemp_1[1U] = 0xc04fa438U;
    __Vtemp_1[2U] = 0x2e958152U;
    __Vtemp_1[3U] = 0x467fd1b1U;
    __Vtemp_1[4U] = 0x1e35ecbaU;
    bufp->fullWData(oldp+866,(__Vtemp_1),160);
    bufp->fullIData(oldp+871,(0x1a110000U),32);
    bufp->fullIData(oldp+872,(0x00000fffU),32);
    bufp->fullIData(oldp+873,(0x1a110800U),32);
    bufp->fullIData(oldp+874,(0x1a110808U),32);
    bufp->fullIData(oldp+875,(0U),32);
    bufp->fullBit(oldp+876,(0U));
    bufp->fullCData(oldp+877,(0U),2);
    bufp->fullCData(oldp+878,(0U),8);
    bufp->fullIData(oldp+879,(0U),22);
    bufp->fullIData(oldp+880,(vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[0]),22);
    bufp->fullIData(oldp+881,(vlSelfRef.top_sim__DOT__u_core__DOT__ic_tag_rdata_i[1]),22);
    bufp->fullQData(oldp+882,(0ULL),64);
    bufp->fullQData(oldp+884,(vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[0]),64);
    bufp->fullQData(oldp+886,(vlSelfRef.top_sim__DOT__u_core__DOT__ic_data_rdata_i[1]),64);
    bufp->fullBit(oldp+888,(vlSelfRef.top_sim__DOT__u_core__DOT__ic_scr_key_valid_i));
    bufp->fullSData(oldp+889,(0U),15);
    bufp->fullCData(oldp+890,(5U),4);
    bufp->fullIData(oldp+891,(3U),32);
    bufp->fullBit(oldp+892,(1U));
    bufp->fullCData(oldp+893,(2U),2);
    bufp->fullIData(oldp+894,(0U),18);
    bufp->fullQData(oldp+895,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[0]),34);
    bufp->fullQData(oldp+897,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[1]),34);
    bufp->fullQData(oldp+899,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[2]),34);
    bufp->fullQData(oldp+901,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[3]),34);
    bufp->fullQData(oldp+903,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[4]),34);
    bufp->fullQData(oldp+905,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[5]),34);
    bufp->fullQData(oldp+907,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[6]),34);
    bufp->fullQData(oldp+909,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[7]),34);
    bufp->fullQData(oldp+911,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[8]),34);
    bufp->fullQData(oldp+913,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[9]),34);
    bufp->fullQData(oldp+915,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[10]),34);
    bufp->fullQData(oldp+917,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[11]),34);
    bufp->fullQData(oldp+919,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[12]),34);
    bufp->fullQData(oldp+921,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[13]),34);
    bufp->fullQData(oldp+923,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[14]),34);
    bufp->fullQData(oldp+925,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr[15]),34);
    bufp->fullIData(oldp+927,(0x40101104U),32);
    bufp->fullCData(oldp+928,(0U),3);
    bufp->fullCData(oldp+929,(0x10U),6);
    bufp->fullIData(oldp+930,(0x40000003U),32);
    bufp->fullCData(oldp+931,(4U),3);
    bufp->fullIData(oldp+932,(3U),32);
    bufp->fullIData(oldp+933,(0x0000000dU),32);
    bufp->fullIData(oldp+934,(0x0000000eU),32);
    bufp->fullIData(oldp+935,(0x0000000fU),32);
    bufp->fullIData(oldp+936,(0x00000010U),32);
    bufp->fullIData(oldp+937,(0x00000011U),32);
    bufp->fullIData(oldp+938,(0x00000012U),32);
    bufp->fullIData(oldp+939,(0x00000013U),32);
    bufp->fullIData(oldp+940,(0x00000014U),32);
    bufp->fullIData(oldp+941,(0x00000015U),32);
    bufp->fullIData(oldp+942,(0x00000016U),32);
    bufp->fullIData(oldp+943,(4U),32);
    bufp->fullIData(oldp+944,(0x00000017U),32);
    bufp->fullIData(oldp+945,(0x00000018U),32);
    bufp->fullIData(oldp+946,(0x00000019U),32);
    bufp->fullIData(oldp+947,(0x0000001aU),32);
    bufp->fullIData(oldp+948,(0x0000001bU),32);
    bufp->fullIData(oldp+949,(0x0000001cU),32);
    bufp->fullIData(oldp+950,(0x0000001dU),32);
    bufp->fullIData(oldp+951,(0x0000001eU),32);
    bufp->fullIData(oldp+952,(0x0000001fU),32);
    bufp->fullIData(oldp+953,(5U),32);
    bufp->fullIData(oldp+954,(6U),32);
    bufp->fullIData(oldp+955,(7U),32);
    bufp->fullIData(oldp+956,(8U),32);
    bufp->fullIData(oldp+957,(9U),32);
    bufp->fullIData(oldp+958,(0x0000000aU),32);
    bufp->fullIData(oldp+959,(0x0000000bU),32);
    bufp->fullIData(oldp+960,(0x0000000cU),32);
    bufp->fullIData(oldp+961,(0x00000040U),32);
    bufp->fullIData(oldp+962,(0x00006e6fU),32);
    bufp->fullBit(oldp+963,(1U));
    bufp->fullIData(oldp+964,(8U),32);
    bufp->fullCData(oldp+965,(0U),8);
    bufp->fullIData(oldp+966,(0x40000003U),32);
    bufp->fullIData(oldp+967,(0U),32);
    bufp->fullIData(oldp+968,(7U),32);
    bufp->fullCData(oldp+969,(0U),7);
    bufp->fullIData(oldp+970,(0x00000012U),32);
    bufp->fullIData(oldp+971,(0U),18);
    bufp->fullCData(oldp+972,(4U),3);
    bufp->fullIData(oldp+973,(6U),32);
    bufp->fullCData(oldp+974,(0x10U),6);
    bufp->fullIData(oldp+975,(1U),32);
    bufp->fullCData(oldp+976,(0U),6);
    bufp->fullIData(oldp+977,(0xa52cbc83U),32);
    bufp->fullSData(oldp+978,(0xa52cU),16);
    bufp->fullSData(oldp+979,(0xbc83U),16);
    bufp->fullCData(oldp+980,(2U),2);
    bufp->fullCData(oldp+981,(0U),5);
    bufp->fullCData(oldp+982,(0U),4);
    bufp->fullIData(oldp+983,(2U),32);
    bufp->fullIData(oldp+984,(5U),32);
    bufp->fullQData(oldp+985,(0x4d5e087619ca23fbULL),64);
    bufp->fullQData(oldp+987,(0x1ce5046a98df237bULL),64);
    bufp->fullQData(oldp+989,(0xfa50b61c72d83e94ULL),64);
    bufp->fullQData(oldp+991,(0xf258be147ad0369cULL),64);
    bufp->fullWData(oldp+993,(Vtop_sim__ConstPool__CONST_h08bc5fc5_0),768);
    bufp->fullQData(oldp+1017,(0xc0ac29b7c97c50ddULL),64);
    bufp->fullSData(oldp+1019,(0x7bdeU),16);
    bufp->fullSData(oldp+1020,(0xbde7U),16);
    bufp->fullSData(oldp+1021,(0xde7bU),16);
    bufp->fullSData(oldp+1022,(0xe7bdU),16);
    bufp->fullQData(oldp+1023,(0x21748fe3da09b65cULL),64);
    bufp->fullQData(oldp+1025,(0xa970364bd21c8fe5ULL),64);
    __Vtemp_2[0U] = 0x521c4100U;
    __Vtemp_2[1U] = 0x3d4942ccU;
    __Vtemp_2[2U] = 0x5184dcd6U;
    __Vtemp_2[3U] = 0xc6ed5a5eU;
    __Vtemp_2[4U] = 0xfdde7f59U;
    bufp->fullWData(oldp+1027,(__Vtemp_2),160);
    __Vtemp_3[0U] = 0x29062080U;
    __Vtemp_3[1U] = 0x16a4a1e6U;
    __Vtemp_3[2U] = 0x28c2ee6bU;
    __Vtemp_3[3U] = 0xe3f6ad27U;
    __Vtemp_3[4U] = 0xfeef37acU;
    bufp->fullWData(oldp+1032,(__Vtemp_3),160);
    bufp->fullWData(oldp+1037,(Vtop_sim__ConstPool__CONST_h24667f93_0),384);
    bufp->fullWData(oldp+1049,(Vtop_sim__ConstPool__CONST_h98189d5c_0),384);
    bufp->fullCData(oldp+1061,(0x23U),7);
    bufp->fullCData(oldp+1062,(0x27U),7);
    bufp->fullCData(oldp+1063,(0x2bU),7);
    bufp->fullCData(oldp+1064,(0x3fU),7);
    bufp->fullCData(oldp+1065,(0U),7);
    bufp->fullCData(oldp+1066,(1U),7);
    bufp->fullCData(oldp+1067,(2U),7);
    bufp->fullCData(oldp+1068,(3U),7);
    bufp->fullCData(oldp+1069,(5U),7);
    bufp->fullCData(oldp+1070,(7U),7);
    bufp->fullCData(oldp+1071,(8U),7);
    bufp->fullCData(oldp+1072,(0x0bU),7);
    bufp->fullIData(oldp+1073,(0x00001000U),32);
    bufp->fullIData(oldp+1074,(0x00000100U),32);
    bufp->fullIData(oldp+1075,(0x0000000aU),32);
    bufp->fullIData(oldp+1076,(0x00000080U),32);
    bufp->fullIData(oldp+1077,(0x00000010U),32);
    bufp->fullIData(oldp+1078,(0x00000021U),32);
    bufp->fullSData(oldp+1079,(0x03a0U),12);
    bufp->fullSData(oldp+1080,(0x03b0U),12);
    bufp->fullIData(oldp+1081,(0x0000000bU),32);
    bufp->fullIData(oldp+1082,(0x0000000cU),32);
    bufp->fullIData(oldp+1083,(0x00000011U),32);
    bufp->fullIData(oldp+1084,(0x00000015U),32);
    bufp->fullCData(oldp+1085,(1U),2);
    bufp->fullIData(oldp+1086,(0x0000001eU),32);
    bufp->fullIData(oldp+1087,(0x00000016U),32);
    bufp->fullIData(oldp+1088,(0x00000020U),32);
    __Vtemp_4[0U] = 0xcc113298U;
    __Vtemp_4[1U] = 0x12286bb3U;
    __Vtemp_4[2U] = 0xe3040d5eU;
    __Vtemp_4[3U] = 0x14e8cecaU;
    bufp->fullWData(oldp+1089,(__Vtemp_4),128);
    bufp->fullQData(oldp+1093,(0xf79780bc735f3843ULL),64);
    bufp->fullCData(oldp+1095,(5U),4);
    bufp->fullCData(oldp+1096,(0x0aU),4);
    bufp->fullQData(oldp+1097,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[0]),34);
    bufp->fullQData(oldp+1099,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[1]),34);
    bufp->fullQData(oldp+1101,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[2]),34);
    bufp->fullQData(oldp+1103,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[3]),34);
    bufp->fullQData(oldp+1105,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[4]),34);
    bufp->fullQData(oldp+1107,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[5]),34);
    bufp->fullQData(oldp+1109,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[6]),34);
    bufp->fullQData(oldp+1111,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[7]),34);
    bufp->fullQData(oldp+1113,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[8]),34);
    bufp->fullQData(oldp+1115,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[9]),34);
    bufp->fullQData(oldp+1117,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[10]),34);
    bufp->fullQData(oldp+1119,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[11]),34);
    bufp->fullQData(oldp+1121,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[12]),34);
    bufp->fullQData(oldp+1123,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[13]),34);
    bufp->fullQData(oldp+1125,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[14]),34);
    bufp->fullQData(oldp+1127,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[15]),34);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_full_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_full_0\n"); );
    // Body
    Vtop_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_sim___024root*>(voidSelf);
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_sim___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_sim___024root__trace_full_0_sub_0(Vtop_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim___024root__trace_full_0_sub_0\n"); );
    Vtop_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullQData(oldp+0,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[0]),34);
    bufp->fullQData(oldp+2,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[1]),34);
    bufp->fullQData(oldp+4,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[2]),34);
    bufp->fullQData(oldp+6,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_addr[3]),34);
    bufp->fullCData(oldp+8,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[0U]),6);
    bufp->fullCData(oldp+9,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[1U]),6);
    bufp->fullCData(oldp+10,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[2U]),6);
    bufp->fullCData(oldp+11,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_pmp_cfg[3U]),6);
    bufp->fullBit(oldp+12,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[0]));
    bufp->fullBit(oldp+13,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[1]));
    bufp->fullBit(oldp+14,(vlSelfRef.top_sim__DOT__u_core__DOT__pmp_req_err[2]));
    bufp->fullCData(oldp+15,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[0U]),6);
    bufp->fullCData(oldp+16,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[1U]),6);
    bufp->fullCData(oldp+17,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[2U]),6);
    bufp->fullCData(oldp+18,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_cfg_o[3U]),6);
    bufp->fullQData(oldp+19,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[0]),34);
    bufp->fullQData(oldp+21,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[1]),34);
    bufp->fullQData(oldp+23,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[2]),34);
    bufp->fullQData(oldp+25,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp_addr_o[3]),34);
    bufp->fullIData(oldp+27,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
    bufp->fullCData(oldp+43,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
    bufp->fullIData(oldp+59,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[0]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[1]),32);
    bufp->fullQData(oldp+95,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
    bufp->fullQData(oldp+97,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
    bufp->fullQData(oldp+99,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
    bufp->fullQData(oldp+101,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
    bufp->fullCData(oldp+103,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U]),6);
    bufp->fullCData(oldp+104,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U]),6);
    bufp->fullCData(oldp+105,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U]),6);
    bufp->fullCData(oldp+106,(vlSelfRef.top_sim__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U]),6);
    bufp->fullIData(oldp+107,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[0]),22);
    bufp->fullIData(oldp+108,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_tag_rdata_i[1]),22);
    bufp->fullQData(oldp+109,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[0]),64);
    bufp->fullQData(oldp+111,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__ic_data_rdata_i[1]),64);
    bufp->fullIData(oldp+113,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
    bufp->fullIData(oldp+114,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
    bufp->fullQData(oldp+115,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
    bufp->fullQData(oldp+117,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
    bufp->fullBit(oldp+119,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en));
    bufp->fullBit(oldp+120,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
    bufp->fullBit(oldp+121,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
    bufp->fullBit(oldp+122,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
    bufp->fullBit(oldp+123,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
    bufp->fullBit(oldp+124,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
    bufp->fullIData(oldp+125,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                   >> 1U))));
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                   >> 1U))));
    bufp->fullBit(oldp+129,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
    bufp->fullIData(oldp+130,((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                               >> 3U)),29);
    bufp->fullIData(oldp+131,((vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                               >> 3U)),29);
    bufp->fullBit(oldp+132,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
    bufp->fullBit(oldp+133,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
    bufp->fullQData(oldp+134,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
    bufp->fullBit(oldp+136,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
    bufp->fullQData(oldp+137,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
    bufp->fullBit(oldp+139,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                   >> 2U))));
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                   >> 2U))));
    bufp->fullBit(oldp+141,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
    bufp->fullBit(oldp+142,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch));
    bufp->fullBit(oldp+143,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    bufp->fullBit(oldp+144,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set));
    bufp->fullBit(oldp+145,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw));
    bufp->fullBit(oldp+146,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
    bufp->fullBit(oldp+147,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
    bufp->fullBit(oldp+148,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
    bufp->fullBit(oldp+149,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
    bufp->fullBit(oldp+150,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
    bufp->fullBit(oldp+151,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
    bufp->fullBit(oldp+152,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
    bufp->fullCData(oldp+153,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy) 
                                | (((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                    | (IData)(vlSelfRef.top_sim__DOT__instr_req)) 
                                   | (0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                ? 5U : 0x0aU)),4);
    bufp->fullBit(oldp+154,((1U & ((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering) 
                                       | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
    bufp->fullBit(oldp+155,(((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                             | (IData)(vlSelfRef.top_sim__DOT__instr_req))));
    bufp->fullBit(oldp+156,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req) 
                              | (0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->fullBit(oldp+157,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready))));
    bufp->fullBit(oldp+158,(((~ ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                 >> 2U)) & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb))));
    bufp->fullBit(oldp+159,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) 
                             | ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->fullCData(oldp+160,(((IData)(vlSelfRef.top_sim__DOT__instr_rvalid)
                                ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
    bufp->fullCData(oldp+161,(((IData)(vlSelfRef.top_sim__DOT__instr_rvalid)
                                ? VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
    bufp->fullBit(oldp+162,(vlSelfRef.top_sim__DOT__instr_req));
    bufp->fullIData(oldp+163,((0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
    bufp->fullIData(oldp+164,(vlSelfRef.top_sim__DOT__rf_wdata_wb),32);
    bufp->fullBit(oldp+165,(vlSelfRef.top_sim__DOT__rf_we_wb));
    bufp->fullBit(oldp+166,(vlSelfRef.top_sim__DOT__u_core__DOT__data_req_out));
    bufp->fullBit(oldp+167,(vlSelfRef.top_sim__DOT__u_core__DOT__double_fault_seen_o));
    bufp->fullCData(oldp+168,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_we_ex),2);
    bufp->fullBit(oldp+169,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear));
    bufp->fullBit(oldp+170,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set));
    bufp->fullCData(oldp+171,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id),3);
    bufp->fullCData(oldp+172,(vlSelfRef.top_sim__DOT__u_core__DOT__exc_pc_mux_id),2);
    bufp->fullCData(oldp+173,(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause),7);
    bufp->fullBit(oldp+174,(vlSelfRef.top_sim__DOT__u_core__DOT__ctrl_busy));
    bufp->fullBit(oldp+175,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_req));
    bufp->fullBit(oldp+176,(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready));
    bufp->fullBit(oldp+177,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int));
    bufp->fullBit(oldp+178,(vlSelfRef.top_sim__DOT__u_core__DOT__en_wb));
    bufp->fullBit(oldp+179,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_if));
    bufp->fullBit(oldp+180,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_id));
    bufp->fullBit(oldp+181,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_mret_id));
    bufp->fullBit(oldp+182,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_restore_dret_id));
    bufp->fullBit(oldp+183,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_save_cause));
    bufp->fullBit(oldp+184,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init));
    bufp->fullIData(oldp+185,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtval),32);
    bufp->fullBit(oldp+186,(vlSelfRef.top_sim__DOT__u_core__DOT__debug_mode_entering));
    bufp->fullBit(oldp+187,(vlSelfRef.top_sim__DOT__u_core__DOT__debug_csr_save));
    bufp->fullBit(oldp+188,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb));
    bufp->fullBit(oldp+189,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump));
    bufp->fullBit(oldp+190,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch));
    bufp->fullBit(oldp+191,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_load));
    bufp->fullBit(oldp+192,(vlSelfRef.top_sim__DOT__u_core__DOT__perf_store));
    bufp->fullIData(oldp+193,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
    bufp->fullCData(oldp+194,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
    bufp->fullCData(oldp+195,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
    bufp->fullBit(oldp+196,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
    bufp->fullIData(oldp+197,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
    bufp->fullBit(oldp+198,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
    bufp->fullCData(oldp+199,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),7);
    bufp->fullBit(oldp+200,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
    bufp->fullIData(oldp+201,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
    bufp->fullBit(oldp+202,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
    bufp->fullBit(oldp+203,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
    bufp->fullIData(oldp+204,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
    bufp->fullBit(oldp+205,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
    bufp->fullIData(oldp+206,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
    bufp->fullBit(oldp+207,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
    bufp->fullBit(oldp+208,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
    bufp->fullCData(oldp+209,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
    bufp->fullBit(oldp+210,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
    bufp->fullQData(oldp+211,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
    bufp->fullBit(oldp+213,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
    bufp->fullQData(oldp+214,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
    bufp->fullCData(oldp+216,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
    bufp->fullBit(oldp+217,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
    bufp->fullBit(oldp+218,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
    bufp->fullBit(oldp+219,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
    bufp->fullBit(oldp+220,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec));
    bufp->fullBit(oldp+221,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
    bufp->fullBit(oldp+222,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
    bufp->fullCData(oldp+223,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
    bufp->fullBit(oldp+224,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    bufp->fullBit(oldp+225,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    bufp->fullBit(oldp+226,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
    bufp->fullBit(oldp+227,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
    bufp->fullBit(oldp+228,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
    bufp->fullIData(oldp+229,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr),32);
    bufp->fullBit(oldp+230,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready) 
                             & (1U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded)))));
    bufp->fullIData(oldp+231,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
    bufp->fullBit(oldp+232,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
    bufp->fullCData(oldp+233,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_gets_expanded),2);
    bufp->fullIData(oldp+234,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__exc_pc),32);
    bufp->fullCData(oldp+235,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__irq_vec),5);
    bufp->fullBit(oldp+236,((IData)((0U != (0x60U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__exc_cause))))));
    bufp->fullBit(oldp+237,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__id_in_ready_i));
    bufp->fullCData(oldp+238,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_d),5);
    bufp->fullCData(oldp+239,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_d),5);
    bufp->fullCData(oldp+240,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_d),3);
    bufp->fullCData(oldp+241,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__gets_expanded),2);
    bufp->fullBit(oldp+242,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    bufp->fullBit(oldp+243,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    bufp->fullCData(oldp+244,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
    bufp->fullCData(oldp+245,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
    bufp->fullIData(oldp+246,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
    bufp->fullBit(oldp+247,(((~ (IData)(vlSelfRef.top_sim__DOT__instr_req)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))));
    bufp->fullBit(oldp+248,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3))));
    bufp->fullCData(oldp+249,(((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__)) 
                                << 2U) | ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__))))),3);
    bufp->fullCData(oldp+250,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped__BRA__0__KET__)))),3);
    bufp->fullBit(oldp+251,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
    bufp->fullBit(oldp+252,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4ca33d8_0_3))));
    bufp->fullBit(oldp+253,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr)));
    bufp->fullBit(oldp+254,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    bufp->fullBit(oldp+255,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    bufp->fullCData(oldp+256,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
    bufp->fullCData(oldp+257,(vlSelfRef.top_sim__DOT__rf_we_wb),2);
    bufp->fullIData(oldp+258,(vlSelfRef.top_sim__DOT__u_regfile__DOT__we_a_dec),32);
    bufp->fullBit(oldp+259,(vlSelfRef.top_sim__DOT__instr_rvalid));
    bufp->fullBit(oldp+260,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    bufp->fullBit(oldp+261,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
    bufp->fullQData(oldp+262,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[0]),34);
    bufp->fullQData(oldp+264,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_q_ex[1]),34);
    bufp->fullBit(oldp+266,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 2U))));
    bufp->fullCData(oldp+268,((7U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+269,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id));
    bufp->fullBit(oldp+270,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_load_err));
    bufp->fullBit(oldp+271,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_store_err));
    bufp->fullBit(oldp+272,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req));
    bufp->fullIData(oldp+273,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
    bufp->fullBit(oldp+274,((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    bufp->fullIData(oldp+275,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                                ? 0U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                                         ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? 
                                                (0x000000ffU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 0x00000010U))
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? (0x000000ffU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 0x00000010U))
                                              : (0x0000ffffU 
                                                 & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 8U)))
                                          : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q
                                              : 0U))))),32);
    bufp->fullBit(oldp+276,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid));
    bufp->fullBit(oldp+277,(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err));
    bufp->fullBit(oldp+278,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 5U))));
    bufp->fullIData(oldp+280,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+281,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+282,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
    bufp->fullBit(oldp+283,((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
    bufp->fullCData(oldp+284,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
    bufp->fullCData(oldp+285,((3U & ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                      ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U) : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
    bufp->fullBit(oldp+286,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    bufp->fullCData(oldp+287,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
    bufp->fullBit(oldp+288,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 2U))));
    bufp->fullBit(oldp+289,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+290,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0x0000000cU))));
    bufp->fullIData(oldp+291,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
    bufp->fullCData(oldp+292,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
    bufp->fullIData(oldp+293,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
    bufp->fullIData(oldp+294,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
    bufp->fullCData(oldp+295,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
    bufp->fullIData(oldp+296,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+297,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+298,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
    bufp->fullCData(oldp+299,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
    bufp->fullCData(oldp+300,((7U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                     >> 2U))),3);
    bufp->fullIData(oldp+301,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
    bufp->fullCData(oldp+302,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
    bufp->fullIData(oldp+303,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
    bufp->fullCData(oldp+304,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
    bufp->fullQData(oldp+305,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
    bufp->fullQData(oldp+307,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
    bufp->fullQData(oldp+309,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
    bufp->fullQData(oldp+311,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
    bufp->fullQData(oldp+313,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
    bufp->fullQData(oldp+315,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
    bufp->fullQData(oldp+317,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
    bufp->fullQData(oldp+319,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
    bufp->fullQData(oldp+321,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
    bufp->fullQData(oldp+323,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
    bufp->fullQData(oldp+325,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
    bufp->fullQData(oldp+327,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
    bufp->fullQData(oldp+329,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
    bufp->fullQData(oldp+331,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
    bufp->fullQData(oldp+333,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
    bufp->fullQData(oldp+335,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
    bufp->fullQData(oldp+337,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
    bufp->fullQData(oldp+339,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
    bufp->fullQData(oldp+341,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
    bufp->fullQData(oldp+343,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
    bufp->fullQData(oldp+345,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
    bufp->fullQData(oldp+347,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
    bufp->fullQData(oldp+349,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
    bufp->fullQData(oldp+351,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
    bufp->fullQData(oldp+353,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
    bufp->fullQData(oldp+355,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
    bufp->fullQData(oldp+357,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
    bufp->fullQData(oldp+359,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
    bufp->fullQData(oldp+361,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
    bufp->fullQData(oldp+363,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
    bufp->fullQData(oldp+365,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
    bufp->fullQData(oldp+367,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
    bufp->fullQData(oldp+369,((1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
    bufp->fullQData(oldp+371,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
    bufp->fullCData(oldp+373,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))));
    bufp->fullQData(oldp+375,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
    bufp->fullQData(oldp+377,((1ULL + vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
    bufp->fullQData(oldp+379,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[0]),34);
    bufp->fullQData(oldp+381,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_q_i[1]),34);
    bufp->fullQData(oldp+383,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
    bufp->fullIData(oldp+385,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
    bufp->fullIData(oldp+386,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
    bufp->fullIData(oldp+387,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[0]),32);
    bufp->fullIData(oldp+388,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[1]),32);
    bufp->fullIData(oldp+389,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
    bufp->fullIData(oldp+390,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
    bufp->fullQData(oldp+391,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[0]),34);
    bufp->fullQData(oldp+393,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[1]),34);
    bufp->fullIData(oldp+395,(((IData)(1U) << (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
    bufp->fullIData(oldp+396,((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U])),32);
    bufp->fullIData(oldp+397,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
    bufp->fullIData(oldp+398,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
    bufp->fullBit(oldp+399,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
    bufp->fullCData(oldp+400,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
    bufp->fullBit(oldp+401,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
    bufp->fullBit(oldp+402,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
    bufp->fullBit(oldp+403,((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
    bufp->fullCData(oldp+404,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
    bufp->fullCData(oldp+405,((3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                             >> 0x00000020U)))),2);
    bufp->fullCData(oldp+406,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
    bufp->fullIData(oldp+407,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__hw_timer_q),32);
    bufp->fullQData(oldp+408,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[0]),34);
    bufp->fullQData(oldp+410,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q_ex_o[1]),34);
    bufp->fullBit(oldp+412,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_set));
    bufp->fullBit(oldp+413,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    bufp->fullBit(oldp+414,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
    bufp->fullQData(oldp+415,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
    bufp->fullQData(oldp+417,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
    bufp->fullBit(oldp+419,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
    bufp->fullCData(oldp+420,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
    bufp->fullBit(oldp+421,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
    bufp->fullBit(oldp+422,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
    bufp->fullBit(oldp+423,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
    bufp->fullBit(oldp+424,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
    bufp->fullBit(oldp+425,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    bufp->fullBit(oldp+426,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
    bufp->fullBit(oldp+427,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    bufp->fullBit(oldp+428,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
    bufp->fullBit(oldp+429,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
    bufp->fullBit(oldp+430,((IData)((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 5U) | (0U 
                                                == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
    bufp->fullCData(oldp+431,((0x000000ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
    bufp->fullCData(oldp+432,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_state_q),3);
    bufp->fullBit(oldp+433,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
    bufp->fullBit(oldp+434,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
    bufp->fullCData(oldp+435,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
    bufp->fullCData(oldp+436,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
    bufp->fullCData(oldp+437,(((2U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                    >> 1U)))),2);
    bufp->fullBit(oldp+438,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    bufp->fullBit(oldp+439,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
    bufp->fullBit(oldp+440,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
    bufp->fullBit(oldp+441,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
    bufp->fullIData(oldp+442,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
    bufp->fullCData(oldp+443,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
    bufp->fullCData(oldp+444,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
    bufp->fullBit(oldp+445,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
    bufp->fullBit(oldp+446,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
    bufp->fullIData(oldp+447,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? (0x000000ffU 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000010U))
                                    : (0x0000ffffU 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U))) : 
                               ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                 ? vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q
                                 : 0U))),32);
    bufp->fullIData(oldp+448,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? (0x000000ffU 
                                       & (vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000010U))
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+449,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    bufp->fullBit(oldp+450,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    bufp->fullBit(oldp+451,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    bufp->fullBit(oldp+452,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
    bufp->fullBit(oldp+453,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
    bufp->fullCData(oldp+454,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
    bufp->fullIData(oldp+455,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[0]),32);
    bufp->fullIData(oldp+456,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[1]),32);
    bufp->fullIData(oldp+457,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[2]),32);
    bufp->fullIData(oldp+458,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[3]),32);
    bufp->fullIData(oldp+459,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[4]),32);
    bufp->fullIData(oldp+460,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[5]),32);
    bufp->fullIData(oldp+461,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[6]),32);
    bufp->fullIData(oldp+462,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[7]),32);
    bufp->fullIData(oldp+463,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[8]),32);
    bufp->fullIData(oldp+464,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[9]),32);
    bufp->fullIData(oldp+465,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[10]),32);
    bufp->fullIData(oldp+466,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[11]),32);
    bufp->fullIData(oldp+467,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[12]),32);
    bufp->fullIData(oldp+468,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[13]),32);
    bufp->fullIData(oldp+469,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[14]),32);
    bufp->fullIData(oldp+470,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[15]),32);
    bufp->fullIData(oldp+471,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[16]),32);
    bufp->fullIData(oldp+472,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[17]),32);
    bufp->fullIData(oldp+473,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[18]),32);
    bufp->fullIData(oldp+474,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[19]),32);
    bufp->fullIData(oldp+475,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[20]),32);
    bufp->fullIData(oldp+476,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[21]),32);
    bufp->fullIData(oldp+477,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[22]),32);
    bufp->fullIData(oldp+478,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[23]),32);
    bufp->fullIData(oldp+479,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[24]),32);
    bufp->fullIData(oldp+480,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[25]),32);
    bufp->fullIData(oldp+481,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[26]),32);
    bufp->fullIData(oldp+482,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[27]),32);
    bufp->fullIData(oldp+483,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[28]),32);
    bufp->fullIData(oldp+484,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[29]),32);
    bufp->fullIData(oldp+485,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[30]),32);
    bufp->fullIData(oldp+486,(vlSelfRef.top_sim__DOT__u_regfile__DOT__rf_reg[31]),32);
    bufp->fullIData(oldp+487,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+488,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+489,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+490,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+491,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+492,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+493,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+494,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+495,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+496,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+497,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+498,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+499,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+500,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+501,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+502,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+503,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+504,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+505,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+506,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+507,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+508,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+509,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+510,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+511,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+512,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+513,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+514,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+515,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+516,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+517,(vlSelfRef.top_sim__DOT__u_regfile__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
    __Vtemp_3[0U] = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
    __Vtemp_3[1U] = vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    __Vtemp_3[2U] = vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
    __Vtemp_3[3U] = (IData)((((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                 << 1U)))));
    __Vtemp_3[4U] = (IData)(((((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                  << 1U)))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+518,(__Vtemp_3),160);
    bufp->fullBit(oldp+523,(((3U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x0000001cU)) 
                             > (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    bufp->fullBit(oldp+524,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr))));
    bufp->fullIData(oldp+525,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
    bufp->fullBit(oldp+526,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
    bufp->fullQData(oldp+527,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                    ? (1ULL | ((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))) 
                                               << 2U))
                                    : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                        ? (1ULL | ((QData)((IData)(
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
    bufp->fullCData(oldp+529,((0x0000001fU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id)
                                               ? vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex
                                               : (- vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)))),6);
    bufp->fullBit(oldp+530,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                             & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
    bufp->fullBit(oldp+531,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))));
    bufp->fullBit(oldp+532,(((3U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                             & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    bufp->fullBit(oldp+533,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_first_cycle_id))))));
    bufp->fullBit(oldp+534,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                              ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)
                              : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid))));
    bufp->fullBit(oldp+535,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                             | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req))));
    bufp->fullCData(oldp+536,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                ? 1U : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                         ? 4U : 0U))),3);
    bufp->fullBit(oldp+537,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                             | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_err))))));
    bufp->fullIData(oldp+538,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_addr_incr_req)
                                ? ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 3U)) 
                                   << 2U) : (IData)(
                                                    (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))),32);
    bufp->fullIData(oldp+539,(vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
    bufp->fullIData(oldp+540,(vlSelfRef.top_sim__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
    bufp->fullCData(oldp+541,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+542,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000014U))),5);
    bufp->fullCData(oldp+543,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))),5);
    bufp->fullIData(oldp+544,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id),32);
    bufp->fullSData(oldp+545,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_c_id),16);
    bufp->fullBit(oldp+546,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id));
    bufp->fullCData(oldp+547,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_gets_expanded_id),2);
    bufp->fullSData(oldp+548,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_expanded_id),16);
    bufp->fullBit(oldp+549,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err));
    bufp->fullBit(oldp+550,(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err_plus2));
    bufp->fullBit(oldp+551,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_c_insn_id));
    bufp->fullIData(oldp+552,((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                               << 1U)),32);
    bufp->fullIData(oldp+553,(vlSelfRef.top_sim__DOT__u_core__DOT__pc_id),32);
    bufp->fullSData(oldp+554,((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                               >> 0x00000014U)),12);
    bufp->fullBit(oldp+555,((1U & VL_REDXOR_16(vlSelfRef.top_sim__DOT__u_core__DOT__instr_expanded_id))));
    bufp->fullBit(oldp+556,((1U & VL_REDXOR_2(vlSelfRef.top_sim__DOT__u_core__DOT__instr_gets_expanded_id))));
    bufp->fullBit(oldp+557,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__dbg_csr));
    bufp->fullBit(oldp+558,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
    bufp->fullCData(oldp+559,((7U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x00000019U))),3);
    bufp->fullIData(oldp+560,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))),32);
    bufp->fullIData(oldp+561,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+562,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x0000000dU) | (
                                                   (((2U 
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
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+563,((0xfffff000U & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)),32);
    bufp->fullIData(oldp+564,((((- (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x00000014U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U))))),32);
    bufp->fullIData(oldp+565,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000fU))),32);
    bufp->fullBit(oldp+566,(((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)) 
                             | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x00000014U)))));
    bufp->fullSData(oldp+567,(((0x000003e0U & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000000aU)) 
                               | (0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U)))),10);
    bufp->fullCData(oldp+568,((vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                               >> 0x0000001bU)),5);
    bufp->fullCData(oldp+569,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_rlist_q),5);
    bufp->fullCData(oldp+570,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__cm_sp_offset_q),5);
    bufp->fullIData(oldp+571,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
    bufp->fullIData(oldp+572,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
    bufp->fullWData(oldp+573,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
    bufp->fullCData(oldp+576,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)))),3);
    bufp->fullIData(oldp+577,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    bufp->fullBit(oldp+578,((1U & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                   & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                         & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id)) 
                                            & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_fetch_err)))))))));
    bufp->fullBit(oldp+579,(((3U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0000001eU)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))));
    bufp->fullIData(oldp+580,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x0000001fU 
                                        & (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x0000000fU)))),32);
    bufp->fullIData(oldp+581,(((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? 4U : ((1U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                             ? ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)
                                                 ? 2U
                                                 : 4U)
                                             : (((- (IData)(
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
    bufp->fullIData(oldp+582,((0x7fffffffU & (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->fullIData(oldp+583,(vlSelfRef.top_sim__DOT__instr_rdata),32);
    bufp->fullIData(oldp+584,(vlSelfRef.top_sim__DOT__fetch_addr_q),32);
    bufp->fullIData(oldp+585,(((0x00000090U > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                ? 0x000000ffU : 0x000004a2U)),32);
    bufp->fullSData(oldp+586,((0x0000ffffU & (0xa52cU 
                                              ^ ((((IData)(0x00005a1fU) 
                                                   + 
                                                   ((IData)(0x00009e37U) 
                                                    * 
                                                    (0x0000ffffU 
                                                     & (0x19d9U 
                                                        ^ 
                                                        ((0x00000090U 
                                                          > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                          ? 0x000000ffU
                                                          : 0x000004a2U))))) 
                                                  >> 0x00000010U) 
                                                 ^ 
                                                 ((IData)(0x5a1fU) 
                                                  + 
                                                  ((IData)(0x00009e37U) 
                                                   * 
                                                   (0x0000ffffU 
                                                    & (0x19d9U 
                                                       ^ 
                                                       ((0x00000090U 
                                                         > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                         ? 0x000000ffU
                                                         : 0x000004a2U))))))))),16);
    bufp->fullBit(oldp+587,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__shutdown_latched_q));
    bufp->fullCData(oldp+588,((3U & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                     >> 1U))),2);
    bufp->fullCData(oldp+589,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
    bufp->fullCData(oldp+590,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry__BRA__1__KET__) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
    bufp->fullCData(oldp+591,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed__BRA__0__KET__)))),3);
    bufp->fullBit(oldp+592,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    bufp->fullIData(oldp+593,(vlSelfRef.top_sim__DOT__rf_rdata_a),32);
    bufp->fullIData(oldp+594,(vlSelfRef.top_sim__DOT__rf_rdata_b),32);
    bufp->fullBit(oldp+595,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
    bufp->fullCData(oldp+596,(vlSelfRef.top_sim__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
    bufp->fullIData(oldp+597,(((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                        >> 3U)) << 2U)),32);
    bufp->fullIData(oldp+598,(((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 2U)))
                                ? ((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))
                                    ? ((vlSelfRef.top_sim__DOT__rf_rdata_b 
                                        << 0x00000018U) 
                                       | (vlSelfRef.top_sim__DOT__rf_rdata_b 
                                          >> 8U)) : 
                                   ((vlSelfRef.top_sim__DOT__rf_rdata_b 
                                     << 0x00000010U) 
                                    | (vlSelfRef.top_sim__DOT__rf_rdata_b 
                                       >> 0x00000010U)))
                                : ((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))
                                    ? ((vlSelfRef.top_sim__DOT__rf_rdata_b 
                                        << 8U) | (vlSelfRef.top_sim__DOT__rf_rdata_b 
                                                  >> 0x00000018U))
                                    : vlSelfRef.top_sim__DOT__rf_rdata_b))),32);
    bufp->fullQData(oldp+599,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[0]),34);
    bufp->fullQData(oldp+601,(vlSelfRef.top_sim__DOT__u_core__DOT__imd_val_d_ex[1]),34);
    bufp->fullBit(oldp+603,(vlSelfRef.top_sim__DOT__u_core__DOT__icache_inval));
    bufp->fullBit(oldp+604,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_tamper_alert));
    bufp->fullBit(oldp+605,(vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown));
    bufp->fullBit(oldp+606,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3))));
    bufp->fullBit(oldp+607,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_3) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_we))));
    bufp->fullIData(oldp+608,((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                       >> 1U))),32);
    bufp->fullBit(oldp+609,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
    bufp->fullBit(oldp+610,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
    bufp->fullBit(oldp+611,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT____VdfgRegularize_h1a010572_0_4) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
    bufp->fullIData(oldp+612,(vlSelfRef.top_sim__DOT__u_core__DOT__rf_wdata_id),32);
    bufp->fullCData(oldp+613,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),7);
    bufp->fullIData(oldp+614,(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex),32);
    bufp->fullIData(oldp+615,(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex),32);
    bufp->fullBit(oldp+616,(vlSelfRef.top_sim__DOT__u_core__DOT__mult_sel_ex));
    bufp->fullBit(oldp+617,(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex));
    bufp->fullCData(oldp+618,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
    bufp->fullCData(oldp+619,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
    bufp->fullBit(oldp+620,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_access));
    bufp->fullCData(oldp+621,(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op),2);
    bufp->fullIData(oldp+622,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
    bufp->fullBit(oldp+623,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_csr_insn_id));
    bufp->fullCData(oldp+624,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
    bufp->fullBit(oldp+625,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
    bufp->fullBit(oldp+626,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_valid));
    bufp->fullBit(oldp+627,((1U & (~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown)))));
    bufp->fullBit(oldp+628,(vlSelfRef.top_sim__DOT__u_core__DOT__illegal_insn_id));
    bufp->fullIData(oldp+629,(((0x00020000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               << 0x0000000eU)) 
                               | ((0x00010000U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                  | ((0x00008000U & 
                                      (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       << 4U)) | (0x00007fffU 
                                                  & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     >> 0x00000010U)))))),18);
    bufp->fullCData(oldp+630,((0x000000ffU & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),8);
    bufp->fullCData(oldp+631,((0x000000c0U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),8);
    bufp->fullIData(oldp+632,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
    bufp->fullBit(oldp+633,(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr));
    bufp->fullBit(oldp+634,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 1U))));
    bufp->fullBit(oldp+635,((1U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 2U))));
    bufp->fullCData(oldp+636,((7U & (vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 3U))),3);
    bufp->fullBit(oldp+637,((1U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    bufp->fullQData(oldp+638,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[0]),34);
    bufp->fullQData(oldp+640,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__imd_val_d_o[1]),34);
    bufp->fullBit(oldp+642,((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
    bufp->fullBit(oldp+643,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens));
    bufp->fullIData(oldp+644,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_decrypted_data),32);
    bufp->fullIData(oldp+645,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
    bufp->fullQData(oldp+646,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
    bufp->fullQData(oldp+648,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
    bufp->fullBit(oldp+650,((0U == (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 1U)))));
    bufp->fullBit(oldp+651,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
    bufp->fullQData(oldp+652,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
    bufp->fullQData(oldp+654,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
    bufp->fullIData(oldp+656,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
    bufp->fullQData(oldp+657,((0x00000001ffffffffULL 
                               & (~ ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                     << 1U)))),33);
    bufp->fullBit(oldp+659,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
    bufp->fullBit(oldp+660,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
    bufp->fullBit(oldp+661,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
    bufp->fullBit(oldp+662,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
    bufp->fullQData(oldp+663,((0x00000001ffffffffULL 
                               & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                   ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                   : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                       ? (~ ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                             << 1U))
                                       : ((QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                          << 1U))))),33);
    bufp->fullBit(oldp+665,((1U & (((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                     ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex) 
                                    >> 0x0000001fU)
                                    ? ((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                        >> 0x0000001fU) 
                                       ^ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                    : (~ (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x00000020U)))))));
    bufp->fullBit(oldp+666,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
    bufp->fullBit(oldp+667,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
    bufp->fullBit(oldp+668,((8U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
    bufp->fullCData(oldp+669,((0x0000003fU & ((IData)(0x20U) 
                                              - (0x0000001fU 
                                                 & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)))),6);
    bufp->fullIData(oldp+670,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
    bufp->fullQData(oldp+671,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
    bufp->fullBit(oldp+673,((1U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
                                           >> 0x00000020U)))));
    bufp->fullIData(oldp+674,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
    bufp->fullIData(oldp+675,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
    bufp->fullCData(oldp+676,(((0x00000010U & ((~ (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                                       >> 0x00000018U)))) 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                                 >> 0x00000018U)))),5);
    bufp->fullCData(oldp+677,((0x0000001fU & (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex 
                                              >> 0x00000010U))),5);
    bufp->fullBit(oldp+678,(((3U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                             | (6U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
    bufp->fullBit(oldp+679,(((4U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                             | (7U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
    bufp->fullIData(oldp+680,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                               | vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+681,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                               & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+682,((vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                               ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+683,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
    bufp->fullBit(oldp+684,((1U & (((IData)(0x20U) 
                                    - (0x0000001fU 
                                       & vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_b_ex)) 
                                   >> 5U))));
    bufp->fullQData(oldp+685,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[0]),34);
    bufp->fullQData(oldp+687,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[1]),34);
    bufp->fullQData(oldp+689,((0x00000007ffffffffULL 
                               & (VL_MULS_QQQ(35, (0x00000007ffffffffULL 
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
    bufp->fullQData(oldp+691,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
    bufp->fullBit(oldp+693,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
    bufp->fullBit(oldp+694,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
    bufp->fullBit(oldp+695,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
    bufp->fullBit(oldp+696,((0U != (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
    bufp->fullQData(oldp+697,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
    bufp->fullQData(oldp+699,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
    bufp->fullQData(oldp+701,((0x00000003ffffffffULL 
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
    bufp->fullBit(oldp+703,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
    bufp->fullBit(oldp+704,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
    bufp->fullBit(oldp+705,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
    bufp->fullIData(oldp+706,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
    bufp->fullIData(oldp+707,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
    bufp->fullIData(oldp+708,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
    bufp->fullIData(oldp+709,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
    bufp->fullQData(oldp+710,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
    bufp->fullCData(oldp+712,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
    bufp->fullBit(oldp+713,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
    bufp->fullBit(oldp+714,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
    bufp->fullCData(oldp+715,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
    bufp->fullBit(oldp+716,((1U & (IData)((1ULL & (
                                                   (VL_MULS_QQQ(35, 
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
    bufp->fullCData(oldp+717,(((2U & ((IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 0x00000021U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
    bufp->fullSData(oldp+718,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
    bufp->fullSData(oldp+719,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
    bufp->fullCData(oldp+720,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
    bufp->fullSData(oldp+721,((0x0000ffffU & (0xbc83U 
                                              ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex))),16);
    bufp->fullSData(oldp+722,((0x0000ffffU & (0xa52cU 
                                              ^ (vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex 
                                                 >> 0x00000010U)))),16);
    bufp->fullSData(oldp+723,((0x0000ffffU & (0xa52cU 
                                              ^ ((((IData)(0x00005a1fU) 
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
                                                       ^ vlSelfRef.top_sim__DOT__u_core__DOT__alu_operand_a_ex)))))))),16);
    bufp->fullBit(oldp+724,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__auth_match));
    bufp->fullBit(oldp+725,(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__u_crypto_engine__DOT__is_tampered));
    bufp->fullQData(oldp+726,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[0]),34);
    bufp->fullQData(oldp+728,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_d_ex_i[1]),34);
    bufp->fullBit(oldp+730,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
    bufp->fullBit(oldp+731,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
    bufp->fullBit(oldp+732,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
    bufp->fullBit(oldp+733,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
    bufp->fullBit(oldp+734,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
    bufp->fullBit(oldp+735,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
    bufp->fullBit(oldp+736,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    bufp->fullBit(oldp+737,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
    bufp->fullBit(oldp+738,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
    bufp->fullBit(oldp+739,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
    bufp->fullBit(oldp+740,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
    bufp->fullBit(oldp+741,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
    bufp->fullBit(oldp+742,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    bufp->fullBit(oldp+743,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    bufp->fullCData(oldp+744,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
    bufp->fullCData(oldp+745,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
    bufp->fullBit(oldp+746,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
    bufp->fullBit(oldp+747,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
    bufp->fullCData(oldp+748,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
    bufp->fullCData(oldp+749,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
    bufp->fullBit(oldp+750,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
    bufp->fullBit(oldp+751,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
    bufp->fullBit(oldp+752,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
    bufp->fullBit(oldp+753,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
    bufp->fullBit(oldp+754,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    bufp->fullBit(oldp+755,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
    bufp->fullBit(oldp+756,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
    bufp->fullBit(oldp+757,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
    bufp->fullBit(oldp+758,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
    bufp->fullBit(oldp+759,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
    bufp->fullBit(oldp+760,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
    bufp->fullBit(oldp+761,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
    bufp->fullBit(oldp+762,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
    bufp->fullBit(oldp+763,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
    bufp->fullBit(oldp+764,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
    bufp->fullBit(oldp+765,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
    bufp->fullBit(oldp+766,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
    bufp->fullBit(oldp+767,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
    bufp->fullCData(oldp+768,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
    bufp->fullCData(oldp+769,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
    bufp->fullCData(oldp+770,(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
    bufp->fullBit(oldp+771,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid_raw));
    bufp->fullIData(oldp+772,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
    bufp->fullBit(oldp+773,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
    bufp->fullBit(oldp+774,((3U != (3U & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
    bufp->fullBit(oldp+775,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT____Vcellinp__compressed_decoder_i__valid_i));
    bufp->fullCData(oldp+776,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__1__KET__) 
                                << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d__BRA__0__KET__))),3);
    bufp->fullIData(oldp+777,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
    bufp->fullBit(oldp+778,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
    bufp->fullBit(oldp+779,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
    bufp->fullBit(oldp+780,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
    bufp->fullBit(oldp+781,(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
    bufp->fullCData(oldp+782,((3U & (IData)((vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+783,((((0U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                              & (0U != (3U & (IData)(
                                                     (vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U))))) 
                             | (IData)(((1U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                                        & (6ULL == 
                                           (6ULL & vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))))));
    bufp->fullBit(oldp+784,(vlSelfRef.clk));
    bufp->fullBit(oldp+785,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+786,(vlSelfRef.alert_major_o));
    bufp->fullIData(oldp+787,(vlSelfRef.sensor_data_live_o),32);
    bufp->fullIData(oldp+788,(((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                ? ((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                    ? ((0xffff0000U 
                                        & ((0xffff0000U 
                                            & ((IData)(0x00005a1fU) 
                                               + ((IData)(0x00009e37U) 
                                                  * 
                                                  (0x0000ffffU 
                                                   & (0x19d9U 
                                                      ^ 
                                                      ((0x00000090U 
                                                        > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                        ? 0x000000ffU
                                                        : 0x000004a2U)))))) 
                                           ^ (((IData)(0x5a1fU) 
                                               + ((IData)(0x00009e37U) 
                                                  * 
                                                  (0x0000ffffU 
                                                   & (0x19d9U 
                                                      ^ 
                                                      ((0x00000090U 
                                                        > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                        ? 0x000000ffU
                                                        : 0x000004a2U))))) 
                                              << 0x00000010U))) 
                                       | (0x0000ffffU 
                                          & (0xbc83U 
                                             ^ ((0x00000090U 
                                                 > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                 ? 0x000000ffU
                                                 : 0x000004a2U))))
                                    : 0U) : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_en_vrfsens)
                                              ? vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__crypto_decrypted_data
                                              : ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                  ? 
                                                 ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__div_sel_ex)
                                                   ? (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U])
                                                   : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                                  : vlSelfRef.top_sim__DOT__u_core__DOT__ex_block_i__DOT__alu_result)))),32);
    bufp->fullBit(oldp+789,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
    bufp->fullBit(oldp+790,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
    bufp->fullBit(oldp+791,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__crypto_shutdown)) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_req_int))));
    bufp->fullBit(oldp+792,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id))));
    bufp->fullBit(oldp+793,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))));
    bufp->fullBit(oldp+794,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->fullBit(oldp+795,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->fullIData(oldp+796,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_mtvec_init)
                                ? 1U : (1U | (0xffffff00U 
                                              & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->fullCData(oldp+797,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                ? (5U & vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
    bufp->fullIData(oldp+798,((1U | ((((((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                                          << 2U)) | 
                                        ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_is_compressed_id)) 
                                          << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_tbranch))) 
                                       << 9U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_branch) 
                                                  << 8U) 
                                                 | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_jump) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_store) 
                                                       << 6U)))) 
                                     | ((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_load) 
                                          << 5U) | 
                                         ((((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                            & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_in_ready)) 
                                           << 4U) | 
                                          (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                            & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__lsu_resp_valid)) 
                                               & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                           << 3U))) 
                                        | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__perf_instr_ret_wb) 
                                           << 2U))))),32);
    bufp->fullIData(oldp+799,((((((((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec) 
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
    bufp->fullIData(oldp+800,(((0x41U == (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                ? ((0xffff0000U & (
                                                   (0xffff0000U 
                                                    & ((IData)(0x00005a1fU) 
                                                       + 
                                                       ((IData)(0x00009e37U) 
                                                        * 
                                                        (0x0000ffffU 
                                                         & (0x19d9U 
                                                            ^ 
                                                            ((0x00000090U 
                                                              > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                              ? 0x000000ffU
                                                              : 0x000004a2U)))))) 
                                                   ^ 
                                                   (((IData)(0x5a1fU) 
                                                     + 
                                                     ((IData)(0x00009e37U) 
                                                      * 
                                                      (0x0000ffffU 
                                                       & (0x19d9U 
                                                          ^ 
                                                          ((0x00000090U 
                                                            > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                            ? 0x000000ffU
                                                            : 0x000004a2U))))) 
                                                    << 0x00000010U))) 
                                   | (0x0000ffffU & 
                                      (0xbc83U ^ ((0x00000090U 
                                                   > vlSelfRef.top_sim__DOT__fetch_addr_q)
                                                   ? 0x000000ffU
                                                   : 0x000004a2U))))
                                : 0U)),32);
    bufp->fullBit(oldp+801,(((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__instr_valid_clear)) 
                             & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->fullBit(oldp+802,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                             & ((~ ((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                    | (0x0341U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U)))) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->fullBit(oldp+803,(((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                             | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                                 & ((~ ((0x0340U == 
                                         (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U)) 
                                        | (0x0341U 
                                           == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U)))) 
                                    & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))) 
                                & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->fullBit(oldp+804,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__csr_op_en) 
                              & ((~ ((0x0340U == (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)) 
                                     | (0x0341U == 
                                        (vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)))) 
                                 & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__cs_registers_i__DOT__csr_wr))) 
                             & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->fullIData(oldp+805,(((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
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
    bufp->fullBit(oldp+806,((1U & ((4U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_mux_id))
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
    bufp->fullBit(oldp+807,((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                             & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                 >> 1U) & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                           & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__))))));
    bufp->fullIData(oldp+808,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                 ? vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr
                                 : (0xfffffffcU & vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_ha19af6fb_0_3) 
                                  << 2U))),32);
    bufp->fullBit(oldp+809,((1U & (~ (3U == (3U & (
                                                   ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U))))))))));
    __Vtemp_4[0U] = vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__31__03a0__KET__;
    __Vtemp_4[1U] = (IData)((((QData)((IData)(vlSelfRef.top_sim__DOT__instr_rdata)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__))));
    __Vtemp_4[2U] = (IData)(((((QData)((IData)(vlSelfRef.top_sim__DOT__instr_rdata)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d__BRA__63__03a32__KET__))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+810,(__Vtemp_4),96);
    bufp->fullCData(oldp+813,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__2__KET__) 
                                << 2U) | (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__1__KET__) 
                                           << 1U) | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en__BRA__0__KET__)))),3);
    bufp->fullIData(oldp+814,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                    << 0x00000010U) 
                                   | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                      >> 0x00000010U))
                                : ((vlSelfRef.top_sim__DOT__instr_rdata 
                                    << 0x00000010U) 
                                   | (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                      >> 0x00000010U)))),32);
    bufp->fullBit(oldp+815,(((2U & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                              ? (((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                  & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)) 
                                 | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__))
                              : (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err))));
    bufp->fullBit(oldp+816,((((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                              >> 1U) & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__0__KET__)) 
                                        & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q__BRA__1__KET__)))));
    bufp->fullBit(oldp+817,((1U & (((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) | ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->fullIData(oldp+818,((0x7fffffffU & ((IData)(vlSelfRef.top_sim__DOT__u_core__DOT__pc_set)
                                               ? (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                  >> 1U)
                                               : (vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.top_sim__DOT__u_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->fullBit(oldp+819,((IData)(((0U == (0x00000f80U 
                                             & vlSelfRef.top_sim__DOT__u_core__DOT__instr_rdata_id)) 
                                     & (IData)(vlSelfRef.top_sim__DOT__rf_we_wb)))));
}
