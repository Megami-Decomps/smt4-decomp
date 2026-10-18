/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131324` (_code @ 0x131324, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013c6ec. */
/* Supplied declaration required: FUN_0013c780. */
/* Supplied declaration required: FUN_001500b4. */
/* Supplied declaration required: FUN_002ac1a0. */
/* Supplied declaration required: FUN_002ac22c. */


void FUN_00131324(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != 0) {
    FUN_002ac22c(param_1);
    FUN_001500b4(*param_1,3);
    FUN_0013c780(*param_1);
    *param_1 = 0;
  }
  temp_v0 = (param_2 + 3U) & 0xfffffffc;
  if (temp_v0 <= (unsigned int)(param_2 + param_3)) {
    FUN_0013c6ec(temp_v0,(param_2 + param_3) - temp_v0,0);
    *param_1 = temp_v0;
    if (temp_v0 != 0) {
      FUN_002ac1a0(param_1);
    }
  }
  return;
}
