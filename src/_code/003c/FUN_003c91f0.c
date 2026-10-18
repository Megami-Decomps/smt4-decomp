/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c91f0` (_code @ 0x3c91f0, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003c91f0(int param_1,unsigned char param_2,unsigned char param_3,unsigned int *param_4)

{
  *(unsigned char *)(param_1 + 0x120) = param_2;
  *(unsigned char *)(param_1 + 0x121) = param_3;
  if (param_4 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x122) = *param_4;
    *(unsigned int *)(param_1 + 0x126) = param_4[1];
    *(unsigned int *)(param_1 + 0x12a) = param_4[2];
    *(unsigned int *)(param_1 + 0x12e) = param_4[3];
  }
  return;
}
