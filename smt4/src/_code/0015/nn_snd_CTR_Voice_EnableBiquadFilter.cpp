/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_EnableBiquadFilter` (_code @ 0x156400, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x0015a400(unsigned int, int);

/* Supplied declaration required: func_0x0015a400. */


void nn_snd_CTR_Voice_EnableBiquadFilter(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  if (param_2) {
    temp_v0 = *(unsigned char *)(param_1 + 7) | 2;
  }
  else {
    temp_v0 = *(unsigned char *)(param_1 + 7) & 0xfd;
  }
  *(unsigned char *)(param_1 + 7) = temp_v0;
  func_0x0015a400(*(unsigned int *)(param_1 + 0x68),temp_v0);
  return;
}

} /* extern "C" */
