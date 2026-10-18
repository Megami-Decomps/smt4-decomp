/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002854ec` (_code @ 0x2854ec, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_002854ec(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  *(unsigned char *)(temp_v0 + 0x1c) = param_1 != 0;
  return;
}
