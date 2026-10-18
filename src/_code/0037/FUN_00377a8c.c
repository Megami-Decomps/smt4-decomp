/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377a8c` (_code @ 0x377a8c, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00377a8c_arg2 fn_00377a8c_arg2;
struct fn_00377a8c_arg2 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x11];
    byte field_0x29; /* +0x29 */
};

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_00377a8c(int param_1,int param_2,fn_00377a8c_arg2 *param_3,float *param_4,float *param_5)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v4 = 0.0f;
  temp_v5 = *(float *)(param_1 + 0x24);
  temp_v6 = *param_4;
  temp_v7 = param_4[1];
  temp_v8 = param_4[2];
  if (temp_v5 == 0.0f) {
    *param_5 = 1.0f;
  }
  else {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < 0.0f) << 0x1f) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    temp_v2 = (unsigned char)(temp_v1 >> 7);
    temp_v3 = (unsigned char)((temp_v1 >> 6) & 1);
    if (!temp_v3 && temp_v2 == NAN(in_s0)) {
      temp_v9 = 1.0f / in_s0;
      temp_v6 = temp_v6 * temp_v9;
      temp_v7 = temp_v7 * temp_v9;
      temp_v8 = temp_v8 * temp_v9;
    }
    temp_v9 = (float)VectorUnsignedToFloat((unsigned int)param_3->field_0x29,(unsigned char)(temp_v0 >> 0x16) & 3);
    if (!(temp_v3 || temp_v2 != NAN(in_s0))) {
      temp_v10 = temp_v6 * param_3->field_0xc + temp_v7 * param_3->field_0x10 +
               temp_v8 * param_3->field_0x14;
      temp_v6 = -(temp_v6 * *(float *)(param_2 + 0x3c) + temp_v7 * *(float *)(param_2 + 0x40) +
               temp_v8 * *(float *)(param_2 + 0x44));
    }
    else {
      temp_v10 = romwright_sqrt_4(param_3->field_0xc * param_3->field_0xc +
                    param_3->field_0x10 * param_3->field_0x10 +
                    param_3->field_0x14 * param_3->field_0x14);
      temp_v6 = romwright_sqrt_4(*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x3c) +
                   *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x40) +
                   *(float *)(param_2 + 0x44) * *(float *)(param_2 + 0x44));
    }
    temp_v6 = temp_v6 * temp_v9 * 0.03125f;
    temp_v7 = -temp_v10 * temp_v9 * 0.03125f;
    if (temp_v6 <= temp_v5) {
      if (temp_v5 <= temp_v7) {
        temp_v4 = 65535.0f;
      }
      else {
        temp_v4 = (temp_v5 - temp_v6) / (temp_v5 - temp_v7);
      }
    }
    *param_5 = temp_v4;
  }
  return;
}
