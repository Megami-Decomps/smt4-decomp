/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d381c` (_code @ 0x1d381c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a775c. */


void FUN_001d381c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x2c) != 0) {
    FUN_002a775c();
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
  }
  return;
}
