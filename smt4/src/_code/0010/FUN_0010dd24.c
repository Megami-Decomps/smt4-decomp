/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dd24` (_code @ 0x10dd24, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);


void FUN_0010dd24(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  
  if ((((param_1 != 0) && (0.0f <= in_s0)) && ((int)in_s0 < 0x3f800001)) &&
     ((0.0f <= in_s1 && ((int)in_s1 < 0x3f800001)))) {
    *(float *)(param_1 + 0x3c) = in_s1;
    *(float *)(param_1 + 0x40) = in_s0;
    nn_snd_CTR_Voice_SetMixParam(*(unsigned int *)(param_1 + 0x38),param_1 + 0x3c);
    return;
  }
  return;
}
