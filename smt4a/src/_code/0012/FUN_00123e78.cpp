/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123e78` (_code @ 0x123e78, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00123e78(int param_1)

{
  if (*(short *)(param_1 + 0x1c) != 0x40) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
