/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001314fc` (_code @ 0x1314fc, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0042209c; /* 0x42209c */


void FUN_001314fc(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0042209c;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned short *)(param_1 + 5) = 0;
  *(unsigned short *)((int)param_1 + 0x16) = 0xffff;
  param_1[4] = 6;
  return;
}

} /* extern "C" */
