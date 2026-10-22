/* NON_MATCHING: found outside every function: branched to by jobDispatchOptionalOwner; not written yet. */
/* romwright 0.5.0 decompilation of FUN_003d8f60 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_003d8f60(unsigned int *param_1,int param_2)

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
  
  switch(*param_1) {
  case 0:
    if (param_2 != 0) {
      piVar7 = (int *)(param_2 + 0x1e98);
      iVar4 = 0;
      if (*piVar7 != 0) {
        iVar10 = 4;
        do {
          iVar4 = iVar10 + 1;
          iVar10 = *piVar7 + iVar10 * 0x114;
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
          iVar4 = *piVar7 + iVar4 * 0x114;
          *(unsigned int *)(iVar4 + 100) = *(unsigned int *)(iVar4 + 0x68);
          iVar4 = iVar10;
        } while (iVar10 < 0x6d);
      }
    }
    uVar2 = *(unsigned int *)(param_2 + 0x58);
    auStack_98[0] = 4;
    FUN_002631dc(uVar2,0xeb,0x10,0x20);
    param_1[3] = uVar2;
    FUN_00227200();
    FUN_002271e8(param_1[3],0xc,0x10);
    FUN_00262914(param_1[3],0x400660);
    FUN_0022713c(param_1[3],0x400658);
    FUN_0022713c(param_1[3],0x400650);
    FUN_0022713c(param_1[3],0x400648);
    FUN_0025c2ec(param_1[3],1);
    uVar2 = 1;
    break;
  case 1:
    iVar4 = FUN_002bfde4(0);
    if (iVar4 == 0) {
      iVar4 = FUN_002bfde4(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_002c43b4(param_1[3],0);
      param_1[3] = 0;
      return 0xffffffff;
    }
    iVar4 = FUN_0025628c(param_1[3]);
    FUN_002c43b4(param_1[3],0);
    param_1[3] = 0;
    if (iVar4 == 0) goto code_r0x003d9140;
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
    iVar4 = FUN_002bfde4(0);
    if (iVar4 != 0) {
      iVar4 = FUN_0025628c(param_1[3]);
      FUN_002c43b4(param_1[3],0);
      param_1[3] = 0;
      if (iVar4 == 0) {
        FUN_003d8a18(param_1,param_2);
        uVar2 = 3;
        break;
      }
      if (iVar4 == 1) goto code_r0x003d9244;
    }
    else {
      iVar4 = FUN_002bfde4(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_002c43b4(param_1[3],0);
      param_1[3] = 0;
    }
  case 5:
    uVar2 = 0;
    break;
  case 3:
    iVar4 = FUN_002bfde4(0);
    if (iVar4 == 0) {
      iVar4 = FUN_002bfde4(1);
      if (iVar4 == 0) {
        FUN_003d88dc(param_1,param_2);
        return 0;
      }
      uVar2 = 0;
      break;
    }
    FUN_003d8b34(param_1,param_2,*(unsigned int *)(param_2 + 0x58));
    uVar2 = 7;
    break;
  case 4:
    iVar4 = FUN_002bfde4(0);
    if (iVar4 != 0) {
      uVar3 = FUN_0025628c(param_1[3]);
      FUN_002c43b4(param_1[3],0);
      param_1[3] = 0;
      if (uVar3 < 3) {
        FUN_003d8c88(param_1,param_2,*(unsigned int *)(param_2 + 0x58),uVar3 & 0xffff);
        uVar2 = 8;
        break;
      }
    }
    else {
      iVar4 = FUN_002bfde4(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_002c43b4(param_1[3],0);
      param_1[3] = 0;
    }
code_r0x003d9140:
    uVar2 = *(unsigned int *)(param_2 + 0x58);
    auStack_98[0] = 4;
    FUN_002631dc(uVar2,0xeb,0x10,0x20);
    param_1[3] = uVar2;
    FUN_00227200();
    FUN_002271e8(param_1[3],0xc,0x10);
    FUN_00262914(param_1[3],"MODE");
    FUN_0022713c(param_1[3],"슌쪕튕垏");
    FUN_0022713c(param_1[3],"䪃膃覃튕垏");
    FUN_0025c2ec(param_1[3],1);
    uVar2 = 2;
    break;
  case 6:
    FUN_002c4938(auStack_98,0x80);
    uVar2 = FUN_00240448(param_2);
    FUN_002bf694(auStack_98,uVar2);
    uVar2 = FUN_0025b740();
    FUN_0025b730(1);
    iVar4 = FUN_002c5c04(auStack_98);
    FUN_0025b730(uVar2);
    if (*(char *)(iVar4 + 10) == '\x01') {
      FUN_003d9628(param_1,param_2,iVar4);
    }
    *param_1 = 0;
    return 0;
  case 7:
    iVar4 = FUN_002bfde4(1);
    if (iVar4 == 0) {
      uVar2 = param_1[3];
      iVar10 = *(int *)(param_2 + 0x1e98) + *(short *)(param_1 + 4) * 0x114;
      FUN_0027da30(param_2);
      iVar4 = func_0x0033a5ec(param_2,(int)*(short *)(param_1 + 4));
      puVar6 = (unsigned int *)FUN_0022a344(uVar2,1);
      *(unsigned int *)(iVar10 + 0xc) = *puVar6;
      puVar6 = (unsigned int *)FUN_0022a344(uVar2,2);
      *(unsigned int *)(iVar10 + 0x10) = *puVar6;
      puVar6 = (unsigned int *)FUN_0022a344(uVar2,3);
      *(unsigned int *)(iVar10 + 0x14) = *puVar6;
      *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar10 + 0xc);
      *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar10 + 0x10);
      *(unsigned int *)(iVar4 + 0x14) = *(unsigned int *)(iVar10 + 0x14);
      return 0;
    }
    FUN_002c43b4(param_1[3],0);
    param_1[3] = 0;
    uVar2 = 3;
    break;
  case 8:
    iVar4 = FUN_002bfde4(1);
    if (iVar4 == 0) {
      sVar1 = *(short *)(param_1 + 5);
      uVar2 = param_1[3];
      if ((sVar1 != 0) && (sVar1 != 1)) {
        if (sVar1 != 2) {
          return 0;
        }
        puVar6 = (unsigned int *)FUN_0022a464(uVar2,0);
        DAT_004342c8[9] = *puVar6;
        return 0;
      }
      if (sVar1 == 0) {
        puVar6 = (unsigned int *)(param_2 + 0x1ea4);
        puVar9 = DAT_004342c8 + 3;
      }
      else {
        puVar6 = (unsigned int *)(param_2 + 0x1eb0);
        puVar9 = DAT_004342c8 + 6;
      }
      puVar5 = (unsigned int *)FUN_0022a344(uVar2,0);
      *puVar9 = *puVar5;
      puVar5 = (unsigned int *)FUN_0022a344(uVar2,1);
      puVar9[1] = *puVar5;
      puVar5 = (unsigned int *)FUN_0022a344(uVar2,2);
      puVar9[2] = *puVar5;
      uVar2 = puVar9[1];
      uVar8 = puVar9[2];
      *puVar6 = *puVar9;
      puVar6[1] = uVar2;
      puVar6[2] = uVar8;
      puVar6 = DAT_004342c8;
      uVar2 = puVar9[1];
      uVar8 = puVar9[2];
      *DAT_004342c8 = *puVar9;
      puVar6[1] = uVar2;
      puVar6[2] = uVar8;
      return 0;
    }
    FUN_002c43b4(param_1[3],0);
    param_1[3] = 0;
code_r0x003d9244:
    uVar2 = *(unsigned int *)(param_2 + 0x58);
    auStack_98[0] = 4;
    FUN_002631dc(uVar2,0xeb,0x10,0x20);
    param_1[3] = uVar2;
    FUN_00227200();
    FUN_002271e8(param_1[3],0xc,0x10);
    FUN_00262914(param_1[3],"CAMERA");
    FUN_0022713c(param_1[3],0x4005a0);
    FUN_0022713c(param_1[3],0x400598);
    FUN_0022713c(param_1[3],&DAT_00400588);
    FUN_0025c2ec(param_1[3],1);
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
