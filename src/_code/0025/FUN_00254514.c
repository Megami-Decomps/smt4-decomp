/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254514` (_code @ 0x254514, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044deb8; /* 0x44deb8 */


void FUN_00254514(int param_1,unsigned int param_2)

{
  *(unsigned int *)(DAT_0044deb8 + param_1 * 4 + 0xd8) = param_2;
  return;
}
