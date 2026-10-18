/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241b74` (_code @ 0x241b74, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043d9e4; /* 0x43d9e4 */


unsigned char FUN_00241b74(void)

{
  return *(char *)(DAT_0043d9e4 + 0x1c) != '\x05';
}
