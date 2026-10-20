/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023470c` (_code @ 0x23470c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionAdd(int, int, int, int);

/* Supplied declaration required: ifTouchRegionAdd. */


void FUN_0023470c(int param_1,short param_2,short param_3,short param_4,short param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (int)param_2;
  ifTouchRegionAdd(temp_v0,(int)param_3,(int)param_4,(int)param_5);
  *(short *)(param_1 + 0x56) = (short)temp_v0;
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 1;
  return;
}

} /* extern "C" */
