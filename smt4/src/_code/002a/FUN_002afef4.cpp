/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002afef4` (_code @ 0x2afef4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138c6c(unsigned int);

extern int DAT_0044ea28; /* 0x44ea28 */

/* Supplied declaration required: FUN_00138c6c. */


void FUN_002afef4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00138c6c(*(unsigned int *)(DAT_0044ea28 + param_1 * 0x18));
  return;
}

} /* extern "C" */
