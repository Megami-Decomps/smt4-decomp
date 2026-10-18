/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001615e4` (_code @ 0x1615e4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0061a50c; /* 0x61a50c */


void FUN_001615e4(unsigned int param_1)

{
  if (DAT_0061a50c != 0) {
    *(unsigned int *)(DAT_0061a50c + 0x38) = param_1;
  }
  return;
}
