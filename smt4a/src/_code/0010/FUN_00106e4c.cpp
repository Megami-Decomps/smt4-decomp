/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e4c` (_code @ 0x106e4c, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558a44; /* 0x558a44 */


void FUN_00106e4c(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00558a44;
  *(unsigned char *)(param_1 + 1) = 0;
  return;
}

} /* extern "C" */
