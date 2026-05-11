// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_pkg__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_pkg::Vibex_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_pkg__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , __PVT__ibex_pkg{vlSymsp->TOP.__PVT__ibex_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vibex_pkg::Vibex_pkg(const char* _vcname__)
    : Vibex_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_pkg::~Vibex_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_pkg___024root___eval_debug_assertions(Vibex_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_pkg___024root___eval_static(Vibex_pkg___024root* vlSelf);
void Vibex_pkg___024root___eval_initial(Vibex_pkg___024root* vlSelf);
void Vibex_pkg___024root___eval_settle(Vibex_pkg___024root* vlSelf);
void Vibex_pkg___024root___eval(Vibex_pkg___024root* vlSelf);

void Vibex_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_pkg___024root___eval_static(&(vlSymsp->TOP));
        Vibex_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_pkg___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_pkg::eventsPending() { return false; }

uint64_t Vibex_pkg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_pkg___024root___eval_final(Vibex_pkg___024root* vlSelf);

VL_ATTR_COLD void Vibex_pkg::final() {
    Vibex_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_pkg::hierName() const { return vlSymsp->name(); }
const char* Vibex_pkg::modelName() const { return "Vibex_pkg"; }
unsigned Vibex_pkg::threads() const { return 1; }
void Vibex_pkg::prepareClone() const { contextp()->prepareClone(); }
void Vibex_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vibex_pkg::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_pkg___024root__trace_decl_types(VerilatedVcd* tracep);

void Vibex_pkg___024root__trace_init_top(Vibex_pkg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_pkg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_pkg___024root*>(voidSelf);
    Vibex_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_pkg___024root__trace_decl_types(tracep);
    Vibex_pkg___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_pkg___024root__trace_register(Vibex_pkg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_pkg::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_pkg::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1046);
    Vibex_pkg___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
