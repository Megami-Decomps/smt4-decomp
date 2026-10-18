/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4ebc` (_code @ 0x3e4ebc, 0x2c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e4ebc_arg1 fn_003e4ebc_arg1;
struct fn_003e4ebc_arg1 {
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

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_0024c1cc. */
/* Supplied declaration required: FUN_00380d3c. */
/* Supplied declaration required: FUN_00380f14. */
/* Supplied declaration required: FUN_00381084. */
/* Supplied declaration required: FUN_003811cc. */


void FUN_003e4ebc(unsigned int param_1,fn_003e4ebc_arg1 *param_2,unsigned int *param_3,float *param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  float temp_v7;
  unsigned int temp_v8 [4];
  
  temp_v5 = 0;
  temp_v4 = *param_3;
  temp_v8[0] = 0;
  temp_v0 = param_1;
  if (param_5 == 0) {
    temp_v0 = param_2->field_0x3c;
  }
  temp_v7 = 0.0f;
  if (param_5 == 0) {
    temp_v8[0] = temp_v0;
  }
  if ((temp_v4 & 0x10) == 0) {
    temp_v8[0] = temp_v8[0] & 0xffffff7f;
    if (param_3[3] != 0) {
      temp_v2 = (int)param_3 + param_3[3] + 0xc;
    }
    else {
      temp_v2 = 0;
    }
    FUN_00380d3c(param_2,temp_v8,temp_v2);
    param_2->field_0x3c = param_2->field_0x3c | 0x800;
  }
  if ((temp_v4 & 8) == 0) {
    temp_v8[0] = temp_v8[0] & 0xfffffeff;
    FUN_00381084(param_2,temp_v8);
    param_2->field_0x3c = param_2->field_0x3c | 0x800;
  }
  if ((temp_v4 & 0x20) == 0) {
    temp_v8[0] = temp_v8[0] & 0xfffff9ff;
    puVar5 = param_3 + 5;
    temp_v0 = *puVar5;
    if ((*param_3 & 4) != 0) {
      if (temp_v0 != 0) {
        temp_v5 = temp_v0 + (int)puVar5;
      }
    }
    else if (temp_v0 != 0) {
      temp_v5 = temp_v0 + (int)puVar5;
    }
    FUN_00380f14(&param_2->field_0x30,temp_v8,temp_v5);
    param_2->field_0x3c = param_2->field_0x3c | 0x800;
  }
  temp_v0 = temp_v8[0];
  if (param_5 != 0) {
    if (((temp_v4 & 0x10) != 0) && (FUN_0024c1cc(param_2), param_4[3] == temp_v7)) {
      temp_v6 = 0;
      if (param_4[4] == temp_v7) {
        temp_v6 = param_4[5] == temp_v7;
      }
      if (temp_v6) {
        temp_v8[0] = temp_v8[0] | 0x80;
      }
    }
    if ((temp_v4 & 8) != 0) {
      temp_v1 = param_4[7];
      temp_v3 = param_4[8];
      param_2->field_0xc = param_4[6];
      param_2->field_0x1c = temp_v1;
      param_2->field_0x2c = temp_v3;
      param_2->field_0x3c = param_2->field_0x3c | 0x800;
      if (param_4[6] == temp_v7) {
        temp_v6 = 0;
        if (param_4[7] == temp_v7) {
          temp_v6 = param_4[8] == temp_v7;
        }
        if (temp_v6) {
          temp_v8[0] = temp_v8[0] | 0x100;
        }
      }
    }
    temp_v0 = temp_v8[0];
    if ((temp_v4 & 0x20) != 0) {
      temp_v7 = param_4[1];
      temp_v1 = param_4[2];
      param_2->field_0x30 = *param_4;
      param_2->field_0x34 = temp_v7;
      param_2->field_0x38 = temp_v1;
      param_2->field_0x3c = param_2->field_0x3c | 0x800;
      if (((*param_4 == param_4[1]) && (*param_4 == param_4[2])) &&
         (temp_v0 = temp_v8[0] | 0x400, *param_4 == 1.0f)) {
        temp_v0 = temp_v8[0] | 0x600;
      }
    }
  }
  temp_v8[0] = temp_v0;
  temp_v0 = param_2->field_0x3c;
  temp_v4 = temp_v0 & 0xbfffffff;
  param_2->field_0x3c = temp_v4;
  if (*(char *)(param_1 + 0x5b) != '\0') {
    temp_v4 = temp_v4 | 8;
  }
  else {
    temp_v4 = temp_v0 & 0xbffffff7;
  }
  param_2->field_0x3c = temp_v4;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    temp_v0 = param_2->field_0x3c | 0x10;
  }
  else {
    temp_v0 = param_2->field_0x3c & 0xffffffef;
  }
  param_2->field_0x3c = temp_v0;
  if (*(char *)(param_1 + 0x5d) != '\0') {
    temp_v0 = param_2->field_0x3c | 4;
  }
  else {
    temp_v0 = param_2->field_0x3c & 0xfffffffb;
  }
  param_2->field_0x3c = temp_v0;
  FUN_003811cc(param_2,temp_v8[0]);
  return;
}
