/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d8ec` (_code @ 0x20d8ec, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */
extern int DAT_00447a7c; /* 0x447a7c */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c1b64. */


void FUN_0020d8ec(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447a78 != 0) {
    FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x5c));
    return;
  }
  return;
}
