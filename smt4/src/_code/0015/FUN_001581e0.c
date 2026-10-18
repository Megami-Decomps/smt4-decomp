/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001581e0` (_code @ 0x1581e0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001581e0(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = 0;
  for (; (temp_v0 < *(unsigned int *)(param_1 + 0xd4) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(unsigned int *)(param_1 + temp_v0 * 0x20 + 0x1aec) = in_s0;
    }
    temp_v0 = temp_v0 + 1;
  }
  return;
}
