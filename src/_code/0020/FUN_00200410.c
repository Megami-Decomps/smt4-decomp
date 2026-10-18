/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200410` (_code @ 0x200410, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a0fac(void);


unsigned char FUN_00200410(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a0fac();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x51) & (1 << (param_1 & 7))) == 0;
}
