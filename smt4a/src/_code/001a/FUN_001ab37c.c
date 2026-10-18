/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab37c` (_code @ 0x1ab37c, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ab37c_arg1 fn_001ab37c_arg1;
struct fn_001ab37c_arg1 {
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
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

/* Supplied declaration required: FUN_001afe40. */
/* Supplied declaration required: FUN_001b4690. */
/* Supplied declaration required: FUN_001b4790. */


void FUN_001ab37c(int param_1,fn_001ab37c_arg1 *param_2)

{
/* irregular: irregular input(s): in_s1; 3 native warning(s); review required */
  float *pfVar1;
  unsigned char *puVar2;
  float in_s1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned char temp_v6 [28];
  
  if ((*(unsigned int *)(param_1 + 8) & 0x20) == 0) {
    pfVar1 = *(float **)(param_1 + 0xc);
    if ((*(unsigned int *)(param_1 + 8) & 4) == 0) {
      FUN_001b4790(*(float **)(param_1 + 0xc),&temp_v0);
      pfVar1 = &temp_v0;
    }
    param_2->field_0x4 = param_2->field_0x4 + *pfVar1 * in_s1;
    param_2->field_0x8 = param_2->field_0x8 + pfVar1[1] * in_s1;
    param_2->field_0xc = param_2->field_0xc + pfVar1[2] * in_s1;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x10) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 2) != 0) {
      puVar2 = *(unsigned char **)(param_1 + 0x10);
    }
    else {
      FUN_001b4690(*(unsigned int *)(param_1 + 0x10),temp_v6);
      puVar2 = temp_v6;
    }
    FUN_001afe40(&temp_v0,puVar2,1);
    param_2->field_0x10 = param_2->field_0x10 + temp_v0 * in_s1;
    param_2->field_0x14 = param_2->field_0x14 + temp_v1 * in_s1;
    param_2->field_0x18 = param_2->field_0x18 + temp_v2 * in_s1;
    param_2->field_0x20 = param_2->field_0x20 + temp_v3 * in_s1;
    param_2->field_0x24 = param_2->field_0x24 + temp_v4 * in_s1;
    param_2->field_0x28 = param_2->field_0x28 + temp_v5 * in_s1;
  }
  if ((*(unsigned int *)(param_1 + 8) & 8) == 0) {
    pfVar1 = *(float **)(param_1 + 0x14);
    if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
      FUN_001b4790(*(float **)(param_1 + 0x14),&temp_v0);
      pfVar1 = &temp_v0;
    }
    param_2->field_0x1c = param_2->field_0x1c + *pfVar1 * in_s1;
    param_2->field_0x2c = param_2->field_0x2c + pfVar1[1] * in_s1;
    param_2->field_0x3c = param_2->field_0x3c + pfVar1[2] * in_s1;
  }
  return;
}
