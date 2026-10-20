/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004658a8` (_code @ 0x4658a8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045b96c(unsigned int);

/* Supplied declaration required: FUN_0045b96c. */


void FUN_004658a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0045b96c(*(unsigned int *)(param_1 + 0x24));
    return;
  }
  return;
}

} /* extern "C" */
