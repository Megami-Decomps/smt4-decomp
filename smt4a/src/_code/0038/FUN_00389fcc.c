/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389fcc` (_code @ 0x389fcc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);


void FUN_00389fcc(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned int *)(temp_v0 + 0x3c) = param_2;
  return;
}
