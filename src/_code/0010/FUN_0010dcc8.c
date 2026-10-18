/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dcc8` (_code @ 0x10dcc8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001537c4. */


void FUN_0010dcc8(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float in_s0;
  float in_s1;
  
  if ((((param_1 != 0) && (0.0f <= in_s0)) && ((int)in_s0 < 0x3f800001)) &&
     ((0.0f <= in_s1 && ((int)in_s1 < 0x3f800001)))) {
    *(float *)(param_1 + 0x3c) = in_s1;
    *(float *)(param_1 + 0x40) = in_s0;
    FUN_001537c4(*(unsigned int *)(param_1 + 0x38),param_1 + 0x3c);
    return;
  }
  return;
}
