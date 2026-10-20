/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305658` (_code @ 0x305658, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ee50c(...);

/* Supplied declaration required: FUN_002ee50c. */


void FUN_00305658(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x20) = param_2;
  FUN_002ee50c(*(unsigned int *)(param_1 + 0x18));
  FUN_002ee50c(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20));
  return;
}

} /* extern "C" */
