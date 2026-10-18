/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdb50` (_code @ 0x2cdb50, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


unsigned char FUN_002cdb50(void)

{
  return *(char *)(DAT_0043e190 + 0x7e) != '\0';
}
