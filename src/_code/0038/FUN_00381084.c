/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381084` (_code @ 0x381084, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00381084_arg0 fn_00381084_arg0;
struct fn_00381084_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
};

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002358dc. */


void FUN_00381084(fn_00381084_arg0 *param_1,unsigned int *param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v1;
  float temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  if (((unsigned int)param_3[3] & 1) != 0) {
    in_s0 = *param_3;
  }
  else {
    FUN_002358dc(param_3);
  }
  temp_v3 = VectorFloatToUnsigned(in_s0,3);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = in_s0 - temp_v4;
  if (temp_v4 == 0.0f) {
    param_1->field_0xc = param_3[temp_v3 * 4 + 4];
    param_1->field_0x1c = param_3[temp_v3 * 4 + 5];
    param_1->field_0x2c = param_3[temp_v3 * 4 + 6];
    temp_v0 = (unsigned int)param_3[temp_v3 * 4 + 7] | *param_2;
  }
  else {
    if (param_3[1] == in_s0) {
      temp_v3 = temp_v3 + 1;
      param_1->field_0xc = param_3[temp_v3 * 4 + 4];
      param_1->field_0x1c = param_3[temp_v3 * 4 + 5];
      param_1->field_0x2c = param_3[temp_v3 * 4 + 6];
      *param_2 = (unsigned int)param_3[temp_v3 * 4 + 7] | *param_2;
      return;
    }
    in_s0 = in_s0 + 1.0f;
    FUN_002358dc(param_3);
    temp_v1 = VectorFloatToUnsigned(in_s0,3);
    temp_v6 = param_3[temp_v3 * 4 + 4];
    temp_v5 = param_3[temp_v3 * 4 + 5];
    temp_v2 = param_3[temp_v3 * 4 + 6];
    temp_v8 = param_3[temp_v1 * 4 + 5];
    temp_v7 = param_3[temp_v1 * 4 + 6];
    param_1->field_0xc = temp_v6 + temp_v4 * (param_3[temp_v1 * 4 + 4] - temp_v6);
    param_1->field_0x1c = temp_v5 + temp_v4 * (temp_v8 - temp_v5);
    param_1->field_0x2c = temp_v2 + temp_v4 * (temp_v7 - temp_v2);
    temp_v0 = ((unsigned int)param_3[temp_v1 * 4 + 7] & (unsigned int)param_3[temp_v3 * 4 + 7]) | *param_2;
  }
  *param_2 = temp_v0;
  return;
}
