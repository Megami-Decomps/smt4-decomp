/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c49f8` (_code @ 0x2c49f8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002c49f8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x34) = param_2 | *(unsigned int *)(param_1 + 0x34);
  return;
}

} /* extern "C" */
