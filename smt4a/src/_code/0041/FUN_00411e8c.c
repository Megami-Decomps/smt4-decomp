/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00411e8c` (_code @ 0x411e8c, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00411e8c_arg0 fn_00411e8c_arg0;
struct fn_00411e8c_arg0 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    float field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    float field_0x28; /* +0x28 */
};

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int FUN_00152f54(void);
/* Supplied declaration required: FUN_001bbde0. */
/* Supplied declaration required: FUN_0050dda4. */


void FUN_00411e8c(fn_00411e8c_arg0 *param_1,float *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  float temp_v1;
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
  
  temp_v0 = FUN_00152f54();
  temp_v9 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
  temp_v7 = 0.0f;
  temp_v8 = *(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc);
  temp_v10 = -1.0f;
  temp_v13 = romwright_sqrt_4(temp_v9 * temp_v9 + 0.0f + temp_v8 * temp_v8);
  temp_v1 = 1.0f / temp_v13;
  temp_v11 = temp_v9 * temp_v1;
  temp_v12 = temp_v1 * 0.0f;
  temp_v1 = temp_v8 * temp_v1;
  temp_v2 = temp_v11 * 0.0f + temp_v12 * 0.0f + temp_v1 * -1.0f;
  if (temp_v2 == 1.0f) {
    param_2[4] = 0.0f;
  }
  else if (temp_v2 == -1.0f) {
    temp_v2 = 128.0f;
    param_2[4] = temp_v2;
  }
  else {
    FUN_001bbde0();
    param_2[4] = temp_v2 * 40.743664f;
    if (temp_v7 > temp_v10 * temp_v11 - temp_v7 * temp_v1) {
      temp_v2 = -param_2[4];
      param_2[4] = temp_v2;
    }
  }
  temp_v4 = temp_v7 * 0.024541229f + 0.0f;
  temp_v3 = temp_v7 * -0.0003011813f + 1.0f;
  temp_v5 = temp_v7 * -0.024541229f + 0.0f;
  *param_2 = *(float *)(temp_v0 + 0x10);
  param_2[1] = temp_v7;
  temp_v2 = *(float *)(temp_v0 + 0x18);
  temp_v6 = -(temp_v7 * -0.0003011813f + 1.0f);
  param_2[2] = temp_v2;
  temp_v10 = param_2[5];
  *param_2 = *param_2 +
             (temp_v3 * temp_v5 * temp_v9 + (temp_v4 * temp_v3 * temp_v6 - temp_v3 * temp_v4) * temp_v7 +
             (temp_v4 * temp_v4 + temp_v3 * temp_v3 * temp_v6) * temp_v8) * temp_v10 * 0.1f;
  param_2[1] = param_2[1] +
               (temp_v4 * temp_v5 * temp_v9 + (temp_v3 * temp_v3 + temp_v4 * temp_v4 * temp_v6) * temp_v7 +
               (temp_v3 * temp_v4 * temp_v6 - temp_v4 * temp_v3) * temp_v8) * temp_v10 * 0.1f;
  param_2[2] = temp_v2 + (-temp_v6 * temp_v9 + temp_v4 * temp_v5 * temp_v7 + temp_v3 * temp_v5 * temp_v8) * temp_v10 *
                       0.1f;
  temp_v2 = -param_2[6];
  *param_2 = *param_2 + temp_v11 * temp_v2;
  param_2[1] = param_2[1] + temp_v12 * temp_v2;
  param_2[2] = param_2[2] + temp_v1 * temp_v2;
  temp_v1 = *(float *)(temp_v0 + 0x28) * 0.5f * 0.0055555557f * 3.1415927f;
  FUN_0050dda4();
  param_2[3] = temp_v13 / (120.0f / temp_v1);
  return;
}
