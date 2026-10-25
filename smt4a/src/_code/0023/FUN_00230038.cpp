/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230038` (_code @ 0x230038, 0x498 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/CalleeContracts.h"

extern "C" {

int FUN_001bbde0(void);
int FUN_0050dda4(void);

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int btlMainIsRunning(void);
/* Supplied declaration required: FUN_001bbde0. */
/* Supplied declaration required: FUN_0050dda4. */


void FUN_00230038(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
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
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  
  temp_v0 = FUN_00152f54();
  temp_v12 = -1.0f;
  temp_v18 = 57.295776f;
  temp_v17 = 0x433400003f800000;
  temp_v11 = 0.0f;
  if (*(char *)((int)param_1 + 0x17) != '\0') {
    temp_v5 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
    temp_v3 = *(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc);
    temp_v6 = 1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + 0.0f + temp_v3 * temp_v3);
    temp_v5 = temp_v5 * temp_v6;
    temp_v3 = temp_v3 * temp_v6;
    temp_v6 = temp_v6 * 0.0f;
    temp_v4 = temp_v5 * 0.0f + temp_v6 * 0.0f + temp_v3 * -1.0f;
    if (temp_v4 == 1.0f) {
      param_1[10] = 0;
    }
    else if (temp_v4 == -1.0f) {
      param_1[10] = 0x43340000;
    }
    else {
      FUN_001bbde0();
      param_1[10] = (int)(temp_v4 * temp_v18);
      if (temp_v12 * temp_v5 - temp_v11 * temp_v3 < temp_v11) {
        param_1[10] = (int)-(float)param_1[10];
      }
    }
    temp_v7 = (float)param_1[6] - *(float *)(temp_v0 + 4);
    temp_v4 = (float)param_1[8] - *(float *)(temp_v0 + 0xc);
    temp_v13 = romwright_sqrt_4(temp_v7 * temp_v7 + temp_v11 * temp_v11 + temp_v4 * temp_v4);
    temp_v8 = (float)temp_v17 / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v11 * temp_v11 + temp_v4 * temp_v4);
    temp_v3 = temp_v7 * temp_v8 * temp_v5 + temp_v11 * temp_v8 * temp_v6 + temp_v4 * temp_v8 * temp_v3;
    if (temp_v3 != 1.0f && temp_v3 != -1.0f) {
      temp_v13 = temp_v13 * temp_v3;
    }
  }
  else {
    param_1[0xb] = (int)((float)param_1[0xb] * 0.1f);
    temp_v6 = *(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc);
    temp_v7 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
    temp_v13 = romwright_sqrt_4(temp_v7 * temp_v7 + 0.0f + temp_v6 * temp_v6);
    temp_v4 = 1.0f / temp_v13;
    temp_v8 = temp_v7 * temp_v4;
    temp_v14 = temp_v4 * 0.0f;
    temp_v4 = temp_v6 * temp_v4;
    temp_v5 = temp_v8 * 0.0f + temp_v14 * 0.0f + temp_v4 * -1.0f;
    temp_v3 = temp_v11;
    if (temp_v5 != 1.0f) {
      if (temp_v5 == -1.0f) {
        param_1[10] = 0x43340000;
      }
      else {
        FUN_001bbde0();
        param_1[10] = (int)(temp_v5 * temp_v18);
        temp_v11 = temp_v3;
        if (temp_v12 * temp_v8 - temp_v3 * temp_v4 < temp_v3) {
          temp_v11 = -(float)param_1[10];
          param_1[10] = (int)temp_v11;
          temp_v11 = temp_v3;
        }
      }
    }
    else {
      param_1[10] = (int)temp_v11;
      temp_v11 = temp_v3;
    }
    temp_v5 = temp_v11 * -0.0003011813f + 1.0f;
    temp_v3 = temp_v11 * 0.024541229f + 0.0f;
    temp_v9 = temp_v11 * -0.024541229f + 0.0f;
    param_1[6] = *(int *)(temp_v0 + 0x10);
    temp_v10 = -(temp_v11 * -0.0003011813f + 1.0f);
    temp_v16 = temp_v3 * temp_v9 * temp_v7 + (temp_v5 * temp_v5 + temp_v3 * temp_v3 * temp_v10) * temp_v11 +
             (temp_v5 * temp_v3 * temp_v10 - temp_v3 * temp_v5) * temp_v6;
    temp_v15 = temp_v5 * temp_v9 * temp_v7 + (temp_v3 * temp_v5 * temp_v10 - temp_v5 * temp_v3) * temp_v11 +
             (temp_v3 * temp_v3 + temp_v5 * temp_v5 * temp_v10) * temp_v6;
    temp_v5 = -temp_v10 * temp_v7 + temp_v3 * temp_v9 * temp_v11 + temp_v5 * temp_v9 * temp_v6;
    temp_v3 = temp_v11;
    temp_v1 = btlMainIsRunning();
    if (temp_v1 != 0) {
      param_1[7] = (int)temp_v3;
    }
    else {
      param_1[7] = (int)(*(float *)(temp_v0 + 0x14) - 110.0f);
    }
    param_1[8] = *(int *)(temp_v0 + 0x18);
    temp_v3 = (float)param_1[0xb];
    param_1[6] = (int)((float)param_1[6] + temp_v15 * temp_v3);
    param_1[7] = (int)((float)param_1[7] + temp_v16 * temp_v3);
    param_1[8] = (int)((float)param_1[8] + temp_v5 * temp_v3);
    temp_v3 = -(float)param_1[0xc];
    param_1[6] = (int)((float)param_1[6] + temp_v8 * temp_v3);
    param_1[7] = (int)((float)param_1[7] + temp_v14 * temp_v3);
    param_1[8] = (int)((float)param_1[8] + temp_v4 * temp_v3);
  }
  temp_v3 = *(float *)(temp_v0 + 0x28) * 0.5f * 0.0055555557f * 3.1415927f;
  FUN_0050dda4();
  param_1[9] = (int)(temp_v13 / (120.0f / temp_v3));
  temp_v0 = *param_1;
  if (!(temp_v0 == 0xfe07 || temp_v0 == 0xfe4b)) {
    temp_v2 = temp_v0 == 0xfe49 || temp_v0 == 0xfe4c;
    if (temp_v0 != 0xfe49 && temp_v0 != 0xfe4c) {
      temp_v2 = temp_v0 == 0xfff2;
    }
    if (temp_v2) {
      param_1[8] = (int)((float)param_1[8] + 0.3f);
    }
  }
  else {
    temp_v0 = FUN_00152f54();
    temp_v5 = (float)param_1[6] - *(float *)(temp_v0 + 4);
    temp_v3 = (float)param_1[8] - *(float *)(temp_v0 + 0xc);
    temp_v4 = (float)temp_v17 / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v11 * temp_v11 + temp_v3 * temp_v3);
    temp_v5 = temp_v5 * temp_v4;
    temp_v3 = temp_v3 * temp_v4;
    temp_v4 = temp_v11 * temp_v5 + temp_v11 * temp_v11 * temp_v4 + temp_v12 * temp_v3;
    if (temp_v4 == 1.0f) {
      param_1[10] = (int)temp_v11;
    }
    else if (temp_v4 == -1.0f) {
      param_1[10] = (int)((unsigned long long)temp_v17 >> 0x20);
    }
    else {
      FUN_001bbde0();
      param_1[10] = (int)(temp_v4 * temp_v18);
      if (temp_v12 * temp_v5 - temp_v11 * temp_v3 < temp_v11) {
        param_1[10] = (int)-(float)param_1[10];
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
