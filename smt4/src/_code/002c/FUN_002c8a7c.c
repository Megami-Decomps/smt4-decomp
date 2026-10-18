/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8a7c` (_code @ 0x2c8a7c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */
extern int DAT_00447a7c; /* 0x447a7c */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002c1b64. */


void FUN_002c8a7c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447a78 == 0) {
    return;
  }
  if (DAT_0049f91c >= 100) {
    FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x88));
    return;
  }
  FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x68));
  return;
}
