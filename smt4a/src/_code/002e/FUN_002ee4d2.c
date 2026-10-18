/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee4d2` (_code @ 0x2ee4d2, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002eac60. */
/* Supplied declaration required: FUN_002eac8e. */
/* Supplied declaration required: FUN_002f674e. */


void FUN_002ee4d2(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002eac8e(*(unsigned int *)(param_1 + 0x90),0);
  FUN_002eac60(*(unsigned int *)(param_1 + 0x90),0);
  FUN_002eac8e(param_1,0);
  FUN_002eac60(param_1,0);
  *(unsigned int *)(*(int *)(param_1 + 0x90) + 0x74) = 0;
  FUN_002f674e(*(unsigned int *)(param_1 + 0x90));
  *(unsigned int *)(param_1 + 0x90) = 0;
  return;
}
