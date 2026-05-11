// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_pkg.h for the primary calling header

#include "Vibex_pkg__pch.h"

// Parameter definitions for Vibex_pkg___024root
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_pkg___024root::top_sim__DOT__u_core__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_pkg___024root::top_sim__DOT__u_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vibex_pkg___024root___ctor_var_reset(Vibex_pkg___024root* vlSelf);

Vibex_pkg___024root::Vibex_pkg___024root(Vibex_pkg__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vibex_pkg___024root___ctor_var_reset(this);
}

void Vibex_pkg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_pkg___024root::~Vibex_pkg___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
