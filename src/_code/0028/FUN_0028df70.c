/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028df70` (_code @ 0x28df70, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned short FUN_0028df70(unsigned int param_1)

{
  unsigned short temp_v0;
  
  if (param_1 >= 6) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned short *)(DAT_0043da2c + param_1 * 4 + 0x496);
  }
  return temp_v0;
}
