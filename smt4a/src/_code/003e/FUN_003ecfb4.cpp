/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecfb4` (_code @ 0x3ecfb4, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017760c(...);
int FUN_00184310(...);
int sysMemClear(...);
int FUN_002e6dd4(...);
int FUN_004bd274(...);
int FUN_004bd294(...);
int clearTwoWords(...);

typedef struct fn_003ecfb4_arg2 fn_003ecfb4_arg2;
struct fn_003ecfb4_arg2 {
    unsigned char pad_0x0[0x10];
    short field_0x10; /* +0x10 */
    ushort field_0x12; /* +0x12 */
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    unsigned char pad_0x1c[0xe];
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x6];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x1c];
    ushort field_0x60; /* +0x60 */
    ushort field_0x62; /* +0x62 */
    ushort field_0x64; /* +0x64 */
};

extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_0017760c. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_004bd274. */
/* Supplied declaration required: FUN_004bd294. */
/* Supplied declaration required: clearTwoWords. */


void FUN_003ecfb4(unsigned int param_1,unsigned char *param_2,fn_003ecfb4_arg2 *param_3,int param_4)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  fn_003ecfb4_arg2 *pfVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  *param_2 = 8;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 2) = param_3->field_0x62;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  param_2[0xd4] = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  if (param_4 != 0) {
    temp_v3 = saveSlotFindSelected();
    *(int *)(param_2 + 0xd8) = (int)*(short *)(temp_v3 + 0x2a);
    temp_v4 = FUN_0017760c(temp_v3);
    *(unsigned int *)(param_2 + 0xdc) = temp_v4;
    *(int *)(param_2 + 0xe0) = (int)*(short *)(temp_v3 + 0x2c);
    temp_v1 = *(short *)(temp_v3 + 0x10);
  }
  else {
    *(int *)(param_2 + 0xd8) = (int)param_3->field_0x2a;
    temp_v4 = FUN_0017760c(param_3);
    *(unsigned int *)(param_2 + 0xdc) = temp_v4;
    *(int *)(param_2 + 0xe0) = (int)param_3->field_0x2c;
    temp_v1 = param_3->field_0x10;
  }
  *(int *)(param_2 + 0xe4) = (int)temp_v1;
  *(unsigned short *)(param_2 + 0xe8) = param_3->field_0x12;
  *(unsigned short *)(param_2 + 0xea) = param_3->field_0x14;
  *(unsigned short *)(param_2 + 0xec) = param_3->field_0x16;
  *(unsigned short *)(param_2 + 0xee) = param_3->field_0x18;
  *(unsigned short *)(param_2 + 0xf0) = param_3->field_0x1a;
  *(unsigned int *)(param_2 + 0xf4) = *(unsigned int *)(param_2 + 0xd8);
  *(unsigned int *)(param_2 + 0xf8) = *(unsigned int *)(param_2 + 0xdc);
  *(unsigned int *)(param_2 + 0xfc) = *(unsigned int *)(param_2 + 0xe0);
  *(unsigned int *)(param_2 + 0x100) = *(unsigned int *)(param_2 + 0xe4);
  *(unsigned int *)(param_2 + 0x104) = *(unsigned int *)(param_2 + 0xe8);
  *(unsigned int *)(param_2 + 0x108) = *(unsigned int *)(param_2 + 0xec);
  *(unsigned int *)(param_2 + 0x10c) = *(unsigned int *)(param_2 + 0xf0);
  *(unsigned short *)(param_2 + 0x110) = param_3->field_0x60;
  *(unsigned short *)(param_2 + 0x112) = 0;
  *(unsigned short *)(param_2 + 0x114) = 0;
  *(unsigned short *)(param_2 + 0x116) = param_3->field_0x64;
  *(unsigned int *)(param_2 + 0x228) = 0;
  clearTwoWords(param_2 + 0x1be);
  clearTwoWords(param_2 + 0x1c6);
  clearTwoWords(param_2 + 0x1ce);
  FUN_002e6dd4(param_2 + 0x1d6,0x50);
  temp_v5 = 0;
  do {
    pfVar6 = param_3;
    FUN_004bd274(param_3,temp_v5 & 0xff);
    *(unsigned short *)(param_2 + temp_v5 * 2 + 0x128) =
         ((unsigned short)(int)pfVar6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x128) & 0xfc00);
    pfVar6 = param_3;
    FUN_004bd294(param_3,temp_v5 & 0xff);
    *(unsigned short *)(param_2 + temp_v5 * 2 + 0x128) =
         (unsigned short)((int)pfVar6 << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x128) & 0x3ff);
    pfVar6 = param_3;
    FUN_004bd274(param_3,temp_v5 & 0xff);
    *(unsigned short *)(param_2 + temp_v5 * 2 + 0x152) =
         ((unsigned short)(int)pfVar6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x152) & 0xfc00);
    pfVar6 = param_3;
    FUN_004bd294(param_3,temp_v5 & 0xff);
    *(unsigned short *)(param_2 + temp_v5 * 2 + 0x152) =
         (unsigned short)(((unsigned int)pfVar6 & 0x3f) << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x152) & 0x3ff);
    temp_v8 = temp_v5 + 1;
    param_2[temp_v5 + 0x1a6] = (char)((unsigned int)pfVar6 & 0x3f);
    temp_v5 = temp_v8;
  } while ((int)temp_v8 < 0x15);
  temp_v5 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_00184310();
  param_2[0x1bb] = *(unsigned char *)(temp_v5 + 0x3b);
  temp_v0 = *(char *)(temp_v5 + 9);
  temp_v2 = 1;
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x04') {
      param_2[0x1bc] = 0;
    }
    else if (temp_v0 == '\x05') {
      temp_v2 = 2;
      param_2[0x1bc] = temp_v2;
    }
  }
  else {
    param_2[0x1bc] = temp_v2;
  }
  temp_v4 = param_3->field_0x38;
  temp_v6 = param_3->field_0x3c;
  temp_v7 = param_3->field_0x40;
  *(unsigned int *)(param_2 + 0x118) = param_3->field_0x34;
  *(unsigned int *)(param_2 + 0x11c) = temp_v4;
  *(unsigned int *)(param_2 + 0x120) = temp_v6;
  *(unsigned int *)(param_2 + 0x124) = temp_v7;
  sysMemClear(param_2 + 0x17c,0x15);
  *(unsigned int *)(param_2 + 0x191) = 0;
  *(unsigned int *)(param_2 + 0x195) = 0;
  *(unsigned int *)(param_2 + 0x199) = 0;
  *(unsigned int *)(param_2 + 0x19d) = 0;
  *(unsigned int *)(param_2 + 0x1a1) = 0;
  param_2[0x1a5] = 0;
  return;
}

} /* extern "C" */
