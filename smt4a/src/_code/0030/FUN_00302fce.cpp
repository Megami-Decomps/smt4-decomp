/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302fce` (_code @ 0x302fce, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00302fce(int param_1)

{
  if (*(int *)(param_1 + 0xe8) - 1U < 299) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
