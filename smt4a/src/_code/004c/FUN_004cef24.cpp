/* NON_MATCHING: found outside every function: branched to by FUN_002e5ba0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_004cef24 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_004cef24(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char bVar4;
  
  switch(*(unsigned int *)(param_1 + 0x10)) {
  case 0:
    FUN_002804b0("battle/gameover/gameover.bf",param_1 + 0x18,0);
    FUN_002804b0("battle/gameover/gameover.mbm",param_1 + 0x20,0);
    FUN_0013f1b8(0x22,0);
    iVar3 = 1;
    do {
      FUN_001acf98(0x22,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    *(unsigned int *)(param_1 + 0x10) = 1;
    if ((*(char *)(param_1 + 8) == '\x03') && (iVar3 = FUN_00399e04(), iVar3 != 0)) {
      FUN_00342334(0);
    }
  case 1:
    bVar4 = *(int *)(param_1 + 0x18) != 0;
    iVar3 = 0;
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 0x20);
    }
    if (bVar4 && iVar3 != 0) {
      iVar3 = 1;
      do {
        iVar1 = FUN_0018206c(0x22,iVar3);
        if (iVar1 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 7);
      iVar3 = *(int *)(param_1 + 0x18);
      FUN_00275bc8(iVar3,*(unsigned int *)(param_1 + 0x20));
      *(int *)(param_1 + 0x1c) = iVar3;
      *(unsigned int *)(iVar3 + 0x108) = 1;
      FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),0);
      if (*(char *)(param_1 + 8) != '\x02') {
        *(unsigned int *)(param_1 + 0x10) = 4;
      }
      else {
        FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),4);
        uVar2 = 2;
        *(unsigned int *)(param_1 + 0x10) = uVar2;
      }
    }
    break;
  case 2:
    iVar3 = FUN_00224880(*(unsigned int *)(param_1 + 0x1c));
    if (iVar3 == 2) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),3);
      *(unsigned int *)(param_1 + 0x10) = 3;
    }
    break;
  case 3:
    iVar3 = FUN_00224880(*(unsigned int *)(param_1 + 0x1c));
    if (iVar3 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x10) = 4;
  case 4:
    iVar3 = FUN_004cf140(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    uVar2 = 5;
    *(unsigned int *)(param_1 + 0x10) = uVar2;
    break;
  case 5:
    if ((*(char *)(param_1 + 8) == '\x03') && (iVar3 = FUN_00399e04(), iVar3 != 0)) {
      FUN_00342334(1);
    }
    iVar3 = 1;
    do {
      FUN_0019a7f4(0x22,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    FUN_002e132c(0x22);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_0019c364();
      *(unsigned int *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(param_1 + 0x20) = 0;
    }
    *(unsigned int *)(param_1 + 0xc) = 3;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return 0;
}
*/
#include "common.h"
