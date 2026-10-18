/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbabc` (_code @ 0x2fbabc, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002fbabc(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x18;
}
