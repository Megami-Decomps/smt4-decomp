/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7dd8` (_code @ 0x2a7dd8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002a7dd8(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(unsigned int *)(param_1 + 4);
}
