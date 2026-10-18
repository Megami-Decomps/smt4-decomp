/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349fc0` (_code @ 0x349fc0, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

/* Supplied declaration required: FUN_0027d9a8. */
/* Supplied declaration required: FUN_002929d8. */
/* Supplied declaration required: FUN_002c222c. */
extern int FUN_0034afd4(void);


int FUN_00349fc0(int param_1)

{
/* irregular: 3 native warning(s); review required */
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
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  temp_v0 = 0xb4;
  FUN_002c222c();
  if (temp_v0 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_0034afd4();
  }
  temp_v3 = 1.0f;
  temp_v2 = 0.0f;
  *(unsigned int *)(temp_v0 + 8) = *(unsigned int *)(param_1 + 4);
  FUN_0027d9a8();
  FUN_002929d8(&temp_v8,1);
  temp_v4 = temp_v8 * temp_v3 + temp_v9 * temp_v2 + temp_v10 * temp_v2;
  temp_v5 = temp_v11 * temp_v3 + temp_v12 * temp_v2 + temp_v13 * temp_v2;
  temp_v1 = temp_v13;
  FUN_0027d9a8();
  temp_v6 = 0.5f;
  temp_v7 = 2.0f;
  temp_v1 = (temp_v1 - 0.5f) * 2.0f * *(float *)(param_1 + 8);
  *(float *)(temp_v0 + 0xc) = temp_v4 * temp_v1 * *(float *)(temp_v0 + 0x30) * 0.5f;
  *(float *)(temp_v0 + 0x10) =
       temp_v5 * temp_v1 * *(float *)(temp_v0 + 0x34) * 0.5f + *(float *)(temp_v0 + 0x34) * 0.5f;
  *(float *)(temp_v0 + 0x14) = temp_v2;
  FUN_0027d9a8();
  FUN_0027d9a8();
  FUN_002929d8(&temp_v8,1);
  temp_v1 = temp_v8 * temp_v2 + temp_v9 * temp_v3 + temp_v10 * temp_v2;
  temp_v4 = temp_v11 * temp_v2 + temp_v12 * temp_v3 + temp_v13 * temp_v2;
  temp_v3 = temp_v14 * temp_v2 + temp_v15 * temp_v3 + temp_v16 * temp_v2;
  FUN_0027d9a8();
  temp_v2 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10) * (temp_v16 - temp_v6) * temp_v7;
  temp_v1 = temp_v1 * temp_v2;
  *(float *)(temp_v0 + 0x3c) = temp_v1;
  *(float *)(temp_v0 + 0x40) = temp_v4 * temp_v2;
  *(float *)(temp_v0 + 0x44) = temp_v3 * temp_v2;
  FUN_0027d9a8();
  temp_v1 = (temp_v1 - temp_v6) * temp_v7;
  temp_v2 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x28) * temp_v1;
  FUN_0027d9a8();
  temp_v1 = (temp_v1 - temp_v6) * temp_v7;
  temp_v3 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x2c) * temp_v1;
  FUN_0027d9a8();
  *(float *)(temp_v0 + 0x5c) =
       *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x30) * (temp_v1 - temp_v6) * temp_v7;
  *(float *)(temp_v0 + 0x54) = temp_v2;
  *(float *)(temp_v0 + 0x58) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(param_1 + 0x34);
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(param_1 + 0x38);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(param_1 + 0x3c);
  return temp_v0;
}
