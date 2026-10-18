/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0f88` (_code @ 0x2a0f88, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */


unsigned char FUN_002a0f88(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043e18c != 0) {
    temp_v0 = *(char *)(DAT_0043e18c + 8);
  }
  return DAT_0043e18c == 0 || temp_v0 == '\0';
}
