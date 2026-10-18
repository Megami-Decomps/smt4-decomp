/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200574` (_code @ 0x200574, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a0d0c(void);


unsigned char FUN_00200574(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a0d0c();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x51) & (1 << (param_1 & 7))) == 0;
}
