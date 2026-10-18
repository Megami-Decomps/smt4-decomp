/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a498` (_code @ 0x22a498, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0024de78. */
/* Supplied declaration required: FUN_00262c64. */


void FUN_0022a498(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x2f98) = 0;
  FUN_0024de78();
  FUN_00262c64();
  if (DAT_004342c8 != 0) {
    *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xf7ffffff;
  }
  return;
}
