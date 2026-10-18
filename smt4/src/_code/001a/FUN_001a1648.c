/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1648` (_code @ 0x1a1648, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


void FUN_001a1648(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e190;
  if (DAT_0043e190 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x30) = 1;
  }
  *(unsigned char *)(temp_v0 + 0x31) = 1;
  return;
}
