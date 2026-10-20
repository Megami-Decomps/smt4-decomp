/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_UpdateFrame` (_code @ 0x459a58, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_gfx_SceneNode_UpdateFrame(int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x28);
  if ((temp_v1 != 0) && (temp_v0 = 0, 0 < (*(int *)(temp_v1 + 0x20) - *(int *)(temp_v1 + 0x1c)) >> 2)) {
    do {
      piVar1 = *(int **)(*(int *)(temp_v1 + 0x1c) + temp_v0 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 0x14))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (*(int *)(temp_v1 + 0x20) - *(int *)(temp_v1 + 0x1c)) >> 2);
  }
  return;
}

} /* extern "C" */
