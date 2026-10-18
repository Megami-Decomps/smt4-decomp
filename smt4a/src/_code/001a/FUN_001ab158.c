/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab158` (_code @ 0x1ab158, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ab158_arg1 fn_001ab158_arg1;
struct fn_001ab158_arg1 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    float field_0x8; /* +0x8 */
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    float field_0x3c; /* +0x3c */
};

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_001a83bc. */
/* Supplied declaration required: FUN_001aff14. */


void FUN_001ab158(int param_1,fn_001ab158_arg1 *param_2)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float in_s1;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  if ((*(unsigned int *)(param_1 + 8) & 0x70000) == 0) {
    temp_v0 = in_s0;
    if ((*(unsigned int *)(param_1 + 8) & 0x40) != 0) {
      temp_v1 = *(float *)(param_1 + 0xc);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0xc));
      temp_v1 = in_s0;
    }
    temp_v2 = temp_v0;
    if ((*(unsigned int *)(param_1 + 8) & 0x80) != 0) {
      temp_v0 = *(float *)(param_1 + 0x10);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x10));
    }
    in_s0 = temp_v2;
    if ((*(unsigned int *)(param_1 + 8) & 0x100) != 0) {
      temp_v2 = *(float *)(param_1 + 0x14);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x14));
    }
    param_2->field_0x4 = param_2->field_0x4 + temp_v1 * in_s1;
    param_2->field_0x8 = param_2->field_0x8 + temp_v0 * in_s1;
    param_2->field_0xc = param_2->field_0xc + temp_v2 * in_s1;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x200) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x18));
    }
    if ((*(unsigned int *)(param_1 + 8) & 0x400) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x1c));
    }
    if ((*(unsigned int *)(param_1 + 8) & 0x800) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x20));
    }
    FUN_001aff14(&temp_v3,0);
    param_2->field_0x10 = param_2->field_0x10 + temp_v3 * in_s1;
    param_2->field_0x14 = param_2->field_0x14 + temp_v4 * in_s1;
    param_2->field_0x18 = param_2->field_0x18 + temp_v5 * in_s1;
    param_2->field_0x20 = param_2->field_0x20 + temp_v6 * in_s1;
    param_2->field_0x24 = param_2->field_0x24 + temp_v7 * in_s1;
    param_2->field_0x28 = param_2->field_0x28 + temp_v8 * in_s1;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x1c00000) == 0) {
    temp_v0 = in_s0;
    if ((*(unsigned int *)(param_1 + 8) & 0x2000) != 0) {
      temp_v1 = *(float *)(param_1 + 0x24);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x24));
      temp_v1 = in_s0;
    }
    temp_v2 = temp_v0;
    if ((*(unsigned int *)(param_1 + 8) & 0x4000) != 0) {
      temp_v0 = *(float *)(param_1 + 0x28);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x28));
    }
    if ((*(unsigned int *)(param_1 + 8) & 0x8000) != 0) {
      temp_v2 = *(float *)(param_1 + 0x2c);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x2c));
    }
    param_2->field_0x1c = param_2->field_0x1c + temp_v1 * in_s1;
    param_2->field_0x2c = param_2->field_0x2c + temp_v0 * in_s1;
    param_2->field_0x3c = param_2->field_0x3c + temp_v2 * in_s1;
  }
  return;
}
