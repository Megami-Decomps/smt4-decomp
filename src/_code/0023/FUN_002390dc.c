/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002390dc` (_code @ 0x2390dc, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern signed char DAT_004656d0; /* 0x4656d0 */
extern unsigned char DAT_004656d1; /* 0x4656d1 */
extern signed char DAT_004656d3; /* 0x4656d3 */
extern signed char DAT_004656d4; /* 0x4656d4 */
extern unsigned int DAT_00471b58; /* 0x471b58 */
extern int DAT_004e62a8; /* 0x4e62a8 */
extern unsigned int uRam004e62ac; /* 0x4e62ac */
extern int iRam004e62b0; /* 0x4e62b0 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_00239098. */
/* Supplied declaration required: FUN_00239564. */
/* Supplied declaration required: FUN_00239b84. */
/* Supplied declaration required: FUN_0024f07c. */
/* Supplied declaration required: FUN_002a8898. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_002390dc(int *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [8];
  
  FUN_002c3aa8(&DAT_004e62a8);
  if (param_1[1] != 0) {
    if (*(char *)((int)param_1 + 10) != '\0') {
      FUN_00239564(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
    if (*(char *)((int)param_1 + 0xb) != '\0') {
      FUN_00239564(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
    }
    if (DAT_004656d0 != '\0') {
      (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,temp_v2);
      FUN_00239098(param_1);
    }
  }
  (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  param_1[1] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  FUN_002c4b30(param_1 + 0x87,0x18c);
  FUN_002c4b30(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  FUN_002c4b30(param_1 + 0x159,0x318);
  FUN_002c3aa8();
  if (DAT_004656d3 != '\0') {
    FUN_00239b84(param_1[0xea]);
    DAT_004656d3 = '\0';
  }
  FUN_002c3a24(&DAT_004e62b4);
  FUN_002c3aa8();
  if (DAT_004656d4 != '\0') {
    FUN_00239b84(param_1[0x156]);
    DAT_004656d4 = '\0';
  }
  FUN_002c3a24(&DAT_004e62b4);
  *(unsigned short *)(param_1 + 0x7f) = 0x6262;
  *(unsigned short *)(param_1 + 0xeb) = 0x6262;
  *(unsigned short *)(param_1 + 0x157) = 0x6767;
  FUN_0024f07c(0);
  DAT_004656d1 = 0;
  DAT_004656d0 = 0;
  iRam004e62b0 = iRam004e62b0 - 1;
  if (iRam004e62b0 != 0) {
    return;
  }
  uRam004e62ac = 0;
  do {
    temp_v0 = -DAT_004e62a8;
    temp_v1 = (unsigned char)hasExclusiveAccess(0x4e62a8);
  } while (!temp_v1);
  temp_v1 = DAT_004e62a8 != -1;
  DAT_004e62a8 = temp_v0;
  if (temp_v1 && 0 < temp_v0) {
    FUN_002a8898(DAT_00471b58,&DAT_004e62a8,0,1);
  }
  return;
}
