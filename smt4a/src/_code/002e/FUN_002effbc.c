/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002effbc` (_code @ 0x2effbc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_002effbc(void)

{
  return *(int *)(DAT_00588fe8 + 0x518) != 2;
}
