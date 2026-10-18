/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3c4c` (_code @ 0x3e3c4c, 0x2f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e3c4c_arg1 fn_003e3c4c_arg1;
typedef struct fn_003e3c4c_arg3 fn_003e3c4c_arg3;
struct fn_003e3c4c_arg1 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
};
struct fn_003e3c4c_arg3 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    float field_0x34; /* +0x34 */
    float field_0x38; /* +0x38 */
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_6: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
} param_6_stack;

/* Supplied declaration required: FUN_0022638c. */
/* Supplied declaration required: FUN_0023d240. */
/* Supplied declaration required: FUN_002a8728. */
/* Supplied declaration required: FUN_002a87b4. */
/* Supplied declaration required: FUN_002bfedc. */


void FUN_003e3c4c(unsigned int param_1,fn_003e3c4c_arg1 *param_2,float *param_3,
                 fn_003e3c4c_arg3 *param_4,int param_5,int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
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
  
  if ((param_4->field_0x3c & 0x60) != 0) {
    FUN_002bfedc(param_2);
  }
  else {
    temp_v11 = param_4->field_0xc;
    temp_v12 = param_4->field_0x1c;
    temp_v13 = param_4->field_0x2c;
    temp_v0 = ~*(unsigned int *)(param_6 + 0x3c) & 0x200;
    if ((~param_4->field_0x3c & 0x80) != 0) {
      if (temp_v0 != 0) {
        FUN_002bfedc(param_2);
        FUN_002a8728(&temp_v2,param_2);
        temp_v1 = *(float *)(param_6 + 0x30);
        temp_v2 = temp_v2 * temp_v1;
        temp_v5 = temp_v5 * temp_v1;
        temp_v8 = temp_v8 * *(float *)(param_6 + 0x30);
        temp_v3 = temp_v3 * *(float *)(param_6 + 0x34);
        temp_v6 = temp_v6 * *(float *)(param_6 + 0x34);
        temp_v9 = temp_v9 * *(float *)(param_6 + 0x34);
        temp_v4 = temp_v4 * *(float *)(param_6 + 0x38);
        temp_v7 = temp_v7 * *(float *)(param_6 + 0x38);
        temp_v10 = temp_v10 * *(float *)(param_6 + 0x38);
        FUN_002a87b4(&temp_v11,&temp_v2);
        param_2->field_0xc = param_2->field_0xc + temp_v11;
        param_2->field_0x1c = param_2->field_0x1c + temp_v12;
        param_2->field_0x2c = param_2->field_0x2c + temp_v13;
        FUN_0022638c(param_2,param_2,param_4);
      }
      else {
        FUN_0023d240(param_2,param_5,&temp_v11);
        FUN_0022638c(param_2,param_2,param_4);
      }
    }
    else if (temp_v0 != 0) {
      FUN_002bfedc(param_2);
      FUN_002a8728(&temp_v2,param_2);
      temp_v1 = *(float *)(param_6 + 0x30);
      temp_v2 = temp_v2 * temp_v1;
      temp_v5 = temp_v5 * temp_v1;
      temp_v8 = temp_v8 * *(float *)(param_6 + 0x30);
      temp_v3 = temp_v3 * *(float *)(param_6 + 0x34);
      temp_v6 = temp_v6 * *(float *)(param_6 + 0x34);
      temp_v9 = temp_v9 * *(float *)(param_6 + 0x34);
      temp_v4 = temp_v4 * *(float *)(param_6 + 0x38);
      temp_v7 = temp_v7 * *(float *)(param_6 + 0x38);
      temp_v10 = temp_v10 * *(float *)(param_6 + 0x38);
      FUN_002a87b4(&temp_v11,&temp_v2);
      param_2->field_0xc = param_2->field_0xc + temp_v11;
      param_2->field_0x1c = param_2->field_0x1c + temp_v12;
      param_2->field_0x2c = param_2->field_0x2c + temp_v13;
    }
    else {
      FUN_0023d240(param_2,param_5,&temp_v11);
    }
  }
  if ((~*(unsigned int *)(param_5 + 0x3c) & 0x200) != 0) {
    *param_3 = *(float *)(param_5 + 0x30) * param_4->field_0x30;
    param_3[1] = *(float *)(param_5 + 0x34) * param_4->field_0x34;
    param_3[2] = *(float *)(param_5 + 0x38) * param_4->field_0x38;
    return;
  }
  *param_3 = param_4->field_0x30;
  param_3[1] = param_4->field_0x34;
  param_3[2] = param_4->field_0x38;
  return;
}
