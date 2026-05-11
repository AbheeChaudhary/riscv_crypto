// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim.h for the primary calling header

#include "Vtop_sim__pch.h"

void Vtop_sim___024unit___ctor_var_reset(Vtop_sim___024unit* vlSelf);

Vtop_sim___024unit::Vtop_sim___024unit() = default;
Vtop_sim___024unit::~Vtop_sim___024unit() = default;

void Vtop_sim___024unit::ctor(Vtop_sim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_sim___024unit___ctor_var_reset(this);
}

void Vtop_sim___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_sim___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
