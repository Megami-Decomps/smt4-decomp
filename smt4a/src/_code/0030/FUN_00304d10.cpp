/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00304d10` (_code @ 0x304d10, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00304d10(int param_1,int param_2)

{
  return *(unsigned int *)(*(int *)(param_1 + 0x60) + param_2 * 4);
}

} /* extern "C" */
