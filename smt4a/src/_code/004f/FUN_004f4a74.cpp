/* NON_MATCHING: runs battle-dialogue choices, resets roster state, and creates/destroys dialogue jobs; typed dialogue work and allocation/callback prototypes remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_004f4a74 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_004f4a74(unsigned int *param_1,int param_2)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int auStack_98 [33];
  
  puVar6 = auStack_98;
  switch(*param_1) {
  case 0:
    if (param_2 != 0) {
      piVar7 = (int *)(param_2 + 0x1ed4);
      iVar4 = 0;
      if (*piVar7 != 0) {
        iVar10 = 4;
        do {
          iVar4 = iVar10 + 1;
          iVar10 = *piVar7 + iVar10 * 0x1d0;
          uVar3 = *(unsigned int *)(iVar10 + 0x50);
          if ((uVar3 & 1) != 0 && (uVar3 & 0x80) != 0) {
            *(unsigned int *)(iVar10 + 0x50) = uVar3 & 0xfffffff7;
          }
          iVar10 = iVar4;
        } while (iVar4 < 0x36);
      }
      if (param_2 != 0) {
        iVar4 = *piVar7;
      }
      if (param_2 != 0 && iVar4 != 0) {
        iVar4 = 0;
        do {
          iVar10 = iVar4 + 1;
          iVar4 = *piVar7 + iVar4 * 0x1d0;
          *(unsigned int *)(iVar4 + 0x6c) = *(unsigned int *)(iVar4 + 0x70);
          iVar4 = iVar10;
        } while (iVar10 < 0x6d);
      }
    }
    uVar2 = *(unsigned int *)(param_2 + 0x7c);
    auStack_98[0] = 4;
    FUN_0028033c(uVar2,0xf0,0x10,0x20);
    param_1[3] = uVar2;
    FUN_0037a854();
    FUN_002e0898(param_1[3],0xc);
    FUN_002ea508(param_1[3],0x52821c);
    FUN_002a1b00(param_1[3],0x528214);
    FUN_002a1b00(param_1[3],0x52820c);
    FUN_002a1b00(param_1[3],0x528204);
    FUN_00317508(param_1[3],1);
    uVar2 = 1;
    break;
  case 1:
    iVar4 = FUN_001656a0(0);
    if (iVar4 == 0) {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_001631d0(param_1[3],0);
      param_1[3] = 0;
      return 0xffffffff;
    }
    iVar4 = FUN_003874fc(param_1[3]);
    FUN_001631d0(param_1[3],0);
    param_1[3] = 0;
    if (iVar4 == 0) goto code_r0x004f4c54;
    if (iVar4 == 1) {
      uVar2 = 5;
    }
    else {
      if (iVar4 != 2) {
        return 0xffffffff;
      }
      uVar2 = 6;
    }
    break;
  case 2:
    iVar4 = FUN_001656a0(0);
    if (iVar4 != 0) {
      iVar4 = FUN_003874fc(param_1[3]);
      FUN_001631d0(param_1[3],0);
      param_1[3] = 0;
      if (iVar4 == 0) {
        FUN_004f452c(param_1,param_2);
        uVar2 = 3;
        break;
      }
      if (iVar4 == 1) goto code_r0x004f4d58;
    }
    else {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_001631d0(param_1[3],0);
      param_1[3] = 0;
    }
  case 5:
    uVar2 = 0;
    break;
  case 3:
    iVar4 = FUN_001656a0(0);
    if (iVar4 == 0) {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        FUN_004f43f0(param_1,param_2);
        return 0;
      }
      uVar2 = 0;
      break;
    }
    FUN_004f4648(param_1,param_2,*(unsigned int *)(param_2 + 0x7c));
    uVar2 = 7;
    break;
  case 4:
    iVar4 = FUN_001656a0(0);
    if (iVar4 != 0) {
      uVar3 = FUN_003874fc(param_1[3]);
      FUN_001631d0(param_1[3],0);
      param_1[3] = 0;
      if (uVar3 < 3) {
        btlCreateCameraEditor(param_1,param_2,*(unsigned int *)(param_2 + 0x7c),uVar3 & 0xffff);
        uVar2 = 8;
        break;
      }
    }
    else {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_001631d0(param_1[3],0);
      param_1[3] = 0;
    }
code_r0x004f4c54:
    uVar2 = *(unsigned int *)(param_2 + 0x7c);
    auStack_98[0] = 4;
    FUN_0028033c(uVar2,0xf0,0x10,0x20);
    param_1[3] = uVar2;
    FUN_0037a854();
    FUN_002e0898(param_1[3],0xc);
    FUN_002ea508(param_1[3],"MODE");
    FUN_002a1b00(param_1[3],"슌쪕튕垏");
    FUN_002a1b00(param_1[3],"䪃膃覃튕垏");
    FUN_00317508(param_1[3],1);
    uVar2 = 2;
    break;
  case 6:
    FUN_002e6354(auStack_98,0x80);
    uVar2 = FUN_003efa38(param_2);
    FUN_002e342c(auStack_98,uVar2);
    uVar2 = FUN_0028029c();
    FUN_002371b4(1);
    asdLoadFileSyncDefault();
    FUN_002371b4(uVar2);
    if (*(char *)((int)puVar6 + 10) == '\x01') {
      FUN_004f5144(param_1,param_2,puVar6);
    }
    *param_1 = 0;
    return 0;
  case 7:
    iVar4 = FUN_001656a0(1);
    if (iVar4 == 0) {
      uVar2 = param_1[3];
      iVar10 = *(int *)(param_2 + 0x1ed4) + *(short *)(param_1 + 4) * 0x1d0;
      FUN_001568f8(param_2);
      iVar4 = func_0x003f11ac(param_2,(int)*(short *)(param_1 + 4));
      puVar6 = (unsigned int *)FUN_00340ec8(uVar2,1);
      *(unsigned int *)(iVar10 + 0xc) = *puVar6;
      puVar6 = (unsigned int *)FUN_00340ec8(uVar2,2);
      *(unsigned int *)(iVar10 + 0x10) = *puVar6;
      puVar6 = (unsigned int *)FUN_00340ec8(uVar2,3);
      *(unsigned int *)(iVar10 + 0x14) = *puVar6;
      if (iVar4 == 0) {
        return 0;
      }
      *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar10 + 0xc);
      *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar10 + 0x10);
      *(unsigned int *)(iVar4 + 0x14) = *(unsigned int *)(iVar10 + 0x14);
      return 0;
    }
    FUN_001631d0(param_1[3],0);
    param_1[3] = 0;
    uVar2 = 3;
    break;
  case 8:
    iVar4 = FUN_001656a0(1);
    if (iVar4 == 0) {
      sVar1 = *(short *)(param_1 + 5);
      uVar2 = param_1[3];
      if ((sVar1 != 0) && (sVar1 != 1)) {
        if (sVar1 != 2) {
          return 0;
        }
        puVar6 = (unsigned int *)FUN_00317450(uVar2,0);
        DAT_00571508[0xd] = *puVar6;
        return 0;
      }
      if (sVar1 == 0) {
        puVar6 = (unsigned int *)(param_2 + 0x1ee0);
        puVar9 = DAT_00571508 + 7;
      }
      else {
        puVar6 = (unsigned int *)(param_2 + 0x1eec);
        puVar9 = DAT_00571508 + 10;
      }
      puVar5 = (unsigned int *)FUN_00340ec8(uVar2,0);
      *puVar9 = *puVar5;
      puVar5 = (unsigned int *)FUN_00340ec8(uVar2,1);
      puVar9[1] = *puVar5;
      puVar5 = (unsigned int *)FUN_00340ec8(uVar2,2);
      puVar9[2] = *puVar5;
      uVar2 = puVar9[1];
      uVar8 = puVar9[2];
      *puVar6 = *puVar9;
      puVar6[1] = uVar2;
      puVar6[2] = uVar8;
      puVar6 = DAT_00571508;
      uVar2 = puVar9[1];
      uVar8 = puVar9[2];
      *DAT_00571508 = *puVar9;
      puVar6[1] = uVar2;
      puVar6[2] = uVar8;
      return 0;
    }
    FUN_001631d0(param_1[3],0);
    param_1[3] = 0;
code_r0x004f4d58:
    uVar2 = *(unsigned int *)(param_2 + 0x7c);
    auStack_98[0] = 4;
    FUN_0028033c(uVar2,0xf0,0x10,0x20);
    param_1[3] = uVar2;
    FUN_0037a854();
    FUN_002e0898(param_1[3],0xc);
    FUN_002ea508(param_1[3],"CAMERA");
    FUN_002a1b00(param_1[3],0x52815c);
    FUN_002a1b00(param_1[3],0x528154);
    FUN_002a1b00(param_1[3],&DAT_00528144);
    FUN_00317508(param_1[3],1);
    *param_1 = 4;
    return 0;
  case 9:
    return 0xffffffff;
  default:
    return 0;
  }
  *param_1 = uVar2;
  return 0;
}
*/
#include "common.h"
