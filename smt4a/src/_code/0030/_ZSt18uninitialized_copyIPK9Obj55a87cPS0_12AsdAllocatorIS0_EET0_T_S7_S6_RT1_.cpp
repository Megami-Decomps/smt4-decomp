/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZSt18uninitialized_copyIPK9Obj55a87cPS0_12AsdAllocatorIS0_EET0_T_S7_S6_RT1_` (_code @ 0x30fd40, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(unsigned int, int, int);

/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_. */


int _ZSt18uninitialized_copyIPK9Obj55a87cPS0_12AsdAllocatorIS0_EET0_T_S7_S6_RT1_(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(param_4,param_3,param_1);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}

} /* extern "C" */
