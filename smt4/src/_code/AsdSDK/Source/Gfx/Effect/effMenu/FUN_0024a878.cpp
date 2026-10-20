/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024a878` (_code @ 0x24a878, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030e48c(int, unsigned int, unsigned int);

extern unsigned int DAT_004ea7d4; /* 0x4ea7d4 */

/* Supplied declaration required: FUN_0030e48c. */


void FUN_0024a878(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((&DAT_004ea7d4)[param_1] != 0) {
    FUN_0030e48c(0,(&DAT_004ea7d4)[param_1],param_2);
    return;
  }
  return;
}

} /* extern "C" */
