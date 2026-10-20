/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0914` (_code @ 0x2c0914, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026140c(void);


unsigned char FUN_002c0914(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0026140c();
  return ((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x55) & (1 << (param_1 & 7))) == 0;
}

} /* extern "C" */
