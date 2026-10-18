/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3494` (_code @ 0x3e3494, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e3494_arg0 fn_003e3494_arg0;
struct fn_003e3494_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
};

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned int DAT_004652a0; /* 0x4652a0 */

extern unsigned int FUN_002bc11c(void);
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_14. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_16. */


void FUN_003e3494(fn_003e3494_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v0 = param_1->field_0x10;
  if (temp_v0 != 0x81a5) {
    if (temp_v0 == 0x81a6) {
      temp_v4 = 2;
    }
    else if (temp_v0 == 0x88f0) {
      temp_v4 = 3;
    }
  }
  temp_v0 = param_1->field_0xc;
  if (temp_v0 == 0x8057) {
    temp_v3 = 0x20000;
  }
  else if (temp_v0 < 0x8057) {
    if (temp_v0 != 0x6050) {
      if (temp_v0 == 0x8056) {
        temp_v3 = 0x40000;
      }
    }
    else {
      temp_v3 = 2;
    }
  }
  else if (temp_v0 != 0x8058) {
    if (temp_v0 == 0x8d62) {
      temp_v3 = 0x30000;
    }
  }
  else {
    temp_v3 = 2;
  }
  temp_v9 = 0xf0110;
  temp_v5 = 0xf0117;
  if (param_1->field_0x18 != 0) {
    temp_v6 = 1;
    temp_v8 = 1;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v20 = 0;
    temp_v21 = 0;
    temp_v7 = 0xf0111;
    temp_v1 = 0;
    if (param_1->field_0x18 != 0) {
      temp_v1 = FUN_002bc11c();
      temp_v1 = temp_v1 >> 3;
    }
    temp_v11 = 0x802f011c;
    temp_v2 = 0;
    temp_v10 = temp_v1;
    if (param_1->field_0x14 != 0) {
      temp_v2 = FUN_002bc11c();
      temp_v2 = temp_v2 >> 3;
    }
    temp_v13 = param_1->field_0x8 | (param_1->field_0x4 * 0x1000 - 0x1000U) | 0x1000000;
    temp_v14 = param_1->field_0x8 | (param_1->field_0x4 * 0x1000 - 0x1000U) | 0x1000000;
    temp_v17 = 0xf0116;
    temp_v20 = (unsigned int)(param_1->field_0x1c != 0);
    temp_v12 = temp_v2;
    temp_v15 = 0xf006e;
    temp_v16 = temp_v4;
    temp_v18 = temp_v3;
    temp_v19 = temp_v5;
    temp_v21 = 0xf011b;
    nw_gfx_internal_FastWordCopyAsm_16(DAT_004652a0,&temp_v6);
  }
  else {
    temp_v6 = 1;
    temp_v8 = 1;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v7 = 0xf0111;
    temp_v1 = 0;
    temp_v10 = temp_v3;
    temp_v11 = temp_v5;
    if (param_1->field_0x14 != 0) {
      temp_v1 = FUN_002bc11c();
      temp_v1 = temp_v1 >> 3;
    }
    temp_v13 = 0xf011d;
    temp_v14 = (param_1->field_0x4 * 0x1000 - 0x1000U) | 0x1000000 | param_1->field_0x8;
    temp_v15 = 0xf011e;
    temp_v16 = param_1->field_0x8 | (param_1->field_0x4 * 0x1000 - 0x1000U) | 0x1000000;
    temp_v18 = (unsigned int)(param_1->field_0x1c != 0);
    temp_v12 = temp_v1;
    temp_v17 = 0xf006e;
    temp_v19 = 0xf011b;
    nw_gfx_internal_FastWordCopyAsm_14(DAT_004652a0,&temp_v6);
  }
  return;
}
