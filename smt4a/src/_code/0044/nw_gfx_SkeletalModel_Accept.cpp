/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SkeletalModel_Accept` (_code @ 0x446ab8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_SkeletalModel_Accept(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  (**(romwright_code **)(*param_2 + 0x1c))(param_2,param_1);
  puVar2 = *(unsigned int **)(param_1 + 0x1c);
  for (puVar1 = *(unsigned int **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(romwright_code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}

} /* extern "C" */
