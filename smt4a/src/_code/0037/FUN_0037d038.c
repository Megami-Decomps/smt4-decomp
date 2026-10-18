/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d038` (_code @ 0x37d038, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005e2194; /* 0x5e2194 */


void FUN_0037d038(unsigned int param_1,unsigned int param_2)

{
  if (param_1 < 0x20) {
    *(unsigned int *)(&DAT_005e2194 + param_1 * 4) = param_2;
  }
  return;
}
