/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d09b8` (_code @ 0x4d09b8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00284168. */


void FUN_004d09b8(int param_1,short param_2,short param_3,short param_4,short param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (int)param_2;
  FUN_00284168(temp_v0,(int)param_3,(int)param_4,(int)param_5);
  *(short *)(param_1 + 0x54) = (short)temp_v0;
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 1;
  return;
}
