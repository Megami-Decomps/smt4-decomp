/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetPitch` (_code @ 0x1a1850, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x001b6368. */


void nn_snd_CTR_Voice_SetPitch(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  float temp_v0;
  
  temp_v0 = 0.0f;
  if (0.0f <= in_s0) {
    temp_v0 = in_s0;
  }
  *(float *)(param_1 + 0x1c) = temp_v0;
  func_0x001b6368(*(unsigned int *)(param_1 + 0x68));
  return;
}
