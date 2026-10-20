/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00483b30` (_code @ 0x483b30, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00483b30(int param_1)

{
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x98) + 4))();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x9c) + 4))();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

} /* extern "C" */
