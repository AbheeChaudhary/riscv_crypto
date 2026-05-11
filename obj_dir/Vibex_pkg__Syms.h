// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_PKG__SYMS_H_
#define VERILATED_VIBEX_PKG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_pkg.h"

// INCLUDE MODULE CLASSES
#include "Vibex_pkg___024root.h"
#include "Vibex_pkg___024unit.h"
#include "Vibex_pkg_ibex_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vibex_pkg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_pkg* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_pkg___024root            TOP;
    Vibex_pkg_ibex_pkg             TOP__ibex_pkg;

    // CONSTRUCTORS
    Vibex_pkg__Syms(VerilatedContext* contextp, const char* namep, Vibex_pkg* modelp);
    ~Vibex_pkg__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
