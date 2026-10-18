/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ecac` (_code @ 0x32ecac, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014af84(void);


unsigned char FUN_0032ecac(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return ((unsigned int)*(unsigned char *)(temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1d)) >> 3) +
                         0x282fc) & (1 << ((param_1 % 8) & 0xffU))) != 0;
}
