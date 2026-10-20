/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296c60` (_code @ 0x296c60, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00296c60(int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4,
                 unsigned char param_5)

{
  *(unsigned char *)(param_1 + 4) = param_2;
  *(unsigned char *)(param_1 + 5) = param_3;
  *(unsigned char *)(param_1 + 6) = param_4;
  *(unsigned char *)(param_1 + 7) = param_5;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
  return;
}

} /* extern "C" */
