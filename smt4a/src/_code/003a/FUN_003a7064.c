/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7064` (_code @ 0x3a7064, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_003a7064(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    param_1 = *(int **)(temp_v0 + 0x328);
  }
  if ((temp_v0 != 0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_0019a5a0();
    **(unsigned int **)(temp_v0 + 0x328) = 0;
  }
  return;
}
