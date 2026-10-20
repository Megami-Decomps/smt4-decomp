/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e296c` (_code @ 0x1e296c, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00291e40(int);

/* Supplied declaration required: FUN_00291e40. */


void FUN_001e296c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 0xb:
    temp_v0 = 0x1000242;
    break;
  case 2:
  case 0xc:
    temp_v0 = -0x1000245;
    temp_v0 = param_2 - temp_v0;
    FUN_00291e40(temp_v0);
    return;
  case 3:
  case 0xd:
    temp_v0 = param_2 + 0x1000248;
    FUN_00291e40(temp_v0);
    return;
  case 4:
  case 6:
  case 0xe:
  case 0x10:
    temp_v0 = 0x100024b;
    break;
  case 5:
  case 0xf:
    temp_v0 = 0x100024e;
    break;
  case 7:
  case 9:
  case 0x11:
  case 0x13:
    temp_v0 = -0x1000251;
    temp_v0 = param_2 - temp_v0;
    FUN_00291e40(temp_v0);
    return;
  case 8:
  case 0x12:
    temp_v0 = param_2 + 0x1000254;
    FUN_00291e40(temp_v0);
    return;
  case 10:
  case 0x14:
    temp_v0 = 0x1000257;
    break;
  default:
    FUN_00291e40(temp_v0);
    return;
  }
  temp_v0 = temp_v0 + param_2;
  FUN_00291e40(temp_v0);
  return;
}

} /* extern "C" */
