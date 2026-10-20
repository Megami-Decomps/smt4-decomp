/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003683c8` (_code @ 0x3683c8, 0x328 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */


unsigned int FUN_003683c8(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
  case 0x12:
    return 4;
  case 4:
    return 6;
  case 5:
    return 9;
  case 6:
    break;
  case 7:
    puVar1 = (unsigned int *)&DAT_005f15fc;
    if (DAT_005f15fc == 5) {
      puVar1 = DAT_005f1600;
    }
    if (DAT_005f15fc == 5 && puVar1 == (unsigned int *)0x6) {
      temp_v0 = 0x11;
    }
    else {
      temp_v0 = 0x10;
    }
    return temp_v0;
  case 8:
    return 0x12;
  case 9:
    return 0x13;
  case 10:
  case 0x2a:
    return 7;
  case 0xb:
  case 0x2c:
  case 0x2d:
    return 8;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x1d:
  case 0x31:
  case 0x34:
    return 0x20;
  default:
    return 0;
  case 0x13:
  case 0x15:
    return 0xc;
  case 0x14:
  case 0x16:
    return 0xd;
  case 0x18:
  case 0x1b:
  case 0x1c:
    return 0x14;
  case 0x19:
    return 0x15;
  case 0x1a:
    return 0x16;
  case 0x1e:
    return 0xb;
  case 0x1f:
  case 0x28:
    return 0x17;
  case 0x20:
    return 0x18;
  case 0x21:
    return 0x19;
  case 0x22:
    return 10;
  case 0x23:
  case 0x33:
    return 0x1b;
  case 0x24:
  case 0x4f:
    return 0x1a;
  case 0x25:
    return 5;
  case 0x2b:
    return 0x21;
  case 0x2e:
  case 0x52:
    return 0x24;
  case 0x30:
    return 0x1c;
  case 0x35:
    return 0x25;
  case 0x36:
    return 0x27;
  case 0x37:
    return 0x26;
  case 0x38:
    if ((DAT_005f15fc != 0x1c && DAT_005f15fc != 0x1d) &&
       (DAT_005f15fc != 0x1e && DAT_005f15fc != 0x1f)) {
      return 0x12;
    }
    return 0x2c;
  case 0x39:
    return 0x2b;
  case 0x3a:
    return 0x2d;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x43:
    return 0x2e;
  case 0x42:
    return 0x2f;
  case 0x44:
    return 0x33;
  case 0x45:
    return 0x34;
  case 0x46:
    return 0x35;
  case 0x4b:
    return 0x32;
  case 0x4d:
    return 0x28;
  }
  if (DAT_005f15fc != 5) {
    if ((DAT_005f15fc == 3) && (DAT_005f1600 == (unsigned int *)0x3)) {
      return 0xf;
    }
  }
  else if (DAT_005f1600 == (unsigned int *)0x6) {
    return 0xf;
  }
  return 0xe;
}

} /* extern "C" */
