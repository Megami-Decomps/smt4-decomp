/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea82a` (_code @ 0x2ea82a, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002ea82a(int param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}
