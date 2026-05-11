// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_pkg.h for the primary calling header

#ifndef VERILATED_VIBEX_PKG_IBEX_PKG_H_
#define VERILATED_VIBEX_PKG_IBEX_PKG_H_  // guard

#include "verilated.h"


class Vibex_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_pkg_ibex_pkg final {
  public:

    // INTERNAL VARIABLES
    Vibex_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*33:0*/, 16> __PVT__PmpAddrRst = {{
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL,
        0ULL, 0ULL
    }};

    // CONSTRUCTORS
    Vibex_pkg_ibex_pkg();
    ~Vibex_pkg_ibex_pkg();
    void ctor(Vibex_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vibex_pkg_ibex_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
