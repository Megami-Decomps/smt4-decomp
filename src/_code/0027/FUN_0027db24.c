/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027db24` (_code @ 0x27db24, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_0027db24(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  *(unsigned short *)(temp_v0 + 0x20) = param_1;
  return;
}
