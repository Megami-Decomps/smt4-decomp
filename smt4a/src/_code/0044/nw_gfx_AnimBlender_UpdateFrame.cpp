/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimBlender_UpdateFrame` (_code @ 0x443314, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_AnimBlender_UpdateFrame(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) >> 2) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + temp_v0 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 0x14))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) >> 2);
  }
  return;
}

} /* extern "C" */
