/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e98ac` (_code @ 0x3e98ac, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_003e98ac(int *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = *param_3;
  switch(*(unsigned int *)(*param_1 + 0x14)) {
  case 0:
    pfVar1 = (float *)(param_2 + 0xbc);
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    temp_v3 = param_3[3];
    break;
  case 1:
    pfVar1 = (float *)(param_2 + 0xcc);
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    temp_v3 = param_3[3];
    break;
  case 2:
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    temp_v3 = 1.0f / romwright_sqrt_4(temp_v0 * temp_v0 + temp_v1 * temp_v1 + temp_v2 * temp_v2);
    *(float *)(param_2 + 0xe4) = temp_v2 * temp_v3;
    *(float *)(param_2 + 0xdc) = temp_v0 * temp_v3;
    *(float *)(param_2 + 0xe0) = temp_v1 * temp_v3;
    return;
  case 3:
    *(float *)(param_2 + 0xe8) = temp_v0;
    return;
  case 4:
    *(float *)(param_2 + 0xec) = temp_v0;
    return;
  case 5:
    *(float *)(param_2 + 0xf0) = temp_v0;
    return;
  case 6:
    *(float *)(param_2 + 0xf8) = temp_v0;
    return;
  case 7:
    *(float *)(param_2 + 0xfc) = temp_v0;
    return;
  default:
    return;
  }
  *pfVar1 = temp_v0;
  pfVar1[1] = temp_v1;
  pfVar1[2] = temp_v2;
  pfVar1[3] = temp_v3;
  return;
}
