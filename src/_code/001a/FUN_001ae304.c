/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ae304` (_code @ 0x1ae304, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001ae304(int *param_1,int param_2)

{
  return param_1[6] * *(int *)(*param_1 + 8) + param_2 + ((unsigned int)param_1[6] >> 1);
}
