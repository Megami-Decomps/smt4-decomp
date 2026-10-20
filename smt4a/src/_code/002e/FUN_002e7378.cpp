/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7378` (_code @ 0x2e7378, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e7378(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(*(int *)(param_1 + 8) + 0x10) < param_2) {
    return 0;
  }
  *(unsigned int *)(param_1 + 0xc) = param_2;
  return 1;
}

} /* extern "C" */
