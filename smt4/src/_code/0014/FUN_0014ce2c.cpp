/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ce2c` (_code @ 0x14ce2c, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_0014ce2c(int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v1 = 0;
  while( 1 ) {
    puVar1 = (unsigned int *)(param_1 + 0xc + temp_v1 * 4);
    temp_v4 = puVar1[3];
    temp_v7 = puVar1[6];
    temp_v0 = param_1 + temp_v1 * 0xc;
    *(unsigned int *)(temp_v0 + 0x60) = *puVar1;
    *(unsigned int *)(temp_v0 + 100) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x68) = temp_v7;
    temp_v5 = *(float *)(temp_v0 + 0x60);
    temp_v2 = 0;
    if (temp_v5 == 0.0f) {
      temp_v2 = *(float *)(temp_v0 + 100) == 0.0f;
    }
    temp_v3 = 0;
    if (temp_v2) {
      temp_v3 = *(float *)(temp_v0 + 0x68) == 0.0f;
    }
    if (temp_v3) break;
    temp_v6 = *(float *)(temp_v0 + 100);
    temp_v9 = *(float *)(temp_v0 + 0x68);
    temp_v1 = temp_v1 + 1;
    temp_v8 = 1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v6 * temp_v6 + temp_v9 * temp_v9);
    *(float *)(temp_v0 + 0x60) = temp_v5 * temp_v8;
    *(float *)(temp_v0 + 100) = temp_v6 * temp_v8;
    *(float *)(temp_v0 + 0x68) = temp_v9 * temp_v8;
    if (temp_v1 >= 3) {
      temp_v5 = *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x68) * temp_v5;
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x60) * temp_v5;
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 100) * temp_v5;
      temp_v5 = *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x6c) * temp_v5;
      *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x70) * temp_v5;
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x74) * temp_v5;
      temp_v5 = *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x78) * temp_v5;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x7c) * temp_v5;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x80) * temp_v5;
      return;
    }
  }
  return;
}

} /* extern "C" */
