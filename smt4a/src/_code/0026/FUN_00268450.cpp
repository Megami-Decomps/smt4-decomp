/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268450` (_code @ 0x268450, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_00268450(int param_1)

{
  if (param_1 >= 100) {
    param_1 = 99;
  }
  *(int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x5448) = param_1;
  return;
}

} /* extern "C" */
