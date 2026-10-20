/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_ulcd_CTR_StereoCamera_SetBaseFrustum` (_code @ 0x2b7244, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(float *param_1,float *param_2)

{
  float temp_v0;
  
  param_1[4] = param_2[0xb] / param_2[10];
  param_1[5] = param_2[0xb] / (param_2[10] - 1.0f);
  temp_v0 = param_2[0xb] / (*param_2 * param_2[10]);
  *param_1 = (param_2[2] - 1.0f) * temp_v0;
  param_1[1] = (param_2[2] + 1.0f) * temp_v0;
  temp_v0 = param_2[0xb] / (param_2[5] * param_2[10]);
  param_1[3] = (param_2[6] + 1.0f) * temp_v0;
  param_1[2] = (param_2[6] - 1.0f) * temp_v0;
  return;
}

} /* extern "C" */
