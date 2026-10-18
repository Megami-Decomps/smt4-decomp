/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae91c` (_code @ 0x3ae91c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */


unsigned char FUN_003ae91c(void)

{
  return *(char *)(DAT_00439ca8 + 0x7e4b) == '\0';
}
