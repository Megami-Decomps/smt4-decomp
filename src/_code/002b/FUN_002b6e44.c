/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6e44` (_code @ 0x2b6e44, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e128; /* 0x43e128 */


unsigned char FUN_002b6e44(void)

{
  return *(int *)(DAT_0043e128 + 8) != 0;
}
