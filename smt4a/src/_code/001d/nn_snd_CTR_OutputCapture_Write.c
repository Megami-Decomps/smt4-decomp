/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_OutputCapture_Write` (_code @ 0x1d17c0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy. */


void nn_snd_CTR_OutputCapture_Write(int *param_1,short *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  rt_memcpy(*param_1 + param_1[3] * 4,param_2,param_3 << 2);
  temp_v0 = param_1[3];
  param_1[3] = temp_v0 + param_3;
  if (param_1[1] <= temp_v0 + param_3) {
    param_1[3] = 0;
  }
  return;
}
