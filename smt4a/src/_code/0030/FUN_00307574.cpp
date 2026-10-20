/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307574` (_code @ 0x307574, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00307574(unsigned short *param_1,unsigned short *param_2,unsigned short *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (unsigned short *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}

} /* extern "C" */
