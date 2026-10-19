/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetBiquadFilterCoefficients` (_code @ 0x1c7d00, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_Voice_SetBiquadFilterCoefficients(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0xc) = *param_2;
  *(unsigned int *)(param_1 + 0x10) = param_2[1];
  *(unsigned short *)(param_1 + 0x14) = *(unsigned short *)(param_2 + 2);
  temp_v0 = *(int *)(param_1 + 0x68);
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(param_1 + 0x10);
  *(unsigned short *)(temp_v0 + 0x1c) = *(unsigned short *)(param_1 + 0x14);
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 0x10;
  return;
}
