/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003116c8` (_code @ 0x3116c8, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003116c8(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  if (param_2 != (unsigned short *)0x0) {
    *param_2 = *param_3;
    *(unsigned int *)(param_2 + 2) = *(unsigned int *)(param_3 + 2);
  }
  return;
}
