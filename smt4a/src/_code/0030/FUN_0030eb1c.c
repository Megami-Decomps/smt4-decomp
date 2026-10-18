/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eb1c` (_code @ 0x30eb1c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e4e6c. */


int * FUN_0030eb1c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x1c) - 1;
    *(int *)(temp_v0 + 0x1c) = temp_v1;
    if ((temp_v1 == 0) && (*param_1 != 0)) {
      FUN_002e4e6c();
      FUN_002e3328();
    }
  }
  return param_1;
}
