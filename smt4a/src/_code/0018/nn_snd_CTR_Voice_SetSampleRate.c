/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetSampleRate` (_code @ 0x18a870, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_Voice_SetSampleRate(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = param_2;
  if (param_2 < 0) {
    temp_v0 = 0;
  }
  *(int *)(param_1 + 0x18) = temp_v0;
  temp_v0 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(temp_v0 + 0x20) = param_2;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 2;
  return;
}
