/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ade24` (_code @ 0x1ade24, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4128(int *, int, int);

typedef struct fn_001ade24_arg2 fn_001ade24_arg2;
struct fn_001ade24_arg2 {
    unsigned char pad_0x0[0x14];
    int field_0x14; /* +0x14 */
    uint field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x14];
    uint field_0x30; /* +0x30 */
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
};

/* stack frame of param_3: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

/* Supplied declaration required: FUN_001b4128. */


unsigned int * FUN_001ade24(unsigned int param_1,unsigned int *param_2,fn_001ade24_arg2 *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14 [14];
  
  if (param_3 != (fn_001ade24_arg2 *)0x0) {
    temp_v14[0] = 0;
    temp_v14[1] = 0;
    temp_v14[2] = 0;
    temp_v14[3] = 0;
    temp_v14[4] = 0;
    temp_v14[5] = 0;
    temp_v14[6] = 0;
    temp_v14[7] = 0;
    temp_v14[8] = 0;
    temp_v14[9] = 0;
    temp_v14[10] = 0;
    temp_v14[0xb] = 0;
    temp_v14[0xc] = 0x20;
    temp_v14[0xd] = 0;
    temp_v1 = 0x809f0081;
    temp_v13 = 0xf008e;
    temp_v2 = param_3->field_0x18 | (param_3->field_0x14 << 0x10);
    temp_v3 = (param_3->field_0x38 << 0xc) | (param_3->field_0x38 << 8) |
               (param_3->field_0x3c << 2) | (param_3->field_0x40 << 1) |
               temp_v14[param_3->field_0x34];
    temp_v5 = param_3->field_0x30 >> 3;
    temp_v12 = param_3->field_0x34;
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0x809f0081;
      param_2[2] = temp_v2;
      param_2[3] = temp_v3;
      param_2[4] = 0;
      param_2[5] = temp_v5;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = temp_v12;
      param_2[0xd] = 0xf008e;
      return param_2 + 0xe;
    }
  }
  else {
    temp_v1 = 0;
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v5 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      return param_2 + 0xe;
    }
  }
  temp_v11 = 0;
  temp_v10 = 0;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v4 = 0;
  temp_v0 = 0;
  FUN_001b4128(&temp_v0,0x38,1);
  return param_2;
}

} /* extern "C" */
