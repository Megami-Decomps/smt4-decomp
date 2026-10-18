/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2a78` (_code @ 0x1c2a78, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001c2a78(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = 0;
  for (; (temp_v0 < *(unsigned int *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(unsigned int *)(param_1 + temp_v0 * 0x24 + 0x2080) = in_s0;
    }
    temp_v0 = temp_v0 + 1;
  }
  return;
}
