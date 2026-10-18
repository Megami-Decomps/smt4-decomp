/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269748` (_code @ 0x269748, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00269748(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x14) = param_2;
  *param_2 = *param_2 + 1;
  return;
}
