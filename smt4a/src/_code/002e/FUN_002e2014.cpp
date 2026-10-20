/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2014` (_code @ 0x2e2014, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


unsigned char FUN_002e2014(void)

{
  return *(char *)(DAT_0057f118 + 0x10f) != '\0';
}

} /* extern "C" */
