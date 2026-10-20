/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004658c0` (_code @ 0x4658c0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004658c0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5,unsigned int param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[7] = param_6;
  param_1[4] = param_5 + 8;
  param_1[3] = param_5;
  param_1[5] = param_5 + 0x10;
  param_1[6] = param_5 + 0x18;
  return;
}

} /* extern "C" */
