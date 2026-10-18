/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a14e4` (_code @ 0x1a14e4, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned int FUN_001a14e4(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    if (param_1 >= 0x1f5) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 0;
      if (((unsigned int)*(unsigned char *)(DAT_0043e2ac +
                           ((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3) + 0x24bc4)
          & (1 << (((int)param_1 % 8) & 0xffU))) != 0) {
        temp_v0 = 1;
      }
    }
  }
  return temp_v0;
}
