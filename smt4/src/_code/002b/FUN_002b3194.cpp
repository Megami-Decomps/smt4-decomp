/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3194` (_code @ 0x2b3194, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00146a84(int);

/* Supplied declaration required: FUN_00146a84. */


void FUN_002b3194(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00146a84(param_1 + 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - 1;
  return;
}

} /* extern "C" */
