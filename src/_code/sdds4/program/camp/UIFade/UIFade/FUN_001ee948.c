/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee948` (_code @ 0x1ee948, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd3c; /* 0x43dd3c */


void FUN_001ee948(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043dd3c;
  if (DAT_0043dd3c != 0) {
    *(unsigned int *)(DAT_0043dd3c + 4) = 2;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 0;
  }
  return;
}
