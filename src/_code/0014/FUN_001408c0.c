/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001408c0` (_code @ 0x1408c0, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001408c0(unsigned int *param_1)

{
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  *(unsigned char *)((int)param_1 + 0x16) = 0;
  *(unsigned char *)((int)param_1 + 0x17) = 0;
  *(unsigned short *)(param_1 + 8) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
