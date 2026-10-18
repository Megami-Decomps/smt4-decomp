/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4094` (_code @ 0x3e4094, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003e4094(unsigned int param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (in_s0 != -1.0f) {
    if ((~(unsigned int)param_2[0xf] & 0x10) != 0) {
      *param_2 = *param_2 + *param_3 * in_s0;
      param_2[1] = param_2[1] + param_3[1] * in_s0;
      param_2[2] = param_2[2] + param_3[2] * in_s0;
      param_2[4] = param_2[4] + param_3[4] * in_s0;
      param_2[5] = param_2[5] + param_3[5] * in_s0;
      param_2[6] = param_2[6] + param_3[6] * in_s0;
    }
    else {
      *param_2 = *param_3 * in_s0;
      param_2[1] = param_3[1] * in_s0;
      param_2[2] = param_3[2] * in_s0;
      param_2[4] = param_3[4] * in_s0;
      param_2[5] = param_3[5] * in_s0;
      param_2[6] = param_3[6] * in_s0;
    }
    param_2[0xf] = (float)(((unsigned int)param_2[0xf] & 0xffffffef) | 0x800);
  }
  return;
}
