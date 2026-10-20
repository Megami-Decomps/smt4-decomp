/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6660` (_code @ 0x1b6660, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001b6660(int *param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(temp_v0 + 4) = piVar2;
  *piVar2 = temp_v0;
  *param_1 = *param_1 - 1;
  *(int *)(param_2 + 4) = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  return;
}

} /* extern "C" */
