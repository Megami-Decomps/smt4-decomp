/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002857dc` (_code @ 0x2857dc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


unsigned char FUN_002857dc(void)

{
  return *(int *)(DAT_00588fd4 + 0x1368) == 9;
}
