/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f72e8` (_code @ 0x3f72e8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003f72e8(unsigned int *param_1,unsigned int *param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 1) = 2;
  *(unsigned short *)((int)param_1 + 6) = param_3;
  *param_1 = *param_2;
  return;
}
