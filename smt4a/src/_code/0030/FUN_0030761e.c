/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030761e` (_code @ 0x30761e, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0030761e(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return;
}
