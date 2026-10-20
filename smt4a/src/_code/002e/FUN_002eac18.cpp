/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eac18` (_code @ 0x2eac18, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002eac18(int param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_1 + 8) + param_2;
  }
  return param_1 + 0xc;
}

} /* extern "C" */
