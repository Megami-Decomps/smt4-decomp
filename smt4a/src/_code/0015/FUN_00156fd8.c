/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156fd8` (_code @ 0x156fd8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char s__9___9_9_9_9_5___6_7_005b3d1c[49]; /* 0x5b3d1c */


void FUN_00156fd8(unsigned int *param_1,int param_2)

{
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = *(unsigned int *)(s__9___9_9_9_9_5___6_7_005b3d1c + param_2 * 4);
  return;
}
