/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdd18` (_code @ 0x2cdd18, 0x2c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_00212204. */


void FUN_002cdd18(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (0 < *(int *)(param_1 + 0x3f8)) {
    FUN_00163aa4(param_1 + 0x2dc);
  }
  switch(*(unsigned int *)(param_1 + 0x3f8)) {
  case 2:
    FUN_00163aa4(param_1 + 0x1c4);
    temp_v0 = FUN_00163aa4(param_1 + 0x20);
    if (((temp_v0 != 0) && (temp_v0 = FUN_00163aa4(param_1 + 0xac), temp_v0 != 0)) &&
       (temp_v0 = FUN_00163aa4(param_1 + 0x138), temp_v0 != 0)) {
      FUN_001846d0(param_1 + 0x20,3);
      FUN_001846d0(param_1 + 0xac,3);
      FUN_001846d0(param_1 + 0x1c4,3);
      *(unsigned int *)(param_1 + 0x3f4) = 0;
      *(unsigned int *)(param_1 + 0x3f8) = 3;
    }
    break;
  case 3:
    FUN_00163aa4(param_1 + 0x20);
    FUN_00163aa4(param_1 + 0xac);
    FUN_00163aa4(param_1 + 0x1c4);
    if ((*(char *)(param_1 + 0xaa) == '\0') || (*(char *)(param_1 + 0x136) == '\0')) break;
    *(unsigned char *)(param_1 + 0xa5) = 0;
    *(unsigned char *)(param_1 + 0x131) = 0;
    *(unsigned char *)(param_1 + 0x1bd) = 0;
    *(unsigned char *)(param_1 + 0x249) = 0;
  case 9:
    *(unsigned int *)(param_1 + 0x3f4) = 0;
    *(unsigned int *)(param_1 + 0x3f8) = 1;
    break;
  case 4:
    FUN_00163aa4(param_1 + 0x1c4);
    temp_v0 = FUN_00163aa4(param_1 + 0x20);
    if ((temp_v0 != 0) && (temp_v0 = FUN_00163aa4(param_1 + 0xac), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 0x3f4) = 0;
      *(unsigned int *)(param_1 + 0x3f8) = 6;
    }
    break;
  case 5:
    temp_v0 = FUN_00163aa4(param_1 + 0x368);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0x3f4) = 0;
      *(unsigned int *)(param_1 + 0x3f8) = 7;
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x404) < 0) {
      FUN_001f4908(0,2,0xff0000ff);
      *(unsigned int *)(param_1 + 0x3f4) = 0;
      *(unsigned int *)(param_1 + 0x3f8) = 8;
    }
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) - 1;
    break;
  case 8:
    temp_v0 = FUN_00163e84(0);
    if (temp_v0 != 0) {
      *(unsigned char *)(param_1 + 0xa5) = 0;
      *(unsigned char *)(param_1 + 0x131) = 0;
      *(unsigned char *)(param_1 + 0x1bd) = 0;
      *(unsigned char *)(param_1 + 0x3ed) = 0;
      *(unsigned char *)(param_1 + 0x249) = 0;
      FUN_00212204(0);
      *(unsigned int *)(param_1 + 0x3f4) = 0;
      *(unsigned int *)(param_1 + 0x3f8) = 9;
    }
  }
  *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
  return;
}
