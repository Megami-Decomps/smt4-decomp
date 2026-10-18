/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2010` (_code @ 0x1e2010, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

/* Supplied declaration required: FUN_002c43b4. */


void FUN_001e2010(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c43b4(*DAT_0043e0d0,0);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  return;
}
