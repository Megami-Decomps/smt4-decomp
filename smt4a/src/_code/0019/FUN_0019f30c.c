/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f30c` (_code @ 0x19f30c, 0x230 bytes) from smt4a.cxi.
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
extern int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


unsigned int FUN_0019f30c(int param_1,unsigned int param_2,float *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v0 = *(int *)(param_1 + 0x210);
  temp_v1 = FUN_002e3390(param_2);
  temp_v0 = FUN_001a7a20(temp_v0 + 0x74,param_2,temp_v1);
  if (temp_v0 == 0xffff) {
    return 0;
  }
  pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x108) + 0x14) + temp_v0 * 0x30);
  temp_v3 = *pfVar3;
  temp_v4 = pfVar3[5];
  temp_v2 = pfVar3[10];
  temp_v7 = temp_v3 + temp_v4 + temp_v2;
  if (temp_v7 > 0.0f) {
    temp_v8 = pfVar3[2];
    temp_v5 = pfVar3[8];
    temp_v4 = pfVar3[4];
    temp_v6 = pfVar3[1];
    temp_v3 = romwright_sqrt_4(temp_v7 + 1.0f);
    temp_v2 = 0.5f / temp_v3;
    *param_3 = (pfVar3[9] - pfVar3[6]) * temp_v2;
    param_3[1] = (temp_v8 - temp_v5) * temp_v2;
    param_3[2] = (temp_v4 - temp_v6) * temp_v2;
    param_3[3] = temp_v3 * 0.5f;
  }
  else {
    if (temp_v4 > temp_v3) {
      if (temp_v2 <= temp_v4) {
        temp_v2 = romwright_sqrt_4((temp_v4 - (temp_v2 + temp_v3)) + 1.0f);
        temp_v3 = temp_v2 * 0.5f;
        if (temp_v2 != 0.0f) {
          temp_v2 = 0.5f / temp_v2;
        }
        temp_v8 = pfVar3[2];
        temp_v9 = pfVar3[8];
        temp_v6 = pfVar3[6];
        temp_v7 = pfVar3[9];
        temp_v4 = pfVar3[4];
        temp_v5 = pfVar3[1];
        param_3[1] = temp_v3;
        param_3[3] = (temp_v8 - temp_v9) * temp_v2;
        param_3[2] = (temp_v6 + temp_v7) * temp_v2;
        *param_3 = (temp_v4 + temp_v5) * temp_v2;
        return 1;
      }
    }
    else if (temp_v2 <= temp_v3) {
      temp_v2 = romwright_sqrt_4((temp_v3 - (temp_v4 + temp_v2)) + 1.0f);
      temp_v3 = temp_v2 * 0.5f;
      if (temp_v2 != 0.0f) {
        temp_v2 = 0.5f / temp_v2;
      }
      temp_v4 = pfVar3[9];
      temp_v7 = pfVar3[6];
      temp_v5 = pfVar3[1];
      temp_v6 = pfVar3[4];
      temp_v8 = pfVar3[2];
      temp_v9 = pfVar3[8];
      *param_3 = temp_v3;
      param_3[3] = (temp_v4 - temp_v7) * temp_v2;
      param_3[1] = (temp_v5 + temp_v6) * temp_v2;
      param_3[2] = (temp_v8 + temp_v9) * temp_v2;
      return 1;
    }
    temp_v2 = romwright_sqrt_4((temp_v2 - (temp_v3 + temp_v4)) + 1.0f);
    temp_v3 = temp_v2 * 0.5f;
    if (temp_v2 != 0.0f) {
      temp_v2 = 0.5f / temp_v2;
    }
    temp_v5 = pfVar3[4];
    temp_v9 = pfVar3[1];
    temp_v6 = pfVar3[8];
    temp_v8 = pfVar3[2];
    temp_v4 = pfVar3[9];
    temp_v7 = pfVar3[6];
    param_3[2] = temp_v3;
    param_3[3] = (temp_v5 - temp_v9) * temp_v2;
    *param_3 = (temp_v6 + temp_v8) * temp_v2;
    param_3[1] = (temp_v4 + temp_v7) * temp_v2;
  }
  return 1;
}
