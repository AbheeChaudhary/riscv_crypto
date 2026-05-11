// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_pkg__pch.h"

Vibex_pkg__Syms::Vibex_pkg__Syms(VerilatedContext* contextp, const char* namep, Vibex_pkg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(344);
    // Setup sub module instances
    TOP__ibex_pkg.ctor(this, "ibex_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ibex_pkg = &TOP__ibex_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ibex_pkg.__Vconfigure(true);
    // Setup scopes
}

Vibex_pkg__Syms::~Vibex_pkg__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__ibex_pkg.dtor();
}
