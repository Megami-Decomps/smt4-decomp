/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8ccc` (_code @ 0x2b8ccc, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned char FUN_002b8ccc(void)

{
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043da2c != 0) {
    temp_v0 = *(unsigned char *)(DAT_0043da2c + 0x4c9);
  }
  return temp_v0;
}
