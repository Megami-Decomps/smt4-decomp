/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002946a0` (_code @ 0x2946a0, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003d4ed8. */


void FUN_002946a0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 0xb:
    temp_v0 = 0x10002ee;
    break;
  case 2:
  case 0xc:
    temp_v0 = -0x10002f1;
    temp_v0 = param_2 - temp_v0;
    FUN_003d4ed8(temp_v0);
    return;
  case 3:
  case 0xd:
    temp_v0 = param_2 + 0x10002f4;
    FUN_003d4ed8(temp_v0);
    return;
  case 4:
  case 6:
  case 0xe:
  case 0x10:
    temp_v0 = 0x10002f7;
    break;
  case 5:
  case 0xf:
    temp_v0 = 0x10002fa;
    break;
  case 7:
  case 9:
  case 0x11:
  case 0x13:
    temp_v0 = -0x10002fd;
    temp_v0 = param_2 - temp_v0;
    FUN_003d4ed8(temp_v0);
    return;
  case 8:
  case 0x12:
    temp_v0 = param_2 + 0x1000300;
    FUN_003d4ed8(temp_v0);
    return;
  case 10:
  case 0x14:
    temp_v0 = 0x1000303;
    break;
  default:
    FUN_003d4ed8(temp_v0);
    return;
  }
  temp_v0 = temp_v0 + param_2;
  FUN_003d4ed8(temp_v0);
  return;
}
