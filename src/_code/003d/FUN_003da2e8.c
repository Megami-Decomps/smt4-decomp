/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da2e8` (_code @ 0x3da2e8, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003da2e8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1cf8);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
    *(int *)(param_1 + 0x1cf8) = 0;
  }
  return;
}
