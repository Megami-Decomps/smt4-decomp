/* NON_MATCHING: script-driven unit transition waits on sprite effects, prepares message strings, and dispatches events; the owner, selected-unit descriptors, and script-result layouts remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_0032e4a4 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0032e4a4(int param_1)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned char auStack_d0 [128];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int aiStack_48 [9];
  
  uStack_50 = 0;
  switch(*(unsigned int *)(param_1 + 0x3bc)) {
  case 0:
    FUN_00275f44(*(unsigned int *)(param_1 + 0x360),0x15);
    iVar9 = FUN_0032169c();
    if (iVar9 == 0) {
      FUN_00336de4(*(unsigned short *)(param_1 + 0x14e),1);
    }
    break;
  case 1:
    iVar9 = FUN_00224880(*(unsigned int *)(param_1 + 0x360));
    if (iVar9 != 2) {
      return uStack_50;
    }
    iVar9 = FUN_0035fd00(*(unsigned short *)(param_1 + 0x14e));
    if (iVar9 == 0) {
      return uStack_50;
    }
    iVar9 = FUN_003811b4(*(unsigned short *)(param_1 + 0x14e));
    if (iVar9 == 0) {
      return uStack_50;
    }
    FUN_0035fd38(1);
    uVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x14e);
    FUN_00184310();
    uVar8 = FUN_002c1ce4(*(unsigned char *)(uVar4 + 2),0);
    FUN_002e342c(auStack_d0,uVar8);
    FUN_003180c4(0,auStack_d0);
    uVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x14e);
    FUN_00180118(uVar4);
    FUN_002e342c(auStack_d0,uVar4);
    FUN_003180c4(1,auStack_d0);
    uVar8 = *(unsigned int *)(param_1 + 0x360);
    uVar10 = 0x17;
    FUN_00275f44(uVar8,uVar10);
    break;
  case 2:
    iVar9 = FUN_0032169c();
    if (iVar9 == 0) {
      return uStack_50;
    }
    iVar9 = FUN_00224880(*(unsigned int *)(param_1 + 0x360));
    if (iVar9 != 2) {
      return uStack_50;
    }
    FUN_003216ec();
    FUN_001f4908(0,0x1e,0xffffffff);
    uVar8 = 0x1000214;
    sysPlayVoice(uVar8);
    break;
  case 3:
    iVar9 = FUN_0034efb0();
    if (iVar9 == 0) {
      return uStack_50;
    }
    iVar9 = FUN_00224880(*(unsigned int *)(param_1 + 0x360));
    if (iVar9 == 2) {
      FUN_0035fc4c();
      break;
    }
    return uStack_50;
  case 4:
    iVar9 = FUN_00163e84(0);
    if (iVar9 == 0) {
      return uStack_50;
    }
    if (*(unsigned short **)(param_1 + 0x344) != (unsigned short *)0x0) {
      uVar2 = **(unsigned short **)(param_1 + 0x344);
      iVar9 = FUN_001ab888();
      iVar12 = 0;
      while (iVar3 = FUN_001ab854((int)*(char *)(iVar9 + iVar12 + 0x1c88)),
            *(short *)(iVar3 + 0x62) != *(short *)(param_1 + 0x14e)) {
        iVar12 = iVar12 + 1;
        if (0x17 < iVar12) goto code_r0x0032ea88;
      }
      iVar3 = (int)*(char *)(iVar9 + iVar12 + 0x1c88);
      *(unsigned char *)(iVar9 + iVar12 + 0x1c88) = 0xff;
      iVar9 = FUN_002a4b28(uVar2);
      uStack_4c = (unsigned int)(iVar9 == 0);
      FUN_004bd30c(iVar3,uVar2,0);
      iVar9 = FUN_001ab854(iVar3);
      iVar3 = 0;
      iVar12 = 0;
      aiStack_48[0] = 0;
      aiStack_48[1] = 0;
      aiStack_48[2] = 0;
      aiStack_48[3] = 0;
      do {
        iVar14 = iVar9 + iVar12 * 2;
        uVar4 = (unsigned int)*(unsigned short *)(iVar14 + 0x34);
        if ((uVar4 != 0) && (FUN_003c3f1c(), (*(unsigned char *)(uVar4 + 3) & 0x20) != 0)) {
          iVar11 = iVar3 * 2;
          iVar3 = iVar3 + 1;
          *(unsigned short *)((int)aiStack_48 + iVar11) = *(unsigned short *)(iVar14 + 0x34);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
      iVar12 = 0;
      do {
        uVar2 = *(unsigned short *)((int)aiStack_48 + iVar12 * 2);
        *(unsigned short *)(iVar9 + iVar12 * 2 + 0x34) = uVar2;
        FUN_004bd6b0(iVar9,uVar2,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
      FUN_002e71b4(param_1 + 0x218,iVar9,300);
      FUN_004bcd90(param_1 + 0x218);
      FUN_004bd3ec(iVar9,2);
      uVar4 = (unsigned int)*(unsigned short *)(iVar9 + 0x62);
      FUN_00184310();
      iVar12 = FUN_004bd21c(iVar9);
      iVar3 = 0;
      iVar14 = 0;
      do {
        if ((iVar14 < iVar12) && (sVar1 = *(short *)(uVar4 + iVar3 * 2 + 0x40), sVar1 != 0)) {
          FUN_004bd6b0(iVar9,sVar1,iVar14);
          iVar14 = iVar14 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      if (iVar14 < iVar12) {
        uVar4 = FUN_0037d478();
        if ((unsigned int)(int)*(short *)(*(int *)(param_1 + 0x344) + 6) <= uVar4) {
          uVar4 = (unsigned int)*(short *)(*(int *)(param_1 + 0x344) + 4);
          if (iVar9 != 0) {
            iVar3 = 0;
            do {
              if (*(unsigned short *)(iVar9 + iVar3 * 2 + 0x34) == uVar4) goto code_r0x0032e870;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 8);
          }
          FUN_004bd6b0(iVar9,uVar4,iVar14);
          iVar14 = iVar14 + 1;
        }
      }
code_r0x0032e870:
      if (iVar14 < iVar12) {
        iVar11 = 3;
        sVar1 = *(short *)(param_1 + 0x122);
        uVar4 = (unsigned int)(*(short *)(param_1 + 0x120) != 0);
        iVar3 = 0;
        psVar5 = (short *)(param_1 + 0x120);
        do {
          if (sVar1 != 0) {
            uVar4 = uVar4 + 1;
          }
          sVar1 = psVar5[3];
          if (psVar5[2] != 0) {
            iVar3 = iVar3 + 1;
          }
          iVar11 = iVar11 - 1;
          psVar5 = psVar5 + 2;
        } while (iVar11 != 0);
        iVar3 = uVar4 + iVar3;
        if (*(short *)(param_1 + 0x12e) != 0) {
          iVar3 = iVar3 + 1;
        }
        FUN_001b4a90(aiStack_48,0x20,0xffffffff);
        iVar11 = 0;
        do {
          iVar13 = 0;
          iVar6 = FUN_00184964(0,iVar3 - 1);
          iVar7 = 0;
          do {
            if (aiStack_48[iVar7] == iVar6) goto code_r0x0032e99c;
            iVar13 = iVar13 + 1;
            if (aiStack_48[iVar7] == -1) {
              aiStack_48[iVar7] = iVar6;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 8);
          iVar6 = param_1 + iVar6 * 2;
          if (iVar9 != 0) {
            iVar7 = 0;
            do {
              if ((unsigned int)*(unsigned short *)(iVar9 + iVar7 * 2 + 0x34) == (int)*(short *)(iVar6 + 0x120))
              goto code_r0x0032e99c;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 8);
          }
          uVar4 = (unsigned int)*(unsigned short *)(iVar6 + 0x120);
          FUN_003c3f1c();
          if ((*(unsigned char *)(uVar4 + 3) & 0x20) != 0) {
            *(unsigned short *)(iVar9 + iVar14 * 2 + 0x34) = *(unsigned short *)(iVar6 + 0x120);
            FUN_004bd6b0(iVar9,*(unsigned short *)(iVar6 + 0x120),iVar14);
            iVar14 = iVar14 + 1;
          }
code_r0x0032e99c:
          bVar16 = SBORROW4(iVar14,iVar12);
          iVar6 = iVar14 - iVar12;
          if (iVar14 < iVar12) {
            bVar16 = SBORROW4(iVar11 + 1,100);
            iVar6 = iVar11 - 99;
          }
          bVar15 = iVar6 < 0;
          if (bVar15 != bVar16) {
            bVar16 = SBORROW4(iVar13,iVar3);
            bVar15 = iVar13 - iVar3 < 0;
          }
          iVar11 = iVar11 + 1;
        } while (bVar15 != bVar16);
      }
      FUN_002a6894(iVar9);
      if (uStack_4c != 0) {
        FUN_002a5e7c(*(unsigned short *)(iVar9 + 0x62));
        *(unsigned char *)(param_1 + 0x7d4) = 1;
      }
      FUN_002bf520();
      FUN_0032e30c();
      uVar8 = FUN_002bf520();
      FUN_0032e25c(uVar8,(int)*(short *)(iVar9 + 0x62));
      if (((*(char *)(param_1 + 0x7d5) == '\0') && (*(char *)(param_1 + 0x3e4) != '\0')) &&
         (iVar9 = FUN_00345388(0x20), iVar9 != 0)) {
        FUN_00319e58();
        FUN_002bf520();
        FUN_002c0b5c();
      }
      FUN_002bf520();
      FUN_002f4014();
    }
    else {
      FUN_002e71b4(param_1 + 0x218,param_1 + 0xec,300);
    }
code_r0x0032ea88:
    uVar2 = FUN_002a469c();
    FUN_00336de4(uVar2,1);
    uVar4 = FUN_002a469c();
    uVar4 = uVar4 & 0xffff;
    FUN_00184310();
    uVar8 = FUN_002c1ce4(*(unsigned char *)(uVar4 + 2),0);
    FUN_002e342c(auStack_d0,uVar8);
    FUN_003180c4(0,auStack_d0);
    uVar4 = FUN_002a469c();
    uVar4 = uVar4 & 0xffff;
    FUN_00180118(uVar4);
    FUN_002e342c(auStack_d0,uVar4);
    FUN_003180c4(1,auStack_d0);
    FUN_00275f44(*(unsigned int *)(param_1 + 0x360),0x18);
    FUN_0031d890();
    uVar8 = 0x100013f;
    sysPlayVoice(uVar8);
    break;
  case 5:
    uVar2 = FUN_002a469c();
    iVar9 = FUN_0035fd00(uVar2);
    if (iVar9 != 0) {
      FUN_0035fd38(1);
      FUN_003d54f8(0,0x1e);
      break;
    }
    return uStack_50;
  case 6:
    iVar9 = FUN_0032169c();
    if (iVar9 == 0) {
      return uStack_50;
    }
    iVar9 = FUN_00163e84(0);
    if (iVar9 != 0) {
      iVar9 = FUN_00224880(*(unsigned int *)(param_1 + 0x360));
      if (iVar9 == 2) {
        uVar8 = *(unsigned int *)(param_1 + 0x364);
        uVar10 = 0;
        FUN_00275f44(uVar8,uVar10);
        break;
      }
      return uStack_50;
    }
    return uStack_50;
  case 7:
    iVar9 = FUN_00224880(*(unsigned int *)(param_1 + 0x364));
    if (iVar9 != 2) {
      return uStack_50;
    }
    *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) & 0xfffffffe;
    iVar9 = FUN_00388024();
    if (iVar9 == 9) {
      *(unsigned int *)(param_1 + 0x3bc) = 10;
      FUN_003216ec();
      *(unsigned char *)(param_1 + 0x7d4) = 0;
      return uStack_50;
    }
    *(int *)(param_1 + 0x3b0) = iVar9;
    bVar16 = iVar9 == 4;
    if (bVar16) {
      iVar9 = 4;
    }
    *(unsigned int *)(param_1 + 0x3bc) = 0;
    if (bVar16) {
      *(int *)(param_1 + 0x3bc) = iVar9;
    }
    return 3;
  default:
    return uStack_50;
  case 10:
    iVar9 = FUN_0034efb0();
    if (iVar9 != 0) {
      *(unsigned int *)(param_1 + 0x3bc) = 0;
      FUN_0035fc4c();
      uStack_50 = 3;
      *(unsigned int *)(param_1 + 0x3b0) = 9;
    }
    return uStack_50;
  }
  *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
  return uStack_50;
}
*/
#include "common.h"
