/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_InitializeWaveBuffer` (_code @ 0x2bd258, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_snd_CTR_InitializeWaveBuffer(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}
