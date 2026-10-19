/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a46c` (_code @ 0x13a46c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00640130; /* 0x640130 */


void FUN_0013a46c(int param_1,int param_2)

{
  if (param_1 < 0x200) {
    (&DAT_00640130)[param_1] = param_2 != 0;
  }
  return;
}
