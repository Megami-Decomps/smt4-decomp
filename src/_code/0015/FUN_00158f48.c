/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158f48` (_code @ 0x158f48, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00158f48(int *param_1)

{
  switch(*(unsigned int *)(*param_1 + 8)) {
  case 0:
  case 1:
  case 7:
    return 4;
  case 2:
    return 1;
  case 3:
    return 8;
  case 4:
    return 0xc;
  case 5:
    return 0x40;
  case 6:
    return 0x10;
  default:
    return 0;
  }
}
