/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c3d0` (_code @ 0x39c3d0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_0039c3d0(void)

{
  return *(int *)(DAT_00588fe8 + 0x518) == 0x12;
}
