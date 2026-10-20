/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2384` (_code @ 0x1d2384, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001d2384(int param_1)

{
  if (param_1 != 0) {
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
  }
  return;
}

} /* extern "C" */
