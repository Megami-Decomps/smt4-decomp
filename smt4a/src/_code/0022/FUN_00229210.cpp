/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229210` (_code @ 0x229210, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


unsigned int FUN_00229210(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    if (param_1 >= 0x1f5) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 0;
      if (((unsigned int)*(unsigned char *)(DAT_0057f69c +
                           ((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3) + 0x27ed8)
          & (1 << (((int)param_1 % 8) & 0xffU))) != 0) {
        temp_v0 = 1;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
