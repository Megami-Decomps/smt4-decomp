/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6e40` (_code @ 0x2b6e40, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e128; /* 0x43e128 */


unsigned char FUN_002b6e40(void)

{
  return *(int *)(DAT_0043e128 + 8) != 0;
}
