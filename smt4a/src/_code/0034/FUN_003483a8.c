/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003483a8` (_code @ 0x3483a8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);


void FUN_003483a8(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned char *)(temp_v0 + 0x16) = param_2;
  return;
}
