/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f72d0` (_code @ 0x3f72d0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003f72d0(unsigned int *param_1,unsigned int *param_2,unsigned char param_3)

{
  *(unsigned char *)(param_1 + 1) = 4;
  *(unsigned char *)((int)param_1 + 6) = param_3;
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
