/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0868` (_code @ 0x3c0868, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac068(int, int);

/* Supplied declaration required: FUN_002ac068. */


void FUN_003c0868(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002ac068(*(int *)(param_1 + 8),0);
    return;
  }
  return;
}

} /* extern "C" */
