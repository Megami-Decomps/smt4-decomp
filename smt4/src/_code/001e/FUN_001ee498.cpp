/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee498` (_code @ 0x1ee498, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001ee498(int param_1)

{
  switch((*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5) {
  default:
    return 0;
  case 1:
  case 3:
  case 5:
  case 6:
  case 8:
    return 1;
  }
}

} /* extern "C" */
