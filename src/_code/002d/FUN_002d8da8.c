/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8da8` (_code @ 0x2d8da8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


unsigned int FUN_002d8da8(void)

{
  unsigned int temp_v0;
  
  if ((*(char *)(DAT_0043e190 + 0x7d) == '\0') || (*(char *)(DAT_0043e190 + 0x7c) != '\x02')) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
