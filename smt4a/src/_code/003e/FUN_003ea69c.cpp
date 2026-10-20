/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea69c` (_code @ 0x3ea69c, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char *, int);
int FUN_002e6dd4(unsigned char *, int);
int FUN_0050d71c(unsigned char *);

typedef struct fn_003ea69c_arg2 fn_003ea69c_arg2;
struct fn_003ea69c_arg2 {
    unsigned char pad_0x0[0x1c];
    short field_0x1c; /* +0x1c */
    short field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x6];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x1a];
    ushort field_0x5e; /* +0x5e */
    unsigned char pad_0x60[0x2];
    ushort field_0x62; /* +0x62 */
};

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned short FUN_003dfe2c(unsigned int);
extern int FUN_003dfe60(void);
extern short FUN_003dfea0(unsigned int);
/* Supplied declaration required: FUN_0050d71c. */


void FUN_003ea69c(unsigned int param_1,unsigned char *param_2,fn_003ea69c_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  *param_2 = 1;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 2) = 0;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  param_2[0xd4] = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  temp_v4 = param_3->field_0x2a;
  *(int *)(param_2 + 0xd8) = (int)temp_v4;
  temp_v0 = param_3->field_0x1c;
  *(int *)(param_2 + 0xdc) = (int)temp_v0;
  temp_v1 = param_3->field_0x2c;
  *(int *)(param_2 + 0xe0) = (int)temp_v1;
  temp_v2 = param_3->field_0x1e;
  *(int *)(param_2 + 0xe4) = (int)temp_v2;
  *(unsigned short *)(param_2 + 0xe8) = param_3->field_0x20;
  *(unsigned short *)(param_2 + 0xea) = param_3->field_0x22;
  *(unsigned short *)(param_2 + 0xec) = param_3->field_0x24;
  *(unsigned short *)(param_2 + 0xee) = param_3->field_0x26;
  *(unsigned short *)(param_2 + 0xf0) = param_3->field_0x28;
  *(int *)(param_2 + 0xf4) = (int)temp_v4;
  *(int *)(param_2 + 0xf8) = (int)temp_v0;
  *(int *)(param_2 + 0xfc) = (int)temp_v1;
  *(int *)(param_2 + 0x100) = (int)temp_v2;
  *(unsigned int *)(param_2 + 0x104) = *(unsigned int *)(param_2 + 0xe8);
  *(unsigned int *)(param_2 + 0x108) = *(unsigned int *)(param_2 + 0xec);
  *(unsigned int *)(param_2 + 0x10c) = *(unsigned int *)(param_2 + 0xf0);
  *(unsigned short *)(param_2 + 0x110) = param_3->field_0x5e;
  *(unsigned short *)(param_2 + 0x112) = 0;
  *(unsigned short *)(param_2 + 0x114) = 0;
  *(unsigned short *)(param_2 + 0x116) = param_3->field_0x62;
  *(unsigned int *)(param_2 + 0x228) = 0;
  FUN_0050d71c(param_2 + 0x1be);
  FUN_0050d71c(param_2 + 0x1c6);
  FUN_0050d71c(param_2 + 0x1ce);
  FUN_002e6dd4(param_2 + 0x1d6,0x50);
  temp_v9 = 0;
  do {
    temp_v3 = FUN_003dfe2c(temp_v9 & 0xff);
    *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
         (temp_v3 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0xfc00);
    temp_v4 = FUN_003dfea0(temp_v9 & 0xff);
    *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
         (temp_v4 << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0x3ff);
    temp_v3 = FUN_003dfe2c(temp_v9 & 0xff);
    *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
         (temp_v3 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0xfc00);
    temp_v4 = FUN_003dfea0(temp_v9 & 0xff);
    *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
         (temp_v4 << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0x3ff);
    temp_v10 = temp_v9 + 1;
    param_2[temp_v9 + 0x1a6] = (unsigned char)temp_v4 & 0x3f;
    temp_v9 = temp_v10;
  } while ((int)temp_v10 < 0x15);
  param_2[0x1bb] = 100;
  temp_v5 = FUN_003dfe60();
  if (temp_v5 == 1) {
    param_2[0x1bc] = 1;
  }
  else if (temp_v5 == 4) {
    param_2[0x1bc] = 0;
  }
  else if (temp_v5 == 5) {
    param_2[0x1bc] = 2;
  }
  temp_v6 = param_3->field_0x38;
  temp_v7 = param_3->field_0x3c;
  temp_v8 = param_3->field_0x40;
  *(unsigned int *)(param_2 + 0x118) = param_3->field_0x34;
  *(unsigned int *)(param_2 + 0x11c) = temp_v6;
  *(unsigned int *)(param_2 + 0x120) = temp_v7;
  *(unsigned int *)(param_2 + 0x124) = temp_v8;
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
