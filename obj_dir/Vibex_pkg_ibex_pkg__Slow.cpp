// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_pkg.h for the primary calling header

#include "Vibex_pkg__pch.h"

// Parameter definitions for Vibex_pkg_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_pkg_ibex_pkg::__PVT__PmpAddrRst;


void Vibex_pkg_ibex_pkg___ctor_var_reset(Vibex_pkg_ibex_pkg* vlSelf);

Vibex_pkg_ibex_pkg::Vibex_pkg_ibex_pkg() = default;
Vibex_pkg_ibex_pkg::~Vibex_pkg_ibex_pkg() = default;

void Vibex_pkg_ibex_pkg::ctor(Vibex_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vibex_pkg_ibex_pkg___ctor_var_reset(this);
}

void Vibex_pkg_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vibex_pkg_ibex_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
