/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eac34` (_code @ 0x2eac34, 0x288 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */


unsigned int FUN_002eac34(unsigned int param_1)

{
  int temp_v0;
  
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
    if ((DAT_0049f91c != 0x1a) && ((DAT_0049f91c != 5 || (DAT_0049f920 != 6)))) {
      return 0x10;
    }
    return 0x11;
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
    return 0x20;
  default:
    return 0;
  case 0x13:
    return 0xc;
  case 0x14:
  case 0x16:
    return 0xd;
  case 0x15:
  case 0x1e:
    return 0xb;
  case 0x18:
  case 0x1b:
  case 0x1c:
    return 0x14;
  case 0x19:
    return 0x15;
  case 0x1a:
    return 0x16;
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
    return 0x1b;
  case 0x24:
    return 0x1a;
  case 0x25:
    return 5;
  case 0x2b:
    return 0x21;
  case 0x2e:
    return 0x22;
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x35:
  case 0x37:
    return 0x23;
  case 0x36:
    return 0x24;
  case 0x3c:
    return 0x27;
  }
  if ((((DAT_0049f91c != 0x19 && DAT_0049f91c != 0x1a) &&
       (DAT_0049f91c != 0x1b && DAT_0049f91c != 0x1c)) &&
      (DAT_0049f91c != 0x1d && DAT_0049f91c != 0x1e)) &&
     ((DAT_0049f91c != 0x1f && DAT_0049f91c != 0x20 &&
      ((DAT_0049f91c != 0x21 && DAT_0049f91c != 0x22) && DAT_0049f91c != 0x23)))) {
    temp_v0 = DAT_0049f91c;
    if (DAT_0049f91c == 5) {
      temp_v0 = DAT_0049f920;
    }
    if (DAT_0049f91c != 5 || temp_v0 != 6) {
      return 0xe;
    }
  }
  return 0xf;
}

} /* extern "C" */
