/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103fb0` (_code @ 0x103fb0, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_00103fb0(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1 + *(int *)(DAT_0043e2ac + 0x1f4e0);
  if (temp_v0 >= 36000000) {
    *(unsigned int *)(DAT_0043e2ac + 0x1f4e0) = 35999999;
  }
  else {
    *(unsigned int *)(DAT_0043e2ac + 0x1f4e0) = temp_v0;
  }
  return;
}
