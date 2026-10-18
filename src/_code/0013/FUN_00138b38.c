/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138b38` (_code @ 0x138b38, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001455ec. */


void FUN_00138b38(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x18)) {
    FUN_001455ec(*(unsigned int *)(temp_v0 + 8),param_1);
  }
  return;
}
