/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_EnableMonoFilter` (_code @ 0x15a3e0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_Voice_EnableMonoFilter(int param_1,unsigned char param_2)

{
  int temp_v0;
  unsigned char temp_v1;
  
  if (param_2) {
    temp_v1 = *(unsigned char *)(param_1 + 7) | 1;
  }
  else {
    temp_v1 = *(unsigned char *)(param_1 + 7) & 0xfe;
  }
  *(unsigned char *)(param_1 + 7) = temp_v1;
  temp_v0 = *(int *)(param_1 + 0x68);
  *(unsigned char *)(temp_v0 + 0xf) = temp_v1;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 4;
  return;
}
