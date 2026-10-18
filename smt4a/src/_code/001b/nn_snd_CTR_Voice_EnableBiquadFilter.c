/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_EnableBiquadFilter` (_code @ 0x1bdbac, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x001c7c30. */


void nn_snd_CTR_Voice_EnableBiquadFilter(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = *(unsigned char *)(param_1 + 7) | 2;
  }
  else {
    temp_v0 = *(unsigned char *)(param_1 + 7) & 0xfd;
  }
  *(unsigned char *)(param_1 + 7) = temp_v0;
  func_0x001c7c30(*(unsigned int *)(param_1 + 0x68),temp_v0);
  return;
}
