/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005001f8` (_code @ 0x5001f8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_005001f8(int *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int temp_v0;
  
  *param_1 = 0;
  piVar1 = *(int **)(param_2 + 4);
  if ((piVar1 != (int *)0x0) && ((unsigned int)piVar1[1] >= param_3)) {
    temp_v0 = *piVar1 + param_3 * 0x30;
  }
  else {
    temp_v0 = 0;
  }
  *param_1 = temp_v0;
  return;
}
