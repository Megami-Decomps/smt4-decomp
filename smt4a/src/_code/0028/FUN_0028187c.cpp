/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028187c` (_code @ 0x28187c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275f44(unsigned int, unsigned int);

extern int DAT_0057f114; /* 0x57f114 */

/* Supplied declaration required: FUN_00275f44. */


void FUN_0028187c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f114 != 0) {
    FUN_00275f44(*(unsigned int *)(DAT_0057f114 + 0xf4),param_1);
    return;
  }
  return;
}

} /* extern "C" */
