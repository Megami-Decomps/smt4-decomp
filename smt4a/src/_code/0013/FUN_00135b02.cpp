/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135b02` (_code @ 0x135b02, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00135b02(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return;
}

} /* extern "C" */
