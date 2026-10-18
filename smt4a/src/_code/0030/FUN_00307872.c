/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307872` (_code @ 0x307872, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00307872(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}
