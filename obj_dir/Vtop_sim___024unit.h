// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_sim.h for the primary calling header

#ifndef VERILATED_VTOP_SIM___024UNIT_H_
#define VERILATED_VTOP_SIM___024UNIT_H_  // guard

#include "verilated.h"


class Vtop_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_sim___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtop_sim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_sim___024unit();
    ~Vtop_sim___024unit();
    void ctor(Vtop_sim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_sim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
