/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de124` (_code @ 0x3de124, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0049274c. */
/* Supplied declaration required: FUN_00493154. */


void FUN_003de124(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_00493154();
  if (DAT_00587f28 != (unsigned int *)0x0) {
    FUN_001631d0(*DAT_00587f28,0);
    FUN_0049274c(DAT_00587f28 + 0x1a);
    FUN_0019a5a0(DAT_00587f28);
    DAT_00587f28 = (unsigned int *)0x0;
  }
  return;
}
