/* NON_MATCHING: job-owned scene transition waits for 28 resources, updates model flags, and swaps active display callbacks; nested resource/model layouts and hard-float callback results remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_002169cc for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002169cc(void)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  int iVar8;
  float in_s0;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned long long uVar11;
  float fVar12;
  unsigned long long uVar13;
  
  iVar2 = FUN_002c08f0();
  uVar11 = 0x3f800000;
  uVar13 = 0;
  bVar1 = 0;
  iVar8 = iVar2 + 0x50c;
  puVar6 = (unsigned int *)(iVar2 + 0x5e0);
  piVar7 = (int *)(iVar2 + 0x5e4);
  do {
    fVar12 = (float)uVar13;
    switch(*(unsigned int *)(iVar2 + 0x5ec)) {
    case 0:
      bVar1 = 1;
      uVar4 = 0;
      while (iVar5 = modelHasLoadedAttachment(*(unsigned int *)(iVar2 + uVar4 * 4 + 0x658)), iVar5 != 0) {
        uVar4 = uVar4 + 1;
        if (0x1b < uVar4) {
          uVar4 = 0;
          do {
            iVar5 = iVar2 + uVar4 * 4;
            FUN_002a0428(*(unsigned int *)(iVar5 + 0x658),1);
            puVar3 = *(unsigned int **)(iVar5 + 0x658);
            *puVar3 = *puVar3 | 2;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
            FUN_0028703c(*(unsigned int *)(*(int *)(iVar5 + 0x658) + 8));
            FUN_0029bb14(*(unsigned int *)(*(int *)(iVar5 + 0x658) + 8));
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x1c);
          uVar10 = 1;
          goto code_r0x00216c3c;
        }
      }
      break;
    default:
      goto code_r0x00216b4c;
    case 2:
      *(unsigned char *)(iVar2 + 0x5f1) = 1;
      FUN_002a043c(*(unsigned int *)(iVar2 + 0x5e8),0);
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5e8) + 4);
      if (iVar5 != 0) {
        uVar9 = *(unsigned int *)(iVar5 + 0x44);
        (**(code **)(iVar5 + 0x4c))(*(unsigned int *)(iVar5 + 0x50));
        uVar10 = *(unsigned int *)(iVar5 + 0x38);
        *(unsigned int *)(iVar5 + 0x38) = uVar9;
        *(unsigned int *)(iVar5 + 0x3c) = uVar10;
        *(unsigned char *)(iVar5 + 0x58) = 1;
      }
      FUN_0028703c(*(unsigned int *)(*(int *)(iVar2 + 0x5e4) + 8));
      in_s0 = (float)uVar11;
      FUN_0029bb14(*(unsigned int *)(*piVar7 + 8));
      *(unsigned int *)(iVar2 + 0x5ec) = 3;
      break;
    case 3:
      *(unsigned char *)(iVar2 + 0x5f0) = 1;
      cameraExportParameters(iVar8,*(unsigned int *)(iVar2 + 0x5e8));
      iVar5 = FUN_00263720(*(int *)(iVar2 + 0x5e8));
      if ((iVar5 != 0) &&
         ((func_0x002d5808(*(unsigned int *)(*(int *)(iVar2 + 0x5e4) + 8)), in_s0 == fVar12 ||
          (iVar5 = FUN_0025a03c(*(unsigned int *)(*(int *)(iVar2 + 0x5e4) + 8)), iVar5 != 0)))) {
        FUN_002f50b8(*(unsigned int *)(*(int *)(iVar2 + 0x5e4) + 8));
        FUN_0028703c(*(unsigned int *)(*piVar7 + 8));
        FUN_0029bb14(*(unsigned int *)(*piVar7 + 8));
        uVar10 = 4;
code_r0x00216c3c:
        *(unsigned int *)(iVar2 + 0x5ec) = uVar10;
      }
      goto code_r0x00216b4c;
    case 4:
      iVar5 = iVar2 + 4;
      FUN_002c159c(iVar5);
      FUN_002c1edc(iVar5,iVar8,iVar2 + 0x518,iVar2 + 0x524);
      FUN_002c1e30(iVar5,1);
      FUN_00298d50(iVar5);
      goto code_r0x00216b4c;
    case 6:
      iVar5 = FUN_002c1d5c();
      if (iVar5 != 0) {
        *(unsigned int *)(iVar2 + 0x5dc) = *(unsigned int *)(iVar2 + 0x5d8);
      }
      *(float *)(iVar2 + 0x5dc) = *(float *)(iVar2 + 0x5dc) + (float)uVar11;
      uVar10 = *(unsigned int *)(iVar2 + 0x550);
      (**(code **)(iVar2 + 0x5e0))();
      *(unsigned int *)(iVar2 + 0x50c) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x554);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x510) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x558);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x514) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x55c);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x518) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x560);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x51c) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x564);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x520) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x584);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x540) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x574);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x530) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x578);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x534) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x57c);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x538) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x644);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x640) = uVar10;
      uVar10 = *(unsigned int *)(iVar2 + 0x650);
      (*(code *)*puVar6)();
      *(unsigned int *)(iVar2 + 0x64c) = uVar10;
      FUN_00145e54(iVar8);
      in_s0 = *(float *)(iVar2 + 0x5d8);
      if (*(float *)(iVar2 + 0x5dc) < in_s0) goto code_r0x00216b4c;
      bVar1 = 0;
      *(unsigned int *)(iVar2 + 0x640) = *(unsigned int *)(iVar2 + 0x648);
      uVar10 = (unsigned int)uVar13;
      *(unsigned int *)(iVar2 + 0x64c) = uVar10;
      *(unsigned int *)(iVar2 + 0x650) = uVar10;
      *(unsigned int *)(iVar2 + 0x654) = uVar10;
      *(unsigned int *)(iVar2 + 0x5d8) = uVar10;
      *(unsigned int *)(iVar2 + 0x5e0) = 0;
      *(unsigned int *)(iVar2 + 0x5ec) = 2;
      continue;
    }
    if (bVar1) {
code_r0x00216b4c:
      if (*(char *)(iVar2 + 0x5f0) != '\0') {
        iVar5 = iVar2 + 4;
        FUN_002c159c(iVar5);
        FUN_002c1edc(iVar5,iVar8,iVar2 + 0x518,iVar2 + 0x524);
        FUN_002c1e30(iVar5,1);
        FUN_00298d50(iVar5);
      }
      return 0;
    }
  } while( 1 );
}
*/
#include "common.h"
