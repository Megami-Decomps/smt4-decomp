/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3964` (_code @ 0x3e3964, 0x198 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e3964_arg3 fn_003e3964_arg3;
struct fn_003e3964_arg3 {
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

/* stack frame of param_5: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
} param_5_stack;

/* Supplied declaration required: FUN_0023d39c. */
/* Supplied declaration required: FUN_002a5078. */
/* Supplied declaration required: FUN_002c00b4. */


void FUN_003e3964(unsigned int param_1,unsigned int param_2,float *param_3,fn_003e3964_arg3 *param_4,
                 int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1 [12];
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  if ((param_4->field_0x3c & 0x60) != 0) {
    FUN_002c00b4(param_2,param_5);
  }
  else {
    temp_v5 = param_4->field_0xc;
    temp_v6 = param_4->field_0x1c;
    temp_v7 = param_4->field_0x2c;
    temp_v0 = (~*(unsigned int *)(param_5 + 0x3c) & 0x200) != 0;
    if ((~param_4->field_0x3c & 0x80) != 0) {
      if (!temp_v0) {
        FUN_002a5078(param_2,param_5,param_4);
      }
      else {
        FUN_002c00b4(temp_v1,param_4);
        temp_v2 = temp_v2 * *(float *)(param_5 + 0x30);
        temp_v3 = temp_v3 * *(float *)(param_5 + 0x34);
        temp_v4 = temp_v4 * *(float *)(param_5 + 0x38);
        FUN_002a5078(param_2,param_5,temp_v1);
      }
    }
    else {
      if (temp_v0) {
        temp_v5 = temp_v5 * *(float *)(param_5 + 0x30);
        temp_v6 = temp_v6 * *(float *)(param_5 + 0x34);
        temp_v7 = temp_v7 * *(float *)(param_5 + 0x38);
      }
      FUN_0023d39c(param_2,param_5,&temp_v5);
    }
  }
  if ((~*(unsigned int *)(param_5 + 0x3c) & 0x200) == 0) {
    *param_3 = param_4->field_0x30;
    param_3[1] = param_4->field_0x34;
    param_3[2] = param_4->field_0x38;
    return;
  }
  *param_3 = *(float *)(param_5 + 0x30) * param_4->field_0x30;
  param_3[1] = *(float *)(param_5 + 0x34) * param_4->field_0x34;
  param_3[2] = *(float *)(param_5 + 0x38) * param_4->field_0x38;
  return;
}
