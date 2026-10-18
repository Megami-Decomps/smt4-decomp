/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5c50` (_code @ 0x2e5c50, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f24c; /* 0x57f24c */


int FUN_002e5c50(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f24c != 0) {
    temp_v0 = (int)*(short *)(DAT_0057f24c + 0x650);
  }
  return temp_v0;
}
