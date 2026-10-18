/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8354` (_code @ 0x3e8354, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003e8354(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x21f) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 8;
  }
  return param_1;
}
