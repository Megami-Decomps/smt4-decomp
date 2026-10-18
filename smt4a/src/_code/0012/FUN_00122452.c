/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122452` (_code @ 0x122452, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_00122452(int param_1)

{
  if ((~*(unsigned int *)(param_1 + 0x2c) & 1) == 0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}
