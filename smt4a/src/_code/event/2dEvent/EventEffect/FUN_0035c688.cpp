/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c688` (_code @ 0x35c688, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018206c(unsigned int, unsigned int);

/* Supplied declaration required: FUN_0018206c. */


void FUN_0035c688(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    FUN_0018206c(*(unsigned int *)(param_1 * 0x10 + 0x57f43c),
                 *(unsigned int *)(param_1 * 0x10 + 0x57f440));
    return;
  }
  return;
}

} /* extern "C" */
