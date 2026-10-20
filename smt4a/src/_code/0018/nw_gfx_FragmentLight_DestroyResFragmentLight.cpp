/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_FragmentLight_DestroyResFragmentLight` (_code @ 0x18cdfc, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void nw_gfx_FragmentLight_DestroyResFragmentLight(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  piVar1 = (int *)(param_2 + 0x118);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    piVar1 = (int *)((int)piVar1 + temp_v0);
  }
  if (temp_v0 == 0) {
    piVar1 = (int *)0x0;
  }
  (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar1);
  if (*(int *)(param_2 + 0x11c) != 0) {
    temp_v1 = *(int *)(param_2 + 0x11c) + param_2 + 0x11c;
  }
  if (*(int *)(temp_v1 + 8) != 0 && *(int *)(temp_v1 + 8) + temp_v1 + 8 != 0) {
    (**(romwright_code **)(*param_1 + 0xc))();
  }
  (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v1);
  if (*(int *)(param_2 + 0xc) != 0 && *(int *)(param_2 + 0xc) + param_2 + 0xc != 0) {
    (**(romwright_code **)(*param_1 + 0xc))();
  }
                    /* WARNING: Could not recover jumptable at 0x0018cea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}

} /* extern "C" */
