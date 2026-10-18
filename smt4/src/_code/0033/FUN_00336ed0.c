/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336ed0` (_code @ 0x336ed0, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00336ed0_arg2 fn_00336ed0_arg2;
struct fn_00336ed0_arg2 {
    unsigned char pad_0x0[0xe];
    ushort field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    ushort field_0x12; /* +0x12 */
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    unsigned char pad_0x1c[0xe];
    ushort field_0x2a; /* +0x2a */
    ushort field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x16];
    ushort field_0x44; /* +0x44 */
    ushort field_0x46; /* +0x46 */
    byte field_0x48; /* +0x48 */
};

extern unsigned short FUN_0023eb7c(fn_00336ed0_arg2 *);
/* Supplied declaration required: FUN_00257dec. */
/* Supplied declaration required: FUN_00269bd0. */
/* Supplied declaration required: FUN_002b9024. */


void FUN_00336ed0(unsigned int param_1,unsigned char *param_2,fn_00336ed0_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  fn_00336ed0_arg2 *pfVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  *param_2 = 2;
  temp_v1 = FUN_0023eb7c(param_3);
  *(unsigned short *)(param_2 + 8) = temp_v1;
  *(unsigned short *)(param_2 + 2) = param_3->field_0x46;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  param_2[0xd4] = 0;
  *(unsigned short *)(param_2 + 0xd6) = param_3->field_0x2a;
  *(unsigned short *)(param_2 + 0xd8) = param_3->field_0xe;
  *(unsigned short *)(param_2 + 0xda) = param_3->field_0x2c;
  *(unsigned short *)(param_2 + 0xdc) = param_3->field_0x10;
  *(unsigned short *)(param_2 + 0xde) = param_3->field_0x12;
  *(unsigned short *)(param_2 + 0xe0) = param_3->field_0x14;
  *(unsigned short *)(param_2 + 0xe2) = param_3->field_0x16;
  *(unsigned short *)(param_2 + 0xe4) = param_3->field_0x18;
  *(unsigned short *)(param_2 + 0xe6) = param_3->field_0x1a;
  *(unsigned int *)(param_2 + 0xe8) = *(unsigned int *)(param_2 + 0xd6);
  *(unsigned int *)(param_2 + 0xec) = *(unsigned int *)(param_2 + 0xda);
  *(unsigned int *)(param_2 + 0xf0) = *(unsigned int *)(param_2 + 0xde);
  *(unsigned int *)(param_2 + 0xf4) = *(unsigned int *)(param_2 + 0xe2);
  *(unsigned short *)(param_2 + 0xf8) = *(unsigned short *)(param_2 + 0xe6);
  *(unsigned short *)(param_2 + 0xfa) = param_3->field_0x44;
  *(unsigned short *)(param_2 + 0xfc) = 0;
  *(unsigned short *)(param_2 + 0xfe) = 0;
  *(unsigned short *)(param_2 + 0x100) = (unsigned short)param_3->field_0x48;
  *(unsigned int *)(param_2 + 0x184) = 0;
  *(unsigned int *)(param_2 + 0x14c) = 0;
  *(unsigned int *)(param_2 + 0x150) = 0;
  *(unsigned int *)(param_2 + 0x154) = 0;
  *(unsigned int *)(param_2 + 0x158) = 0;
  *(unsigned int *)(param_2 + 0x15c) = 0;
  *(unsigned int *)(param_2 + 0x160) = 0;
  *(unsigned int *)(param_2 + 0x164) = 0;
  *(unsigned int *)(param_2 + 0x168) = 0;
  *(unsigned int *)(param_2 + 0x16c) = 0;
  *(unsigned int *)(param_2 + 0x170) = 0;
  *(unsigned int *)(param_2 + 0x174) = 0;
  *(unsigned int *)(param_2 + 0x178) = 0;
  *(unsigned int *)(param_2 + 0x17c) = 0;
  *(unsigned int *)(param_2 + 0x180) = 0;
  temp_v2 = 0;
  do {
    pfVar3 = param_3;
    FUN_00257dec(param_3,temp_v2 & 0xff);
    *(unsigned short *)(param_2 + temp_v2 * 2 + 0x102) =
         ((unsigned short)pfVar3 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v2 * 2 + 0x102) & 0xfc00);
    pfVar3 = param_3;
    FUN_00269bd0(param_3,temp_v2 & 0xff);
    *(unsigned short *)(param_2 + temp_v2 * 2 + 0x102) =
         (unsigned short)((int)pfVar3 << 10) | (*(unsigned short *)(param_2 + temp_v2 * 2 + 0x102) & 0x3ff);
    pfVar3 = param_3;
    FUN_00257dec(param_3,temp_v2 & 0xff);
    *(unsigned short *)(param_2 + temp_v2 * 2 + 0x126) =
         ((unsigned short)pfVar3 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v2 * 2 + 0x126) & 0xfc00);
    pfVar3 = param_3;
    FUN_00269bd0(param_3,temp_v2 & 0xff);
    temp_v3 = temp_v2 + 1;
    *(unsigned short *)(param_2 + temp_v2 * 2 + 0x126) =
         (unsigned short)((int)pfVar3 << 10) | (*(unsigned short *)(param_2 + temp_v2 * 2 + 0x126) & 0x3ff);
    temp_v2 = temp_v3;
  } while ((int)temp_v3 < 0x12);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_002b9024();
  param_2[0x14a] = *(unsigned char *)(temp_v2 + 0x33);
  temp_v0 = *(char *)(temp_v2 + 5);
  if (temp_v0 == '\x01') {
    param_2[0x14b] = 1;
  }
  else if (temp_v0 == '\x04') {
    param_2[0x14b] = 0;
  }
  else if (temp_v0 == '\x05') {
    param_2[0x14b] = 2;
  }
  return;
}
