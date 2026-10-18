/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295fac` (_code @ 0x295fac, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


unsigned char FUN_00295fac(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  return ((unsigned int)*(unsigned short *)(temp_v0 + 0x72) & (1 << (param_1 & 0xff))) != 0;
}
