/* NON_MATCHING: found outside every function: branched to by FUN_001d3704; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001d3b94 for reference (not compiled; its own view of the boundaries):

long long FUN_001d3b94(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int in_r12;
  
  uVar1 = in_r12 & 0xf;
  if (uVar1 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      return (unsigned long long)param_2 << 0x20;
    }
    if ((in_r12 & 0x70000) != 0) {
      return CONCAT44(~(in_r12 << 0xf) << 1,8);
    }
    return CONCAT44(param_2,0x30000000);
  }
  if (uVar1 == 10) {
    if ((in_r12 & 0x40) != 0) {
      param_1 = 0x80000000;
    }
    return CONCAT44(param_2,param_1);
  }
  if (uVar1 != 8) {
    return CONCAT44(param_2,param_1);
  }
  if ((in_r12 & 0x40) != 0) {
    return 0;
  }
  if ((in_r12 & 0x10) != 0) {
    return CONCAT44((param_1 & 0xff000000) | ((param_1 & 0xfffffff) >> 3),param_1 << 0x1d);
  }
  return CONCAT44(param_2,(param_2 & 0xff000000) | (param_1 >> 0x1d) | ((param_2 & 0xffffff) << 3));
}
*/
#include "common.h"
