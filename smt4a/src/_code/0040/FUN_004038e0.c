/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004038e0` (_code @ 0x4038e0, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Removing unreachable block (ram,0x0040398c) */

unsigned int FUN_004038e0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0x3e9;
  if (param_2 == 0) {
    param_2 = 1;
  }
  switch(param_2) {
  default:
    return 0x3e9;
  case 1:
  case 2:
    return temp_v0;
  case 3:
    temp_v0 = 0x3ea;
    return temp_v0;
  case 5:
  case 6:
    return 0x3eb;
  case 7:
  case 8:
    return 0x3ec;
  case 9:
  case 10:
    return 0x3ed;
  case 0xb:
  case 0xc:
    return 0x3ee;
  case 0xd:
  case 0xe:
    return 0x3ef;
  case 0xf:
  case 0x10:
    return 0x3f0;
  case 0x11:
  case 0x12:
    return 0x3f2;
  }
}
