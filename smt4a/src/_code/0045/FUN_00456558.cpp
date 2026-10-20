/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00456558` (_code @ 0x456558, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00456558(unsigned int param_1,int *param_2,int param_3)

{
  int temp_v0;
  int *piVar2;
  
  switch(*(unsigned int *)(*param_2 + 0x10)) {
  default:
    return 0;
  case 1:
    *(int *)(*param_2 + 0x18) = param_3;
    return param_3 + 0x24;
  case 2:
    temp_v0 = *param_2;
    *(int *)(temp_v0 + 0x18) = param_3;
    piVar2 = (int *)(*(int *)(temp_v0 + 0x20) * 4 + 0x274 + param_3);
    temp_v0 = *piVar2;
    break;
  case 3:
    temp_v0 = *param_2;
    *(int *)(temp_v0 + 0x18) = param_3;
    piVar2 = (int *)(*(int *)(temp_v0 + 0x20) * 4 + 0x274 + param_3);
    temp_v0 = *piVar2;
    break;
  case 4:
    *(int *)(*param_2 + 0x18) = param_3;
    return param_3 + 300;
  case 5:
    temp_v0 = *param_2;
    *(int *)(temp_v0 + 0x18) = param_3;
    return *(int *)(temp_v0 + 0x20) * 0x58 + 0x16c + param_3;
  }
  if (temp_v0 == 0) {
    return 0;
  }
  return temp_v0 + (int)piVar2;
}

} /* extern "C" */
