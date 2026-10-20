/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c608` (_code @ 0x39c608, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


int FUN_0039c608(void)

{
  int temp_v0;
  
  if (DAT_00588fd4 == 0) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = (int)*(char *)(DAT_00588fd4 + 0x20f0);
  }
  return temp_v0;
}

} /* extern "C" */
