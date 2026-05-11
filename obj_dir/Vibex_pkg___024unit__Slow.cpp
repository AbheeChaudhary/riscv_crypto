// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_pkg.h for the primary calling header

#include "Vibex_pkg__pch.h"

void Vibex_pkg___024unit___ctor_var_reset(Vibex_pkg___024unit* vlSelf);

Vibex_pkg___024unit::Vibex_pkg___024unit() = default;
Vibex_pkg___024unit::~Vibex_pkg___024unit() = default;

void Vibex_pkg___024unit::ctor(Vibex_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vibex_pkg___024unit___ctor_var_reset(this);
}

void Vibex_pkg___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vibex_pkg___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
