/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003311b8` (_code @ 0x3311b8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f590; /* 0x57f590 */


unsigned char FUN_003311b8(void)

{
  return *(char *)(DAT_0057f590 + 0x8f) != '\0';
}

} /* extern "C" */
