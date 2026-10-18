/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b3d0` (_code @ 0x23b3d0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


unsigned char FUN_0023b3d0(void)

{
  return *(int *)(DAT_00588fd4 + 0x1368) != 2 && *(int *)(DAT_00588fd4 + 0x1368) != 1;
}
