/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bb08` (_code @ 0x29bb08, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0029bb08(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(float *)(temp_v0 + 0x78) = in_s0;
  if (0 < *(int *)(temp_v0 + 0x34)) {
    if (*(int *)(temp_v0 + 0x4c) != 0) {
      *(float *)(*(int *)(temp_v0 + 0x4c) + 0x40) = *(float *)(temp_v0 + 0x74) * in_s0;
    }
  }
  return;
}
