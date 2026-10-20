/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004669c8` (_code @ 0x4669c8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b8e18(int);
int FUN_0045f9b4(int);

extern signed char DAT_00646b3a; /* 0x646b3a */

/* Supplied declaration required: FUN_001b8e18. */
/* Supplied declaration required: FUN_0045f9b4. */


void FUN_004669c8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned long long temp_v3;
  
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x1a0) = param_2;
  *(unsigned int *)(param_1 + 0x1a4) = param_3;
  *(unsigned char *)(param_1 + 0x138) = 0;
  *(unsigned char *)(param_1 + 0x13b) = 1;
  *(unsigned char *)(param_1 + 0x13c) = 0;
  *(unsigned char *)(param_1 + 0x13d) = 0;
  *(unsigned char *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 400) = 0;
  *(unsigned char *)(param_1 + 0x194) = 0x3c;
  *(unsigned char *)(param_1 + 0x195) = 0x3c;
  temp_v3 = 0x3f800000;
  *(unsigned int *)(param_1 + 0x174) = 0;
  *(unsigned int *)(param_1 + 0x178) = 0;
  *(unsigned int *)(param_1 + 0x17c) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x188) = 0;
  *(unsigned int *)(param_1 + 0x18c) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x140) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x164) = 0;
  *(unsigned int *)(param_1 + 0x144) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x148) = 0;
  *(unsigned int *)(param_1 + 0x14c) = 0;
  *(unsigned int *)(param_1 + 0x150) = 0;
  *(unsigned char *)(param_1 + 0x13e) = 0;
  *(unsigned int *)(param_1 + 0x154) = 0;
  *(unsigned int *)(param_1 + 0x158) = 0;
  *(unsigned int *)(param_1 + 0x15c) = 0;
  *(unsigned int *)(param_1 + 0x160) = 0;
  *(unsigned char *)(param_1 + 0x180) = 0xff;
  *(unsigned char *)(param_1 + 0x181) = 0xff;
  *(unsigned short *)(param_1 + 0x182) = 0;
  *(unsigned short *)(param_1 + 0x184) = 0;
  *(unsigned int *)(param_1 + 0x168) = 0;
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x16c) = 0;
  FUN_0045f9b4(param_1 + 0x98);
  temp_v2 = 0;
  do {
    FUN_001b8e18(param_1 + temp_v2 * 0x20 + 0xb4);
    temp_v1 = param_1 + temp_v2;
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x134) = 0;
  } while (temp_v2 < 4);
  *(unsigned char *)(param_1 + 0x196) = 0;
  temp_v0 = 0;
  if (DAT_00646b3a == '\0') {
    temp_v0 = 2;
  }
  else if (DAT_00646b3a == '\x01') {
    temp_v0 = 1;
  }
  *(unsigned char *)(param_1 + 0x197) = temp_v0;
  *(int *)(param_1 + 0x198) = (int)temp_v3;
  *(int *)(param_1 + 0x19c) = (int)temp_v3;
  return;
}

} /* extern "C" */
