/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004222dc` (_code @ 0x4222dc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(unsigned int);

/* Supplied declaration required: FUN_001800b8. */


void FUN_004222dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x24) = 0;
  FUN_001800b8(*(unsigned int *)(param_1 + 0x10));
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

} /* extern "C" */
