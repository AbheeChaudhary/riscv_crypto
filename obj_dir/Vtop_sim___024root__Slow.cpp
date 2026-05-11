// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "Vtop_sim__pch.h"

// Parameter definitions for Vtop_sim___024root
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_sim___024root::top_sim__DOT__u_core__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vtop_sim___024root::top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vtop_sim___024root___ctor_var_reset(Vtop_sim___024root* vlSelf);

Vtop_sim___024root::Vtop_sim___024root(Vtop_sim__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop_sim___024root___ctor_var_reset(this);
}

void Vtop_sim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_sim___024root::~Vtop_sim___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
