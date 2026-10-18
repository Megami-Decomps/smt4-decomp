/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f1f8` (_code @ 0x24f1f8, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e278; /* 0x43e278 */


int FUN_0024f1f8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043e278 != 0) {
    temp_v0 = (int)*(char *)(DAT_0043e278 + 0xc);
  }
  return temp_v0;
}
