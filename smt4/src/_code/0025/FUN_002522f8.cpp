/* NON_MATCHING: missing callback target at 0x1008b6 (Thumb address 0x1008b7) falls inside FUN_00100890; cannot name its bounded-output callback */
/* romwright 0.5.0 decompilation of FUN_002522f8 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002522f8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int local_28;
  int local_24;
  int uStack_4;
  
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = (param_1 + param_2) - 1;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  FUN_002c683e(param_3,&local_28,&uStack_4,&LAB_001008b9);
  if (param_2 != 0) {
    libcFormatAppendByte(0,&local_28);
  }
                    /* WARNING: Treating indirect jump as return * /
  return param_3;
}
*/
#include "common.h"
