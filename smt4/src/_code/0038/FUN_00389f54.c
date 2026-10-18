/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389f54` (_code @ 0x389f54, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);


void FUN_00389f54(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002a6d50(param_1,0xc,param_2);
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
  }
  return;
}
