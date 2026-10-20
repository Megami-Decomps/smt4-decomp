/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001861ac` (_code @ 0x1861ac, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186a3c(unsigned int);

extern int DAT_0059dbb8; /* 0x59dbb8 */

/* Supplied declaration required: FUN_00186a3c. */


void FUN_001861ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00186a3c(*(unsigned int *)(DAT_0059dbb8 + param_1 * 0x18));
  return;
}

} /* extern "C" */
