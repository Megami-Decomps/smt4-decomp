/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215c5c` (_code @ 0x215c5c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_00215c5c(unsigned int param_1)

{
  int temp_v0;
  
  if (*(unsigned int *)(DAT_0043e2ac + 0x9870) < param_1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_0043e2ac + 0x9870) - param_1;
  }
  *(int *)(DAT_0043e2ac + 0x9870) = temp_v0;
  return;
}
