/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db048` (_code @ 0x4db048, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004db048(int param_1,unsigned char param_2,unsigned char param_3,unsigned int *param_4)

{
  *(unsigned char *)(param_1 + 0x158) = param_2;
  *(unsigned char *)(param_1 + 0x159) = param_3;
  if (param_4 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x15a) = *param_4;
    *(unsigned int *)(param_1 + 0x15e) = param_4[1];
    *(unsigned int *)(param_1 + 0x162) = param_4[2];
    *(unsigned int *)(param_1 + 0x166) = param_4[3];
  }
  return;
}
