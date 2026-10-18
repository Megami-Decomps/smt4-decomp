/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea2d2` (_code @ 0x2ea2d2, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int FUN_002ea2d2(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}
