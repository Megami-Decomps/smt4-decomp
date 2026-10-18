/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241ac0` (_code @ 0x241ac0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned char FUN_00241ac0(void)

{
  return *(int *)(DAT_0043dd50 + 4) == 0;
}
