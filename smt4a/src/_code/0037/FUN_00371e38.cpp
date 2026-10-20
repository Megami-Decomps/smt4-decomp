/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371e38` (_code @ 0x371e38, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


int FUN_00371e38(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588fe8 != 0) {
    temp_v0 = (int)*(char *)(DAT_00588fe8 + 0x24a0);
  }
  return temp_v0;
}

} /* extern "C" */
