/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7460` (_code @ 0x2d7460, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043daf8; /* 0x43daf8 */


unsigned char FUN_002d7460(void)

{
  return *(char *)(DAT_0043daf8 + 0x40) != '\0';
}
