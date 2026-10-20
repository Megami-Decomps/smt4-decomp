/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a79a8` (_code @ 0x1a79a8, 0x36c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002881bc(void);
int FUN_0028836c(void);

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int FUN_001d1c74(void);
/* Supplied declaration required: FUN_002881bc. */
/* Supplied declaration required: FUN_0028836c. */
extern int FUN_002c501c(void);


void FUN_001a79a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  temp_v0 = FUN_002c501c();
  temp_v13 = 40.743664f;
  temp_v7 = -1.0f;
  temp_v10 = 1.0f;
  temp_v6 = 0.0f;
  if (*(char *)(param_1 + 0x17) != '\0') {
    temp_v4 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
    temp_v2 = *(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc);
    temp_v5 = 1.0f / romwright_sqrt_4(temp_v4 * temp_v4 + 0.0f + temp_v2 * temp_v2);
    temp_v4 = temp_v4 * temp_v5;
    temp_v2 = temp_v2 * temp_v5;
    temp_v5 = temp_v5 * 0.0f;
    temp_v3 = temp_v4 * 0.0f + temp_v5 * 0.0f + temp_v2 * -1.0f;
    if (temp_v3 == 1.0f) {
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    else if (temp_v3 == -1.0f) {
      *(unsigned int *)(param_1 + 0x28) = 0x43000000;
    }
    else {
      FUN_0028836c();
      *(float *)(param_1 + 0x28) = temp_v3 * temp_v13;
      if (temp_v7 * temp_v4 - temp_v6 * temp_v2 < temp_v6) {
        *(float *)(param_1 + 0x28) = -*(float *)(param_1 + 0x28);
      }
    }
    temp_v7 = *(float *)(param_1 + 0x18) - *(float *)(temp_v0 + 4);
    temp_v13 = *(float *)(param_1 + 0x20) - *(float *)(temp_v0 + 0xc);
    temp_v3 = romwright_sqrt_4(temp_v7 * temp_v7 + temp_v6 * temp_v6 + temp_v13 * temp_v13);
    temp_v10 = temp_v10 / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v6 * temp_v6 + temp_v13 * temp_v13);
    temp_v6 = temp_v7 * temp_v10 * temp_v4 + temp_v6 * temp_v10 * temp_v5 + temp_v13 * temp_v10 * temp_v2;
    if (temp_v6 != 1.0f && temp_v6 != -1.0f) {
      temp_v3 = temp_v3 * temp_v6;
    }
  }
  else {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * 0.1f;
    temp_v5 = *(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc);
    temp_v9 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
    temp_v3 = romwright_sqrt_4(temp_v9 * temp_v9 + 0.0f + temp_v5 * temp_v5);
    temp_v2 = 1.0f / temp_v3;
    temp_v11 = temp_v9 * temp_v2;
    temp_v12 = temp_v2 * 0.0f;
    temp_v2 = temp_v5 * temp_v2;
    temp_v4 = temp_v11 * 0.0f + temp_v12 * 0.0f + temp_v2 * -1.0f;
    temp_v10 = temp_v6;
    if (temp_v4 != 1.0f) {
      if (temp_v4 == -1.0f) {
        *(unsigned int *)(param_1 + 0x28) = 0x43000000;
      }
      else {
        FUN_0028836c();
        *(float *)(param_1 + 0x28) = temp_v4 * temp_v13;
        if (temp_v7 * temp_v11 - temp_v10 * temp_v2 < temp_v10) {
          temp_v6 = -*(float *)(param_1 + 0x28);
          *(float *)(param_1 + 0x28) = temp_v6;
        }
      }
    }
    else {
      *(float *)(param_1 + 0x28) = temp_v6;
    }
    temp_v7 = temp_v10 * 0.024541229f + 0.0f;
    temp_v6 = temp_v10 * -0.0003011813f + 1.0f;
    temp_v13 = -(temp_v10 * -0.0003011813f) + -1.0f;
    temp_v4 = temp_v10 * -0.024541229f + 0.0f;
    *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(temp_v0 + 0x10);
    temp_v8 = temp_v6 * temp_v4 * temp_v9 + (temp_v7 * temp_v6 * temp_v13 - temp_v6 * temp_v7) * temp_v10 +
            (temp_v7 * temp_v7 + temp_v6 * temp_v6 * temp_v13) * temp_v5;
    temp_v14 = temp_v7 * temp_v4 * temp_v9 + (temp_v6 * temp_v6 + temp_v7 * temp_v7 * temp_v13) * temp_v10 +
             (temp_v6 * temp_v7 * temp_v13 - temp_v7 * temp_v6) * temp_v5;
    temp_v6 = -temp_v13 * temp_v9 + temp_v7 * temp_v4 * temp_v10 + temp_v6 * temp_v4 * temp_v5;
    temp_v1 = FUN_001d1c74();
    if (temp_v1 != 0) {
      *(float *)(param_1 + 0x1c) = temp_v10;
    }
    else {
      *(float *)(param_1 + 0x1c) = *(float *)(temp_v0 + 0x14) - 110.0f;
    }
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(temp_v0 + 0x18);
    temp_v10 = *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + temp_v8 * temp_v10;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + temp_v14 * temp_v10;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + temp_v6 * temp_v10;
    temp_v6 = -*(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + temp_v11 * temp_v6;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + temp_v12 * temp_v6;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + temp_v2 * temp_v6;
    temp_v3 = temp_v3 - *(float *)(param_1 + 0x30);
  }
  temp_v6 = *(float *)(temp_v0 + 0x28) * 0.5f * 0.0055555557f * 3.1415927f;
  FUN_002881bc();
  *(float *)(param_1 + 0x24) = temp_v3 / (120.0f / temp_v6);
  return;
}

} /* extern "C" */
