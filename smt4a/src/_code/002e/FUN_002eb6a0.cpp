/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb6a0` (_code @ 0x2eb6a0, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002eb6a0(unsigned int param_1,int *param_2,int *param_3)

{
  *(int *)(*param_2 + 0xc) = *param_3;
  *(int *)(*param_3 + 0x10) = *param_2;
  return;
}

} /* extern "C" */
