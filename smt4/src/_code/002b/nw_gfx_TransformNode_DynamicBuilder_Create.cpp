/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformNode_DynamicBuilder_Create` (_code @ 0x2bf7ac, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *_ZN9Obj421230C1EP18AsdAllocatorObjectP12Obj421230ResPv(int, int *, unsigned int, unsigned int);


int * nw_gfx_TransformNode_DynamicBuilder_Create(unsigned int param_1,int *param_2)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x148,4);
  if (temp_v0 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)_ZN9Obj421230C1EP18AsdAllocatorObjectP12Obj421230ResPv(temp_v0,param_2,0,param_1);
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}

} /* extern "C" */
