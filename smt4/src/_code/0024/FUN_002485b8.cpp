/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002485b8` (_code @ 0x2485b8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e190; /* 0x43e190 */


unsigned char FUN_002485b8(void)

{
  return *(char *)(DAT_0043e190 + 0x7d) != '\0';
}

} /* extern "C" */
