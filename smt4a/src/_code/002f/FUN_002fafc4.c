/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fafc4` (_code @ 0x2fafc4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005590ac; /* 0x5590ac */


void FUN_002fafc4(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_005590ac;
  return;
}
