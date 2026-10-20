/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001527d8` (_code @ 0x1527d8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001527d8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x38) = param_2 & 0xffffff00;
  return;
}

} /* extern "C" */
