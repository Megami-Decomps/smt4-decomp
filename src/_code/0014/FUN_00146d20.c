/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146d20` (_code @ 0x146d20, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00146d20(unsigned int *param_1,unsigned short param_2)

{
  *(unsigned short *)((int)param_1 + 10) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 2) = 0;
  return;
}
