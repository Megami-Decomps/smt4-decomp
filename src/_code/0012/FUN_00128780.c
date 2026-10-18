/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128780` (_code @ 0x128780, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00128780(unsigned short *param_1)

{
  *param_1 = 0x28;
  param_1[1] = 0x24;
  param_1[2] = 0x28;
  param_1[3] = 0x91;
  param_1[4] = 0x91;
  param_1[5] = 0x91;
  *(unsigned char *)(param_1 + 6) = 0;
  param_1[7] = 0x8d;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0xe) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 8) = 0x3fc00000;
  *(unsigned int *)(param_1 + 10) = 0x430d0000;
  return;
}
