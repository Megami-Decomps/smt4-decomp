/* NON_MATCHING: found outside every function: branched to by FUN_00119c28; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0012f6f4 for reference (not compiled; its own view of the boundaries):

void FUN_0012f6f4(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = param_1[0xc];
  fVar1 = param_1[0xd];
  fVar2 = param_1[0xe];
  fVar4 = -(*param_2 * param_2[3] + param_2[4] * param_2[7]) + -(param_2[8] * param_2[0xb]);
  param_1[0xc] = fVar4;
  param_1[0xd] = -(param_2[1] * param_2[3] + param_2[5] * param_2[7]) + -(param_2[9] * param_2[0xb])
  ;
  param_1[0xe] = -(param_2[2] * param_2[3] + param_2[6] * param_2[7]) +
                 -(param_2[10] * param_2[0xb]);
  if (*(char *)(param_1 + 0x18) != '\0') {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    fVar4 = param_2[4];
    fVar5 = param_2[5];
    fVar6 = param_2[6];
    fVar7 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    param_1[4] = fVar4;
    param_1[5] = fVar5;
    param_1[6] = fVar6;
    param_1[7] = fVar7;
    fVar1 = param_2[9];
    fVar2 = param_2[10];
    fVar3 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = fVar1;
    param_1[10] = fVar2;
    param_1[0xb] = fVar3;
    *(unsigned char *)(param_1 + 0x18) = 0;
    return;
  }
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[3] = fVar7;
  param_1[4] = fVar8;
  param_1[5] = fVar9;
  param_1[6] = fVar10;
  param_1[7] = fVar11;
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  param_1[0xf] = fVar4 - fVar3;
  param_1[8] = fVar5;
  param_1[9] = fVar6;
  param_1[10] = fVar7;
  param_1[0xb] = fVar8;
  param_1[0x10] = param_1[0xd] - fVar1;
  param_1[0x11] = param_1[0xe] - fVar2;
  return;
}
*/
#include "common.h"
