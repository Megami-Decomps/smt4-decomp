/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003686f4` (_code @ 0x3686f4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003686f4(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int temp_v0;
  
  switch(param_1) {
  case 0:
    *param_2 = 0x43960000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 1:
    temp_v0 = 0x437a0000;
    *param_2 = 0x437a0000;
    *param_3 = 0x43480000;
    break;
  case 2:
    *param_2 = 0x44160000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 3:
    *param_2 = 0x44960000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 4:
    *param_2 = 0x45098000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 5:
    *param_2 = 0x457a0000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 6:
    temp_v0 = 0x43960000;
    *param_2 = 0x43960000;
    *param_3 = 0x43960000;
    break;
  case 7:
    temp_v0 = 0x43fa0000;
    *param_2 = 0x43fa0000;
    *param_3 = 0x43480000;
    break;
  case 8:
    *param_2 = 0x42c80000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 9:
    *param_2 = 0x44610000;
    *param_3 = 0x43480000;
    *param_4 = 0x42f00000;
    return;
  case 10:
    temp_v0 = 0x43480000;
    *param_2 = 0x43480000;
    *param_3 = 0x43480000;
    break;
  default:
    return;
  }
  *param_4 = temp_v0;
  return;
}
