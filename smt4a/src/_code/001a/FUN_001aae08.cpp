/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aae08` (_code @ 0x1aae08, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_VEC3Cross(float *, float *, float *);

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: nn_math_VEC3Cross. */


unsigned int FUN_001aae08(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 4 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float in_s0;
  float in_s1;
  float temp_v0;
  float in_s2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = 0.0f;
  if (in_s0 != 0.0f) {
    *param_1 = *param_1 & 0xfd7fffff;
    param_1[1] = (unsigned int)((float)param_1[1] / in_s0);
    param_1[2] = (unsigned int)((float)param_1[2] / in_s0);
    param_1[3] = (unsigned int)((float)param_1[3] / in_s0);
  }
  if (in_s2 != 0.0f) {
    *param_1 = *param_1 & 0xf3ffffff;
    param_1[7] = (unsigned int)((float)param_1[7] / in_s2);
    param_1[0xb] = (unsigned int)((float)param_1[0xb] / in_s2);
    param_1[0xf] = (unsigned int)((float)param_1[0xf] / in_s2);
  }
  if (in_s1 != 0.0f) {
    pfVar1 = (float *)(param_1 + 4);
    pfVar3 = (float *)(param_1 + 8);
    *param_1 = *param_1 & 0xf3ffffff;
    pfVar2 = (float *)(param_1 + 0xc);
    nn_math_VEC3Cross(pfVar2,pfVar1,pfVar3);
    temp_v2 = *pfVar1;
    temp_v0 = temp_v2 * temp_v2 + (float)param_1[5] * (float)param_1[5] +
            (float)param_1[6] * (float)param_1[6];
    temp_v1 = *pfVar2 * *pfVar2 + (float)param_1[0xd] * (float)param_1[0xd] +
            (float)param_1[0xe] * (float)param_1[0xe];
    if (temp_v0 == temp_v3 || temp_v1 == temp_v3) {
      *pfVar1 = 1.0f;
      param_1[5] = (unsigned int)temp_v3;
      param_1[6] = (unsigned int)temp_v3;
      *pfVar3 = temp_v3;
      param_1[9] = 0x3f800000;
      param_1[10] = (unsigned int)temp_v3;
      *pfVar2 = temp_v3;
      param_1[0xd] = (unsigned int)temp_v3;
      param_1[0xe] = 0x3f800000;
      return 0;
    }
    temp_v3 = 1.0f / romwright_sqrt_4(temp_v0);
    *pfVar1 = temp_v2 * temp_v3;
    param_1[5] = (unsigned int)((float)param_1[5] * temp_v3);
    param_1[6] = (unsigned int)((float)param_1[6] * temp_v3);
    temp_v3 = 1.0f / romwright_sqrt_4(temp_v1);
    *pfVar2 = *pfVar2 * temp_v3;
    param_1[0xd] = (unsigned int)((float)param_1[0xd] * temp_v3);
    param_1[0xe] = (unsigned int)((float)param_1[0xe] * temp_v3);
    nn_math_VEC3Cross(pfVar3,pfVar2,pfVar1);
  }
  return 1;
}

} /* extern "C" */
