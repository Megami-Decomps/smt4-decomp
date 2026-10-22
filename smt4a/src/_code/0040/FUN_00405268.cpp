/* NON_MATCHING: found outside every function: called by FUN_0037d4b0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00405268 for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x004054a0) * /
/* WARNING: Removing unreachable block (ram,0x00405494) * /
/* WARNING: Removing unreachable block (ram,0x004054a8) * /

unsigned int FUN_00405268(int param_1)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char bVar5;
  
  switch(*(unsigned char *)(param_1 + 4)) {
  case 1:
    FUN_004036fc(param_1);
    break;
  case 2:
    iVar3 = FUN_00163aa4(param_1 + 0x14c);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_004029f4(param_1,*(unsigned char *)(param_1 + 5),0);
    break;
  case 3:
    FUN_00403e2c(param_1);
    break;
  case 4:
    sVar1 = *(short *)(*(int *)(param_1 + 0x664) + 6);
    uVar2 = *(unsigned short *)(*(int *)(param_1 + 0x664) + 8);
    if (sVar1 != 0) {
      iVar3 = FUN_00341940(sVar1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_0018206c(sVar1,uVar2);
      if (iVar3 == 0) {
        return 0;
      }
    }
    FUN_004029f4(param_1,*(unsigned char *)(param_1 + 5),0);
    break;
  case 5:
    iVar3 = FUN_00163aa4(param_1 + 0x1d8);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x234) != 1) {
      sVar1 = *(short *)(*(int *)(param_1 + 0x664) + 6);
      uVar2 = *(unsigned short *)(*(int *)(param_1 + 0x664) + 8);
      if ((sVar1 != 0) &&
         (((iVar3 = FUN_00341940(sVar1), iVar3 == 0 ||
           (iVar3 = FUN_0018206c(sVar1,uVar2), iVar3 == 0)) && (*(char *)(param_1 + 0x104) != '\0'))
         )) {
        FUN_004029f4(param_1,4,*(unsigned char *)(param_1 + 5));
        return 0;
      }
    }
    else if (*(char *)(param_1 + 0x104) != '\0') {
      FUN_0019a7f4(*(unsigned short *)(*(int *)(param_1 + 0x664) + 6),
                   *(unsigned short *)(*(int *)(param_1 + 0x664) + 8));
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_002e132c(0x32);
        *(unsigned char *)(param_1 + 0x24) = 0;
      }
      *(unsigned char *)(param_1 + 0x104) = 0;
    }
    FUN_004029f4(param_1,*(unsigned char *)(param_1 + 5),0);
    break;
  case 6:
    iVar3 = FUN_00163aa4(param_1 + 0x264);
    if (iVar3 != 0) {
      if (*(short *)(param_1 + 0x2c0) != 1) {
        FUN_004029f4(param_1,7,0);
        *(unsigned char *)(param_1 + 0x668) = 0;
        *(unsigned char *)(param_1 + 0x669) = 0;
      }
      else {
        bVar5 = *(short *)(param_1 + 0x2b4) != 7;
        uVar2 = 0;
        if (!bVar5) {
          uVar2 = 4;
        }
        else if (bVar5) {
          uVar2 = 5;
        }
        FUN_00184758(param_1 + 0x264,uVar2,0);
        FUN_00184c00(param_1 + 0x264,0,0);
        iVar3 = *(int *)(param_1 + 0x108) + 1;
        *(int *)(param_1 + 0x108) = iVar3;
        if (1 < iVar3) {
          *(unsigned int *)(param_1 + 0x108) = 0;
        }
      }
    }
    break;
  case 7:
    FUN_00402f58(param_1);
    break;
  case 8:
    iVar3 = FUN_0023b258();
    if (iVar3 != 0) {
      FUN_0035d8a4();
      FUN_004029f4(param_1,3,0);
    }
    else {
      iVar3 = FUN_002c7c54();
      if (iVar3 != 0x69) {
        FUN_004057dc(param_1);
        uVar4 = (unsigned int)*(unsigned short *)
                       (param_1 + (*(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0xf4)) * 2 + 0x408)
        ;
        FUN_0039b984();
        *(unsigned int *)(param_1 + 0x664) = uVar4;
      }
    }
  }
  return 0;
}
*/
#include "common.h"
