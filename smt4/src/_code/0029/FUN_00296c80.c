/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296c80` (_code @ 0x296c80, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00296c80(unsigned int *param_1,int param_2,unsigned int param_3)

{
  param_1[7] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[4] = param_2;
  param_1[5] = 2;
  param_1[9] = 0;
  param_1[6] = param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  param_1[6] = param_2;
  *param_1 = 6;
  return;
}
