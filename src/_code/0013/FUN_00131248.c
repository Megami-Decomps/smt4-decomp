/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131248` (_code @ 0x131248, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013c05c. */
/* Supplied declaration required: FUN_0013c0f0. */
/* Supplied declaration required: FUN_0014ffb8. */
/* Supplied declaration required: FUN_002ac42c. */
/* Supplied declaration required: FUN_002ac4b8. */


void FUN_00131248(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != 0) {
    FUN_002ac4b8(param_1);
    FUN_0014ffb8(*param_1,3);
    FUN_0013c0f0(*param_1);
    *param_1 = 0;
  }
  temp_v0 = (param_2 + 3U) & 0xfffffffc;
  if (temp_v0 <= (unsigned int)(param_2 + param_3)) {
    FUN_0013c05c(temp_v0,(param_2 + param_3) - temp_v0,0);
    *param_1 = temp_v0;
    if (temp_v0 != 0) {
      FUN_002ac42c(param_1);
    }
  }
  return;
}
