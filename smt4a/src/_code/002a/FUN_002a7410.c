/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7410` (_code @ 0x2a7410, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


unsigned int FUN_002a7410(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_00588fd4 != 0) && (temp_v0 = 0, *(int *)(DAT_00588fd4 + 0x1374) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
