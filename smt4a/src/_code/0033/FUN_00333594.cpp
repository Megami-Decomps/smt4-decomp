/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333594` (_code @ 0x333594, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_00333594(unsigned int param_1,unsigned int param_2)

{
  if (param_1 < 5) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x10)) + param_1 * 4) = param_2;
  }
  return;
}

} /* extern "C" */
