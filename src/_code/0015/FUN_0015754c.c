/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015754c` (_code @ 0x15754c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0015754c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  
  temp_v0 = param_1 + param_2 * 4;
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  if (*(float *)(temp_v0 + 0x48) != in_s0) {
    *(float *)(temp_v0 + 0x48) = in_s0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}
