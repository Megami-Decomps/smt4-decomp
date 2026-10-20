/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c3b0` (_code @ 0x39c3b0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned short FUN_0039c3b0(void)

{
  return *(unsigned short *)(DAT_00588fe8 + *(int *)(DAT_00588fe8 + 0x654) * 2 + 0x59c);
}

} /* extern "C" */
