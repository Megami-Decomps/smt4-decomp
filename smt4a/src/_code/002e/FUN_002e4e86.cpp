/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4e86` (_code @ 0x2e4e86, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_002e4e86(unsigned int *param_1,unsigned int *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

} /* extern "C" */
