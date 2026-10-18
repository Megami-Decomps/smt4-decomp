/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1740` (_code @ 0x2c1740, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea5c; /* 0x44ea5c */


void FUN_002c1740(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_0044ea5c + temp_v0 * 4) == 0) {
      *(unsigned int *)(DAT_0044ea5c + temp_v0 * 4) = param_1;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}
