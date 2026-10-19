/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7430` (_code @ 0x2b7430, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002b7430(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(temp_v0 + 4) = piVar2;
  *piVar2 = temp_v0;
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) - 1;
  *(int *)(param_2 + 4) = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  return;
}
