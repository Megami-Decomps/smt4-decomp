/* NON_MATCHING: fragment of a larger function (literal data decoded as an instruction). */
/* romwright 0.5.0 decompilation of FUN_00427bec for reference (not compiled; its own view of the boundaries):

void FUN_00427bec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  long long lVar1;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  unsigned int auStack_8 [2];
  
  lVar1 = (unsigned long long)unaff_r8 * (unsigned long long)unaff_r9 + CONCAT44(param_2,param_4);
  auStack_8[0] = (unsigned int)lVar1;
  FUN_004268ec(auStack_8,1,param_1,(int)((unsigned long long)lVar1 >> 0x20));
  return;
}
*/
#include "common.h"
