/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015903c` (_code @ 0x15903c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0015903c(int *param_1)

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

} /* extern "C" */
