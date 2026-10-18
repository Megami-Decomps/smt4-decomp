/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea2b4` (_code @ 0x2ea2b4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int FUN_002ea2b4(int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = *(int *)(param_2 + 4);
  *(unsigned int *)(param_2 + 4) = 0;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
  }
  *(int *)(param_1 + 4) = temp_v0;
  return param_1;
}
