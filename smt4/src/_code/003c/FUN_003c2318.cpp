/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2318` (_code @ 0x3c2318, 0x2cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024571c(...);
int FUN_0029c6b0(...);
int FUN_002b9024(...);
int FUN_003c219c(...);
int SBORROW4(...);

typedef struct fn_003c2318_arg0 fn_003c2318_arg0;
struct fn_003c2318_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x1];
    unsigned char field_0x6; /* +0x6 */
    unsigned char pad_0x7[0x1];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1];
    unsigned char field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x1];
    ushort field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    unsigned char pad_0x12[0xe];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x1];
    unsigned char field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x1];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x1];
    unsigned char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x1];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x1];
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x16];
    undefined2 field_0x44; /* +0x44 */
    ushort field_0x46; /* +0x46 */
    byte field_0x48; /* +0x48 */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp54; /* 0x54: local_54 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0024571c. */
extern int FUN_00245768(unsigned short);
extern int padIsButtonDown(unsigned int);
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_003c219c. */


void FUN_003c2318(fn_003c2318_arg0 *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  fn_003c2318_arg0 *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v0 = (unsigned int)param_1->field_0x46;
  FUN_002b9024();
  temp_v9 = (unsigned int)*(unsigned short *)(temp_v0 + 0x16);
  temp_v7 = *(unsigned int *)(temp_v0 + 0x24);
  uStack_30 = *(unsigned int *)(temp_v0 + 0x16);
  uStack_34 = (unsigned int)*(unsigned char *)(temp_v0 + 0x28) | ((unsigned int)*(unsigned short *)(temp_v0 + 0x14) << 0x10);
  temp_v4 = 9999;
  temp_v2 = (int)(short)(unsigned short)*(unsigned char *)(temp_v0 + 3) * (int)(short)(unsigned short)*(unsigned char *)(temp_v0 + 0x18) +
          (unsigned int)*(unsigned short *)(temp_v0 + 0x14);
  temp_v8 = temp_v4;
  if (temp_v2 < 10000) {
    temp_v8 = temp_v2 & 0xffff;
  }
  temp_v0 = (((unsigned int)*(unsigned char *)(temp_v0 + 3) * (unsigned int)*(unsigned char *)(temp_v0 + 0x19) + temp_v9) * 0x2d) / 100;
  if (temp_v0 < 10000) {
    temp_v4 = temp_v0;
  }
  temp_v8 = temp_v8 | (temp_v4 << 0x10);
  temp_v5 = 0;
  do {
    if (param_1->field_0x48 == 99) break;
    temp_v3 = 0;
    do {
      pfVar2 = param_1;
      FUN_003c219c(param_1,&temp_v7,1);
      switch((unsigned int)pfVar2) {
      case (unsigned int)0x0:
        *(short *)&param_1->field_0x20 = *(short *)&param_1->field_0x20 + 1;
        break;
      case (unsigned int)0x1:
        *(short *)&param_1->field_0x22 = *(short *)&param_1->field_0x22 + 1;
        break;
      case (unsigned int)0x2:
        *(short *)&param_1->field_0x24 = *(short *)&param_1->field_0x24 + 1;
        break;
      case (unsigned int)0x3:
        *(short *)&param_1->field_0x26 = *(short *)&param_1->field_0x26 + 1;
        break;
      case (unsigned int)0x4:
        *(short *)&param_1->field_0x28 = *(short *)&param_1->field_0x28 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 5);
    temp_v3 = padIsButtonDown(7);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)&param_1->field_0x4;
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)&param_1->field_0x4 = (short)temp_v1 + 1;
      *(short *)&param_1->field_0x20 = *(short *)&param_1->field_0x20 + 1;
    }
    temp_v3 = padIsButtonDown(8);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)&param_1->field_0xa;
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)&param_1->field_0xa = (short)temp_v1 + 1;
      *(short *)&param_1->field_0x26 = *(short *)&param_1->field_0x26 + 1;
    }
    temp_v3 = padIsButtonDown(9);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)&param_1->field_0xc;
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)&param_1->field_0xc = (short)temp_v1 + 1;
      *(short *)&param_1->field_0x28 = *(short *)&param_1->field_0x28 + 1;
    }
    temp_v3 = padIsButtonDown(10);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)&param_1->field_0x8;
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)&param_1->field_0x8 = (short)temp_v1 + 1;
      *(short *)&param_1->field_0x24 = *(short *)&param_1->field_0x24 + 1;
    }
    temp_v3 = padIsButtonDown(0xb);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)&param_1->field_0x6;
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)&param_1->field_0x6 = (short)temp_v1 + 1;
      *(short *)&param_1->field_0x22 = *(short *)&param_1->field_0x22 + 1;
    }
    *(char *)((int)param_1 + 0x49) = *(char *)((int)param_1 + 0x49) + '\x01';
    param_1->field_0x48 = param_1->field_0x48 + 1;
    temp_v3 = FUN_00245768(param_1->field_0x46);
    FUN_0024571c(param_1->field_0x46,temp_v3 + 0x32);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < param_2);
  FUN_0029c6b0(param_1);
  param_1->field_0x2a = param_1->field_0xe;
  param_1->field_0x44 = 0;
  param_1->field_0x2c = param_1->field_0x10;
  return;
}

} /* extern "C" */
