/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b0188` (_code @ 0x2b0188, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea28; /* 0x44ea28 */

/* Supplied declaration required: FUN_00138b90. */


void FUN_002b0188(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00138b90(*(unsigned int *)(DAT_0044ea28 + param_1 * 0x18));
  return;
}
