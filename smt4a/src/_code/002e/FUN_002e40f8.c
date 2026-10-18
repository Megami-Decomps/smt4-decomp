/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e40f8` (_code @ 0x2e40f8, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0064c004; /* 0x64c004 */


void FUN_002e40f8(int *param_1)

{
  if (param_1 != (int *)&DAT_0064c004) {
    *param_1 = *param_1 + 1;
  }
  return;
}
