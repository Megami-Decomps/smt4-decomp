/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ab7c` (_code @ 0x40ab7c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0040ab7c(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(unsigned int *)(param_1 + 0x14) = param_2;
  }
  return;
}

} /* extern "C" */
