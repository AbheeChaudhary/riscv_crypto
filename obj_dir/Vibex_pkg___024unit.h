// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_pkg.h for the primary calling header

#ifndef VERILATED_VIBEX_PKG___024UNIT_H_
#define VERILATED_VIBEX_PKG___024UNIT_H_  // guard

#include "verilated.h"


class Vibex_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_pkg___024unit final {
  public:

    // INTERNAL VARIABLES
    Vibex_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vibex_pkg___024unit();
    ~Vibex_pkg___024unit();
    void ctor(Vibex_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vibex_pkg___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
