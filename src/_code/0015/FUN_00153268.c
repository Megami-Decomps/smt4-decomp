/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153268` (_code @ 0x153268, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00153268(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(unsigned int *)(param_1 + 0x14);
  *param_4 = *(unsigned int *)(param_1 + 0x1c);
  return;
}
