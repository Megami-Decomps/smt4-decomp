/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343cdc` (_code @ 0x343cdc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_003a4980. */


void FUN_00343cdc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f118 != 0) {
    FUN_003a4980(*(unsigned int *)(DAT_0057f118 + 0xc),*(unsigned int *)(DAT_0057f118 + 8),
                 *(unsigned int *)(DAT_0057f118 + 0x58));
    return;
  }
  return;
}
