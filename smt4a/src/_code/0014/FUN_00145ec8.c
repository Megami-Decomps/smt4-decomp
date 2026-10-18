/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145ec8` (_code @ 0x145ec8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001519ac(void);


unsigned char FUN_00145ec8(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 0x20) {
    temp_v0 = FUN_001519ac();
    return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 4 + (param_1 >> 3))) != 0;
  }
  return 0;
}
