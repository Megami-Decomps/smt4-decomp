/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c87b8` (_code @ 0x1c87b8, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e140; /* 0x43e140 */


int FUN_001c87b8(void)

{
  int temp_v0;
  
  if (*(int *)(DAT_0043e140 + 8) != 0) {
    temp_v0 = (int)*(char *)(DAT_0043e140 + 0x10);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
