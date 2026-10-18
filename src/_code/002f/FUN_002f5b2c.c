/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5b2c` (_code @ 0x2f5b2c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned char FUN_002f5b2c(unsigned int param_1)

{
  unsigned char temp_v0;
  
  if ((DAT_0043da2c != 0) && (5 >= param_1)) {
    temp_v0 = *(unsigned char *)(DAT_0043da2c + param_1 * 4 + 0x494);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
