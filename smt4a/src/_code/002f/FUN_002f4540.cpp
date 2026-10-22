/* NON_MATCHING: Job callback waits for 28 model resources, advances effect/camera states, and interpolates transforms; the reference loses interpolator float arguments/results and the typed job-work layout is not reconstructed. */
/* romwright 0.5.0 decompilation of FUN_002f4540 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002f4540(void)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  float in_s0;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned long long uVar10;
  float fVar11;
  unsigned long long uVar12;
  
  iVar2 = FUN_00164a9c();
  uVar10 = 0x3f800000;
  uVar12 = 0;
  bVar1 = 0;
  puVar6 = (unsigned int *)(iVar2 + 0x5e4);
  piVar7 = (int *)(iVar2 + 0x5e8);
  do {
    fVar11 = (float)uVar12;
    switch(*(unsigned int *)(iVar2 + 0x5f0)) {
    case 0:
      bVar1 = 1;
      uVar4 = 0;
      while (iVar5 = FUN_001ab8c0(*(unsigned int *)(iVar2 + uVar4 * 4 + 0x65c)), iVar5 != 0) {
        uVar4 = uVar4 + 1;
        if (0x1b < uVar4) {
          uVar4 = 0;
          do {
            iVar5 = iVar2 + uVar4 * 4;
            FUN_00280c5c(*(unsigned int *)(iVar5 + 0x65c),1);
            puVar3 = *(unsigned int **)(iVar5 + 0x65c);
            *puVar3 = *puVar3 | 2;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
            animationEvaluateCallback(*(unsigned int *)(*(int *)(iVar5 + 0x65c) + 8));
            FUN_00341060(*(unsigned int *)(*(int *)(iVar5 + 0x65c) + 8));
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x1c);
          *(unsigned int *)(iVar2 + 0x5f0) = 1;
          goto code_r0x002f46b8;
        }
      }
      break;
    default:
      goto code_r0x002f46b8;
    case 2:
      *(unsigned char *)(iVar2 + 0x5f5) = 1;
      FUN_003ba560(*(unsigned int *)(iVar2 + 0x5ec),0);
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5ec) + 4);
      if (iVar5 != 0) {
        uVar8 = *(unsigned int *)(iVar5 + 0x44);
        (**(code **)(iVar5 + 0x4c))(*(unsigned int *)(iVar5 + 0x50));
        uVar9 = *(unsigned int *)(iVar5 + 0x38);
        *(unsigned int *)(iVar5 + 0x38) = uVar8;
        *(unsigned int *)(iVar5 + 0x3c) = uVar9;
        *(unsigned char *)(iVar5 + 0x58) = 1;
      }
      animationEvaluateCallback(*(unsigned int *)(*(int *)(iVar2 + 0x5e8) + 8));
      in_s0 = (float)uVar10;
      FUN_00341060(*(unsigned int *)(*piVar7 + 8));
      *(unsigned int *)(iVar2 + 0x5f0) = 3;
      break;
    case 3:
      *(unsigned char *)(iVar2 + 0x5f4) = 1;
      FUN_00186e2c(iVar2 + 0x510,*(unsigned int *)(iVar2 + 0x5ec));
      iVar5 = FUN_003ba534(*(int *)(iVar2 + 0x5ec));
      if ((iVar5 != 0) &&
         ((func_0x00340ff8(*(unsigned int *)(*(int *)(iVar2 + 0x5e8) + 8)), in_s0 == fVar11 ||
          (iVar5 = func_0x00340fb0(*(unsigned int *)(*(int *)(iVar2 + 0x5e8) + 8)), iVar5 != 0)))) {
        FUN_0037a898(*(unsigned int *)(*(int *)(iVar2 + 0x5e8) + 8));
        animationEvaluateCallback(*(unsigned int *)(*piVar7 + 8));
        FUN_00341060(*(unsigned int *)(*piVar7 + 8));
        *(unsigned int *)(iVar2 + 0x5f0) = 4;
      }
      goto code_r0x002f46b8;
    case 4:
      iVar5 = iVar2 + 4;
      FUN_001418fc(iVar5);
      FUN_0014f0dc(iVar5,iVar2 + 0x510,iVar2 + 0x51c,iVar2 + 0x528);
      FUN_001523b8(iVar5,1);
      FUN_0036b824(iVar5);
      goto code_r0x002f46b8;
    case 6:
      iVar5 = FUN_00162ea4();
      if (iVar5 != 0) {
        *(unsigned int *)(iVar2 + 0x5e0) = *(unsigned int *)(iVar2 + 0x5dc);
      }
      *(float *)(iVar2 + 0x5e0) = *(float *)(iVar2 + 0x5e0) + (float)uVar10;
      uVar9 = *(unsigned int *)(iVar2 + 0x554);
      (**(code **)(iVar2 + 0x5e4))();
      *(unsigned int *)(iVar2 + 0x510) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x558);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x514) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x55c);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x518) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x560);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x51c) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x564);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x520) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x568);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x524) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x588);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x544) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x578);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x534) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x57c);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x538) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x580);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x53c) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x648);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x644) = uVar9;
      uVar9 = *(unsigned int *)(iVar2 + 0x654);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x650) = uVar9;
      FUN_0019eb14(iVar2 + 0x510);
      in_s0 = *(float *)(iVar2 + 0x5dc);
      if (*(float *)(iVar2 + 0x5e0) < in_s0) goto code_r0x002f46b8;
      bVar1 = 0;
      *(unsigned int *)(iVar2 + 0x644) = *(unsigned int *)(iVar2 + 0x64c);
      uVar9 = (unsigned int)uVar12;
      *(unsigned int *)(iVar2 + 0x650) = uVar9;
      *(unsigned int *)(iVar2 + 0x654) = uVar9;
      *(unsigned int *)(iVar2 + 0x658) = uVar9;
      *(unsigned int *)(iVar2 + 0x5dc) = uVar9;
      *(unsigned int *)(iVar2 + 0x5e4) = 0;
      *(unsigned int *)(iVar2 + 0x5f0) = 2;
      continue;
    }
    if (bVar1) {
code_r0x002f46b8:
      if (*(char *)(iVar2 + 0x5f4) != '\0') {
        iVar5 = iVar2 + 4;
        FUN_001418fc(iVar5);
        FUN_0014f0dc(iVar5,iVar2 + 0x510,iVar2 + 0x51c,iVar2 + 0x528);
        FUN_001523b8(iVar5,1);
        FUN_0036b824(iVar5);
      }
      return 0;
    }
  } while( 1 );
}
*/
#include "common.h"
