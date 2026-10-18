/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225fa0` (_code @ 0x225fa0, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00225fa0_arg1 fn_00225fa0_arg1;
typedef struct fn_00225fa0_arg2 fn_00225fa0_arg2;
struct fn_00225fa0_arg1 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    uint field_0x3c; /* +0x3c */
};
struct fn_00225fa0_arg2 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
};


void FUN_00225fa0(unsigned int param_1,fn_00225fa0_arg1 *param_2,fn_00225fa0_arg2 *param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  float in_s0;
  float temp_v1;
  float temp_v2;
  
  if (in_s0 != -1.0f) {
    temp_v1 = param_3->field_0x1c;
    temp_v2 = param_3->field_0x2c;
    temp_v0 = param_2->field_0x3c;
    if ((~temp_v0 & 4) != 0) {
      param_2->field_0xc = param_2->field_0xc + param_3->field_0xc * in_s0;
      param_2->field_0x1c = param_2->field_0x1c + temp_v1 * in_s0;
      param_2->field_0x2c = param_2->field_0x2c + temp_v2 * in_s0;
    }
    else {
      temp_v0 = temp_v0 & 0xfffffffb;
      param_2->field_0xc = param_3->field_0xc * in_s0;
      param_2->field_0x1c = temp_v1 * in_s0;
      param_2->field_0x2c = temp_v2 * in_s0;
    }
    param_2->field_0x3c = temp_v0 | 0x800;
  }
  return;
}
