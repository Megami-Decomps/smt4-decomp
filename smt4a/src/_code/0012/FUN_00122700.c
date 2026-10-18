/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122700` (_code @ 0x122700, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f8b88. */
/* Supplied declaration required: FUN_00311544. */


void FUN_00122700(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  while (temp_v1 = *(int *)(param_1 + 0x38), 0 < temp_v1) {
    for (temp_v0 = 0; temp_v0 < temp_v1; temp_v0 = temp_v0 + 1) {
      FUN_00311544(param_1);
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      FUN_002f8b88(1);
    }
  }
  return;
}
