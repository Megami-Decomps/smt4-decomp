/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a50c` (_code @ 0x23a50c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225dac. */
/* Supplied declaration required: FUN_003aff38. */


void FUN_0023a50c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225dac();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x10);
  }
  if (temp_v0 != 0 && temp_v1 != 0) {
    FUN_003aff38();
  }
  return;
}
