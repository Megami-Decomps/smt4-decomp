/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471940` (_code @ 0x471940, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001b2ca4(unsigned int, unsigned int, unsigned int);


void FUN_00471940(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_001b2ca4(param_1,0xc,param_2);
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
  }
  return;
}
