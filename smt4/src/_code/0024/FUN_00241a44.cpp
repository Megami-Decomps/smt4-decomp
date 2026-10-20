/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241a44` (_code @ 0x241a44, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043d9e4; /* 0x43d9e4 */


unsigned char FUN_00241a44(void)

{
  return *(char *)(DAT_0043d9e4 + 0x1c) != '\x05';
}

} /* extern "C" */
