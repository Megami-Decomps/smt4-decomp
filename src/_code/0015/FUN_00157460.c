/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157460` (_code @ 0x157460, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00157460(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  float temp_v0;
  
  temp_v0 = in_s0 + 1.0f;
  if (in_s0 + 1.0f < 0.0f) {
    temp_v0 = 0.0f;
  }
  if (*(float *)(param_1 + 0x44) != temp_v0) {
    *(float *)(param_1 + 0x44) = temp_v0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}
