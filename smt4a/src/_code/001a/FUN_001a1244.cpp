/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1244` (_code @ 0x1a1244, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af4dc(int);

/* Supplied declaration required: FUN_001af4dc. */


void FUN_001a1244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001af4dc(param_1 + 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - 1;
  return;
}

} /* extern "C" */
