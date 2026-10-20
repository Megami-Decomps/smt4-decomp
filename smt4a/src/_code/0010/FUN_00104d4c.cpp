/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104d4c` (_code @ 0x104d4c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


short FUN_00104d4c(int param_1)

{
  if (*(short *)(param_1 + 0x98) != 0) {
    return *(short *)(param_1 + 0x98);
  }
  return *(short *)(*(int *)(param_1 + 0xc) + 0xc0);
}

} /* extern "C" */
