/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394fd8` (_code @ 0x394fd8, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b8dc0(int);
/* Supplied declaration required: FUN_002c5df8. */


void FUN_00394fd8(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 2;
    temp_v2 = param_2 + temp_v0 * 2;
    temp_v0 = temp_v0 + 2;
    *(short *)(temp_v1 + 0xf0) = *(short *)(temp_v1 + 0xf0) + *(short *)(temp_v2 + 0xf0);
    *(short *)(temp_v1 + 0xf2) = *(short *)(temp_v2 + 0xf2) + *(short *)(temp_v1 + 0xf2);
  } while (temp_v0 < 0x3c);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x168) = *(short *)(temp_v0 + 0x168) + *(short *)(param_2 + temp_v3 * 2 + 0x168);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x3d);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x168)) {
      *(short *)(temp_v0 + 0x168) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 600) = *(short *)(temp_v0 + 600) + *(short *)(param_2 + temp_v3 * 2 + 600);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0xb5);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 600)) {
      *(short *)(temp_v0 + 600) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x348) = *(short *)(temp_v0 + 0x348) + *(short *)(param_2 + temp_v3 * 2 + 0x348);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x12d);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x348)) {
      *(short *)(temp_v0 + 0x348) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x438) = *(short *)(temp_v0 + 0x438) + *(short *)(param_2 + temp_v3 * 2 + 0x438);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x1a5);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x438)) {
      *(short *)(temp_v0 + 0x438) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x528) = *(short *)(temp_v0 + 0x528) + *(short *)(param_2 + temp_v3 * 2 + 0x528);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x21d);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x528)) {
      *(short *)(temp_v0 + 0x528) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x618) = *(short *)(temp_v0 + 0x618) + *(short *)(param_2 + temp_v3 * 2 + 0x618);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x295);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x618)) {
      *(short *)(temp_v0 + 0x618) = (short)temp_v1;
    }
  } while (temp_v3 < 0x78);
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 2;
    *(short *)(temp_v0 + 0x708) = *(short *)(temp_v0 + 0x708) + *(short *)(param_2 + temp_v3 * 2 + 0x708);
    temp_v1 = FUN_002b8dc0(temp_v3 + 0x30d);
    temp_v3 = temp_v3 + 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x708)) {
      *(short *)(temp_v0 + 0x708) = (short)temp_v1;
    }
  } while (temp_v3 < 0x32);
  FUN_002c5df8(param_1 + 0xf49,param_2 + 0xf49,0x101);
  if (param_3 == 0) {
    temp_v0 = 0x79f;
    temp_v1 = 100;
    do {
      temp_v3 = temp_v0 - 1;
      temp_v1 = temp_v1 - 1;
      temp_v2 = param_1 + ((int)temp_v3 >> 3);
      temp_v0 = temp_v0 + 1;
      *(unsigned char *)(temp_v2 + 0xf49) = *(unsigned char *)(temp_v2 + 0xf49) & ~(unsigned char)(1 << (temp_v3 & 7));
    } while (temp_v1 != 0);
  }
  return;
}
