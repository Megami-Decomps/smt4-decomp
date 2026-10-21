/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337cfc` (_code @ 0x337cfc, 0x29c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randomGetLowerTenBits(...);
int randomGetUpperSixBits(...);
int devilGetRecord(...);
int FUN_003c8538(...);
int FUN_003c862c(...);

typedef struct fn_00337cfc_arg2 fn_00337cfc_arg2;
struct fn_00337cfc_arg2 {
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
    unsigned char pad_0x49[0x5bb];
    short field_0x604; /* +0x604 */
    ushort field_0x606; /* +0x606 */
};

/* Supplied declaration required: randomGetLowerTenBits. */
/* Supplied declaration required: randomGetUpperSixBits. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6ad0(void);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_003c8538. */
/* Supplied declaration required: FUN_003c862c. */


void FUN_00337cfc(unsigned int param_1,unsigned char *param_2,fn_00337cfc_arg2 *param_3)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  fn_00337cfc_arg2 *pfVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = FUN_002b6ad0();
  *(unsigned short *)(param_2 + 2) = param_3->field_0x46;
  *param_2 = 8;
  *(unsigned short *)(param_2 + 8) = 0xffff;
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
  *(unsigned short *)(param_2 + 0x100) = (unsigned short)param_3->field_0x48;
  temp_v5 = 0;
  if (temp_v3 != 0) {
    *(short *)(param_2 + 4) = param_3->field_0x604;
    *(unsigned short *)(param_2 + 6) = param_3->field_0x606;
    do {
      temp_v2 = (unsigned short)temp_v5 & 0xff;
      FUN_003c8538();
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) =
           (temp_v2 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) & 0xfc00);
      temp_v4 = temp_v5 & 0xff;
      FUN_003c862c();
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) =
           (unsigned short)(temp_v4 << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) & 0x3ff);
      temp_v2 = (unsigned short)temp_v5 & 0xff;
      FUN_003c8538();
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) =
           (temp_v2 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) & 0xfc00);
      temp_v4 = temp_v5 & 0xff;
      FUN_003c862c();
      temp_v6 = temp_v5 + 1;
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) =
           (unsigned short)(temp_v4 << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) & 0x3ff);
      temp_v5 = temp_v6;
    } while ((int)temp_v6 < 0x12);
    temp_v3 = FUN_002b6a54((int)param_3->field_0x604,param_3->field_0x606);
    param_2[0x14a] = (char)((unsigned int)(*(int *)(temp_v3 + 8) << 2) >> 0x18);
  }
  else {
    do {
      pfVar6 = param_3;
      randomGetLowerTenBits(param_3,temp_v5 & 0xff);
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) =
           ((unsigned short)(int)pfVar6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) & 0xfc00);
      pfVar6 = param_3;
      randomGetUpperSixBits(param_3,temp_v5 & 0xff);
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) =
           (unsigned short)((int)pfVar6 << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x102) & 0x3ff);
      pfVar6 = param_3;
      randomGetLowerTenBits(param_3,temp_v5 & 0xff);
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) =
           ((unsigned short)(int)pfVar6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) & 0xfc00);
      pfVar6 = param_3;
      randomGetUpperSixBits(param_3,temp_v5 & 0xff);
      temp_v4 = temp_v5 + 1;
      *(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) =
           (unsigned short)((int)pfVar6 << 10) | (*(unsigned short *)(param_2 + temp_v5 * 2 + 0x126) & 0x3ff);
      temp_v5 = temp_v4;
    } while ((int)temp_v4 < 0x12);
    temp_v5 = (unsigned int)*(unsigned short *)(param_2 + 2);
    devilGetRecord();
    param_2[0x14a] = *(unsigned char *)(temp_v5 + 0x33);
    temp_v0 = *(char *)(temp_v5 + 5);
    temp_v1 = 1;
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x04') {
        param_2[0x14b] = 0;
      }
      else if (temp_v0 == '\x05') {
        temp_v1 = 2;
        param_2[0x14b] = temp_v1;
      }
    }
    else {
      param_2[0x14b] = temp_v1;
    }
  }
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
  *(unsigned short *)(param_2 + 0xfc) = 0;
  *(unsigned short *)(param_2 + 0xfe) = 0;
  *(unsigned int *)(param_2 + 0x184) = 0;
  return;
}

} /* extern "C" */
