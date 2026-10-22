/* NON_MATCHING: fragment of a larger function (unit ends at a conditional return, leaving its continuing path outside the unit) */
/* romwright 0.5.0 decompilation of FUN_002015e4 for reference (not compiled; its own view of the boundaries):

void FUN_002015e4(int param_1,int *param_2,char *param_3,int *param_4,float *param_5,float *param_6,
                 float *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned int in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ('\x03' < *param_3) {
    return;
  }
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  if (*param_4 < iVar1 + 1) {
    *param_2 = 0;
    *param_6 = 0.0f;
    iVar2 = (int)*param_3;
    iVar1 = 1;
    bVar4 = SBORROW4(iVar2,3);
    if (iVar2 < 3) {
      bVar4 = SBORROW4(iVar2 + 1,4);
    }
    if (iVar2 - 3 < 0 != bVar4) {
      while (iVar2 = *(int *)(param_1 + (*param_3 + iVar1) * 0x18 + 0x50) -
                     *(int *)(param_1 + *param_3 * 0x18 + 0x50), *param_4 = iVar2, iVar2 < 1) {
        iVar1 = iVar1 + 1;
        if (3 < *param_3 + iVar1) {
          return;
        }
      }
      iVar3 = param_1 + *param_3 * 0x18;
      iVar2 = param_1 + (*param_3 + iVar1) * 0x18;
      fVar5 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x50) - *(int *)(iVar3 + 0x50),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x4c) - *(int *)(iVar3 + 0x4c),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *param_6 = fVar6 / fVar5;
      fVar5 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + (*param_3 + iVar1) * 0x18 + 0x4c)
                                         ,(unsigned char)(in_fpscr >> 0x16) & 3);
      *param_7 = fVar5;
      *param_3 = *param_3 + (char)iVar1;
    }
    return;
  }
  fVar5 = *param_7;
  fVar6 = *param_6;
  fVar7 = *param_5 + fVar6;
  *param_5 = fVar7;
  if (fVar6 >= 0.0f) {
    if (fVar5 < fVar7) {
      *param_5 = fVar5;
      return;
    }
  }
  else if (fVar7 <= fVar5) {
    *param_5 = fVar5;
    return;
  }
  fVar5 = fVar7;
  *param_5 = fVar5;
  return;
}
*/
#include "common.h"
