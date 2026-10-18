/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7584` (_code @ 0x2b7584, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */


void FUN_002b7584(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_cr15, in_s6; 3 native warning(s); review required */
  unsigned int in_cr15;
  float temp_v0;
  float in_s6;
  
  param_1[4] = param_2[0xb] / param_2[10];
  param_1[5] = param_2[0xb] / (param_2[10] - 1.0f);
  temp_v0 = param_2[0xb] / (*param_2 * param_2[10]);
  *param_1 = (param_2[2] - 1.0f) * temp_v0;
  param_1[1] = (param_2[2] + 1.0f) * temp_v0;
  param_1[6] = param_2[10] * in_s6;
  coprocessor_store(0xf,in_cr15,param_1 + 0x1e);
  return;
}
