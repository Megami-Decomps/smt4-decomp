/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdc00` (_code @ 0x2cdc00, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e190; /* 0x43e190 */


unsigned char FUN_002cdc00(void)

{
  return *(char *)(DAT_0043e190 + 0x7e) != '\0';
}

} /* extern "C" */
