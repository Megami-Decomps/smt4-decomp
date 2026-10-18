/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029f0cc` (_code @ 0x29f0cc, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */


unsigned char FUN_0029f0cc(void)

{
  unsigned char temp_v0;
  
  if ((DAT_0043e18c == 0) || (temp_v0 = 1, *(char *)(DAT_0043e18c + 8) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}
