/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a748c` (_code @ 0x2a748c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f2c4; /* 0x57f2c4 */


unsigned char FUN_002a748c(void)

{
  return *(int *)(DAT_0057f2c4 + 4) == 8;
}
