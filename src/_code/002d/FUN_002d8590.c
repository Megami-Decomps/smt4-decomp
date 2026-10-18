/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8590` (_code @ 0x2d8590, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


void FUN_002d8590(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  *(unsigned char *)(temp_v0 + 0x16) = param_2;
  return;
}
