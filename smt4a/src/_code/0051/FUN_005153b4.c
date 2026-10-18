/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005153b4` (_code @ 0x5153b4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_005153b4(unsigned int *param_1,unsigned int *param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 1) = 2;
  *(unsigned short *)((int)param_1 + 6) = param_3;
  *param_1 = *param_2;
  return;
}
