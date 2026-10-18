/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311594` (_code @ 0x311594, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned char FUN_00311594(void)

{
  return *(int *)(DAT_0043dd50 + 4) == 0;
}
