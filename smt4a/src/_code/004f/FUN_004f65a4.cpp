/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f65a4` (_code @ 0x4f65a4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_004f65a4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1f50);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
    *(int *)(param_1 + 0x1f50) = 0;
  }
  return;
}

} /* extern "C" */
