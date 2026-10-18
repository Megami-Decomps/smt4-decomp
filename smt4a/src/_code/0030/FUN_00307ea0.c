/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307ea0` (_code @ 0x307ea0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00307ea0(int *param_1,int param_2,int param_3)

{
  return (((*param_1 - param_2) >> 2) * 0x20 + param_1[1]) - param_3;
}
