/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149840` (_code @ 0x149840, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0061a594; /* 0x61a594 */


void FUN_00149840(unsigned int param_1,unsigned int param_2)

{
  *(unsigned int *)(DAT_0061a594 * 4 + 0x61a5a4) = param_1;
  *(unsigned int *)(DAT_0061a594 * 4 + 0x61a5b0) = param_2;
  return;
}
