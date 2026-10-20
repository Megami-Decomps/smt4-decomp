/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016d338` (_code @ 0x16d338, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0016d338(int *param_1,int param_2)

{
  *param_1 = param_2;
  if ((unsigned int *)param_1[3] != (unsigned int *)0x0) {
    *(unsigned int *)param_1[3] = (unsigned int)(param_2 - param_1[2]) >> 3;
  }
  param_1[1] = *param_1;
  param_1[3] = 0;
  param_1[2] = *param_1;
  param_1[4] = 0;
  return;
}

} /* extern "C" */
