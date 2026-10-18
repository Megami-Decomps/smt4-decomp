/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9ff8` (_code @ 0x2f9ff8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_uidivmod. */


void FUN_002f9ff8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  aeabi_uidivmod(*(int *)(param_1 + 0x14) + 1,*(unsigned int *)(param_1 + 0x1c));
  *(unsigned int *)(param_1 + 0x14) = temp_v0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - 1;
  return;
}
