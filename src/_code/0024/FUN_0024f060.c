/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f060` (_code @ 0x24f060, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0024f060(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  *(unsigned short *)(param_1 + 1) = *(unsigned short *)(param_2 + 1);
  *(unsigned char *)((int)param_1 + 6) = *(unsigned char *)((int)param_2 + 6);
  return;
}
