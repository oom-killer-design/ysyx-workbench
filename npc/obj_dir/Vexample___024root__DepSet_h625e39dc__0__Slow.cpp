// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexample.h for the primary calling header

#include "verilated.h"

#include "Vexample__Syms.h"
#include "Vexample___024root.h"

VL_ATTR_COLD void Vexample___024root___eval_initial__TOP(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h3d96c853__0;
    // Body
    vlSelf->top__DOT__count_c = 0U;
    if ((0U != VL_TESTPLUSARGS_I(std::string{"trace"}))) {
        __Vtemp_h3d96c853__0[0U] = 0x2e766364U;
        __Vtemp_h3d96c853__0[1U] = 0x64756d70U;
        __Vtemp_h3d96c853__0[2U] = 0x6f67732fU;
        __Vtemp_h3d96c853__0[3U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_h3d96c853__0));
        vlSymsp->_traceDumpOpen();
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexample___024root___dump_triggers__stl(Vexample___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexample___024root___eval_triggers__stl(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexample___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
