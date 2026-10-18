/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012eb60` (_code @ 0x12eb60, 0x258 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012eb60_arg1 fn_0012eb60_arg1;
struct fn_0012eb60_arg1 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x84];
    uint field_0xb4; /* +0xb4 */
    uint field_0xb8; /* +0xb8 */
};

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_002b41cc. */
/* Supplied declaration required: FUN_002b4270. */


void FUN_0012eb60(int *param_1,fn_0012eb60_arg1 *param_2,int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x29c;
  *param_1 = temp_v1;
  temp_v3 = param_2->field_0xb4;
  if (temp_v3 < 3) {
    *param_1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x10;
  }
  temp_v4 = param_2->field_0xb8;
  if (temp_v4 < 3) {
    *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x20;
  }
  FUN_002b4270(param_1,param_2,param_3,param_4,param_5,param_6);
  temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 200;
  *param_1 = temp_v1;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
        *param_1 = temp_v1;
      }
    }
    else {
      temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x20;
      *param_1 = temp_v1;
    }
  }
  else {
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x18;
    *param_1 = temp_v1;
  }
  if (temp_v4 != 0) {
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        *param_1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x1c;
      }
    }
    else {
      temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x1c;
      *param_1 = temp_v1;
    }
  }
  else {
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
    *param_1 = temp_v1;
  }
  temp_v5 = (param_3 << 0x10) >> 0x18 != 0;
  temp_v1 = 0;
  if (temp_v5) {
    temp_v1 = param_2->field_0x28;
  }
  if ((!temp_v5 || temp_v1 == 0) || temp_v1 < 0) {
    return;
  }
  temp_v1 = param_2->field_0x2c;
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + (int)&param_2->field_0x2c;
  }
  else {
    temp_v1 = 0;
  }
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v1 + 0x28);
    if (temp_v2 != 0) {
      temp_v0 = temp_v2 + temp_v1 + 0x28;
    }
  }
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x68;
  FUN_002b41cc(param_1,temp_v0,1);
  return;
}
