/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337980` (_code @ 0x337980, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00337980_arg2 fn_00337980_arg2;
struct fn_00337980_arg2 {
    unsigned char pad_0x0[0x1c];
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    ushort field_0x2a; /* +0x2a */
    ushort field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x44];
    ushort field_0x72; /* +0x72 */
    unsigned char pad_0x74[0x2];
    byte field_0x76; /* +0x76 */
};

extern int FUN_00247344(void);
extern unsigned short FUN_00258040(unsigned int);
extern short FUN_00258074(unsigned int);


void FUN_00337980(unsigned int param_1,unsigned char *param_2,fn_00337980_arg2 *param_3)

{
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  *param_2 = 1;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 2) = 0;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  param_2[0xd4] = 0;
  *(unsigned short *)(param_2 + 0xd6) = param_3->field_0x2a;
  *(unsigned short *)(param_2 + 0xd8) = param_3->field_0x1c;
  *(unsigned short *)(param_2 + 0xda) = param_3->field_0x2c;
  *(unsigned short *)(param_2 + 0xdc) = param_3->field_0x1e;
  *(unsigned short *)(param_2 + 0xde) = param_3->field_0x20;
  *(unsigned short *)(param_2 + 0xe0) = param_3->field_0x22;
  *(unsigned short *)(param_2 + 0xe2) = param_3->field_0x24;
  *(unsigned short *)(param_2 + 0xe4) = param_3->field_0x26;
  *(unsigned short *)(param_2 + 0xe6) = param_3->field_0x28;
  *(unsigned int *)(param_2 + 0xe8) = *(unsigned int *)(param_2 + 0xd6);
  *(unsigned int *)(param_2 + 0xec) = *(unsigned int *)(param_2 + 0xda);
  *(unsigned int *)(param_2 + 0xf0) = *(unsigned int *)(param_2 + 0xde);
  *(unsigned int *)(param_2 + 0xf4) = *(unsigned int *)(param_2 + 0xe2);
  *(unsigned short *)(param_2 + 0xf8) = *(unsigned short *)(param_2 + 0xe6);
  *(unsigned short *)(param_2 + 0xfa) = param_3->field_0x72;
  *(unsigned short *)(param_2 + 0xfc) = 0;
  *(unsigned short *)(param_2 + 0xfe) = 0;
  *(unsigned short *)(param_2 + 0x100) = (unsigned short)param_3->field_0x76;
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
  temp_v3 = 0;
  do {
    temp_v0 = FUN_00258040(temp_v3 & 0xff);
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x102) =
         (temp_v0 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v3 * 2 + 0x102) & 0xfc00);
    temp_v1 = FUN_00258074(temp_v3 & 0xff);
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x102) =
         (temp_v1 << 10) | (*(unsigned short *)(param_2 + temp_v3 * 2 + 0x102) & 0x3ff);
    temp_v0 = FUN_00258040(temp_v3 & 0xff);
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x126) =
         (temp_v0 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v3 * 2 + 0x126) & 0xfc00);
    temp_v1 = FUN_00258074(temp_v3 & 0xff);
    temp_v4 = temp_v3 + 1;
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x126) =
         (temp_v1 << 10) | (*(unsigned short *)(param_2 + temp_v3 * 2 + 0x126) & 0x3ff);
    temp_v3 = temp_v4;
  } while ((int)temp_v4 < 0x12);
  param_2[0x14a] = 100;
  temp_v2 = FUN_00247344();
  if (temp_v2 == 1) {
    param_2[0x14b] = 1;
  }
  else if (temp_v2 == 4) {
    param_2[0x14b] = 0;
  }
  else if (temp_v2 == 5) {
    param_2[0x14b] = 2;
  }
  return;
}
