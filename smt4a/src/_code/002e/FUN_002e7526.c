/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7526` (_code @ 0x2e7526, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002e7526(unsigned int param_1,unsigned char *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((unsigned int)param_1 >> 8);
  return;
}
