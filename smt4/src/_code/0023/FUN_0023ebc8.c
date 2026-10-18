/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ebc8` (_code @ 0x23ebc8, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_0023ebc8(unsigned int param_1,unsigned char *param_2,unsigned short *param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  *param_2 = 4;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 2) = *param_3;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  FUN_002c4938(param_2 + 0xc,200);
  *(int *)(param_2 + 0xc) = (int)(short)param_3[0x44];
  param_2[0xd4] = *(unsigned char *)((int)param_3 + 3) & 1;
  temp_v0 = *(char *)(param_3 + 0x4f);
  temp_v4 = temp_v0 == '\0';
  if (temp_v4) {
    temp_v0 = *(char *)((int)param_3 + 0x9f);
  }
  if (!(temp_v4 && temp_v0 == '\0')) {
    param_2[0xd4] = 1;
  }
  else {
    param_2[0xd4] = 0;
  }
  *(short *)(param_2 + 0xd6) = (short)*(unsigned int *)(param_3 + 2);
  *(short *)(param_2 + 0xd8) = (short)*(unsigned int *)(param_3 + 2);
  *(short *)(param_2 + 0xda) = (short)*(unsigned int *)(param_3 + 4);
  *(short *)(param_2 + 0xdc) = (short)*(unsigned int *)(param_3 + 4);
  *(unsigned short *)(param_2 + 0xde) = param_3[6];
  *(unsigned short *)(param_2 + 0xe0) = param_3[7];
  *(unsigned short *)(param_2 + 0xe2) = param_3[8];
  *(unsigned short *)(param_2 + 0xe4) = param_3[9];
  *(unsigned short *)(param_2 + 0xe6) = param_3[10];
  *(unsigned int *)(param_2 + 0xe8) = *(unsigned int *)(param_2 + 0xd6);
  *(unsigned int *)(param_2 + 0xec) = *(unsigned int *)(param_2 + 0xda);
  *(unsigned int *)(param_2 + 0xf0) = *(unsigned int *)(param_2 + 0xde);
  *(unsigned int *)(param_2 + 0xf4) = *(unsigned int *)(param_2 + 0xe2);
  *(unsigned short *)(param_2 + 0xf8) = *(unsigned short *)(param_2 + 0xe6);
  *(unsigned short *)(param_2 + 0xfa) = 0;
  *(unsigned short *)(param_2 + 0xfc) = 0;
  *(unsigned short *)(param_2 + 0xfe) = 0;
  *(unsigned short *)(param_2 + 0x100) = (unsigned short)*(unsigned char *)(param_3 + 1);
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
  temp_v3 = 0x12;
  *(unsigned int *)(param_2 + 0x180) = 0;
  temp_v1 = 0;
  do {
    temp_v3 = temp_v3 - 1;
    *(unsigned short *)(param_2 + temp_v1 * 2 + 0x102) = param_3[temp_v1 + 0x12];
    *(unsigned short *)(param_2 + temp_v1 * 2 + 0x126) = param_3[temp_v1 + 0x12];
    temp_v1 = temp_v1 + 1;
  } while (temp_v3 != 0);
  param_2[0x14a] = *(unsigned char *)((int)param_3 + 0x6b);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_002b9024();
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
