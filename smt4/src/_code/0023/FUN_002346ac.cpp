/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002346ac` (_code @ 0x2346ac, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionAdd(void);

/* Supplied declaration required: ifTouchRegionAdd. */


void FUN_002346ac(int param_1,unsigned short param_2,unsigned short param_3,unsigned short param_4,
                 unsigned short param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = param_2;
  ifTouchRegionAdd();
  *(unsigned short *)(param_1 + 0x58) = temp_v0;
  *(unsigned short *)(param_1 + 0x5c) = param_2;
  *(unsigned short *)(param_1 + 0x5e) = param_3;
  *(unsigned short *)(param_1 + 0x60) = param_4;
  *(unsigned short *)(param_1 + 0x62) = param_5;
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 1;
  return;
}

} /* extern "C" */
