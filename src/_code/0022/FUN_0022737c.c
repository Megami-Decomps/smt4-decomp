/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022737c` (_code @ 0x22737c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


void FUN_0022737c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  *(unsigned int *)(temp_v0 + 0x58) = param_2;
  *(unsigned int *)(temp_v0 + 0x5c) = param_3;
  return;
}
