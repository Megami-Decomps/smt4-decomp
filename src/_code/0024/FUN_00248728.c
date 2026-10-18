/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248728` (_code @ 0x248728, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


unsigned char FUN_00248728(void)

{
  return *(char *)(DAT_0043e190 + 0x7d) != '\0';
}
