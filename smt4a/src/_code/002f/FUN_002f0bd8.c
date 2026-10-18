/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0bd8` (_code @ 0x2f0bd8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_002f0bd8(unsigned int param_1)

{
  int temp_v0;
  
  if (*(unsigned int *)(DAT_0057f69c + 0x2db8) < param_1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_0057f69c + 0x2db8) - param_1;
  }
  *(int *)(DAT_0057f69c + 0x2db8) = temp_v0;
  return;
}
