/* NON_MATCHING: Movie debug browser enumerates rom:/moflex, wraps file selection, and advances playback states; the reference has incorrect allocation/file-reader returns and folded neighboring-state bodies. */
/* romwright 0.5.0 decompilation of FUN_001dd280 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001dd280(void)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iStack_254;
  unsigned char auStack_250 [536];
  int uStack_38;
  unsigned int uStack_34;
  
  iVar1 = FUN_002c08f0();
  switch(*(unsigned int *)(iVar1 + 0x10)) {
  case 0:
    if (*(int *)(iVar1 + 100) == 0) {
      puVar2 = (unsigned int *)0x8;
      FUN_002c222c();
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = 0x420e44;
        puVar2[1] = 0;
      }
      *(unsigned int **)(iVar1 + 0x5c) = puVar2;
      puVar2 = puVar2 + 1;
      iVar6 = 0x1dd5d8;
      piVar7 = &iStack_254;
      uStack_38 = 0;
      uStack_34 = 0;
      FUN_002b90e6(&uStack_38);
      while (iVar3 = FUN_002b90c8(iVar6,0x105,&uStack_38), iVar3 != 0) {
        piVar4 = piVar7;
        FUN_002c618c(piVar7,iVar6,iVar3,&uStack_38);
        if (piVar4 == (int *)0x0) break;
        piVar7 = (int *)((int)piVar7 + 2);
        iVar6 = iVar6 + iVar3;
      }
      *(unsigned short *)piVar7 = 0;
      FUN_00355dd0(puVar2,&iStack_254);
      if (((int)puVar2 < 0) && ((int)puVar2 < 0)) {
        FUN_002bbb2c();
      }
      while( 1 ) {
        iVar6 = func_0x00355e5c(&iStack_254,*(unsigned int *)(*(int *)(iVar1 + 0x5c) + 4),auStack_250,
                                1);
        if (iVar6 < 0) {
          FUN_002bbb2c(iVar6,0x1dd3a8);
        }
        if (iStack_254 == 0) break;
        if ((char)uStack_34 == '\0') {
          *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
        }
      }
      iVar6 = *(int *)(iVar1 + 0x5c);
      FUN_002628fc(*(unsigned int *)(iVar6 + 4));
      *(unsigned int *)(iVar6 + 4) = 0;
      iVar6 = *(int *)(iVar1 + 0x60) * 0x228;
      FUN_00262888();
      *(int *)(iVar1 + 100) = iVar6;
      iVar3 = 0;
      iVar8 = 0x1dd5d8;
      iVar6 = *(int *)(iVar1 + 0x5c) + 4;
      piVar7 = &iStack_254;
      uStack_38 = 0;
      uStack_34 = 0;
      FUN_002b90e6(&uStack_38);
      while (iVar5 = FUN_002b90c8(iVar8,0x105,&uStack_38), iVar5 != 0) {
        piVar4 = piVar7;
        FUN_002c618c(piVar7,iVar8,iVar5,&uStack_38);
        if (piVar4 == (int *)0x0) break;
        piVar7 = (int *)((int)piVar7 + 2);
        iVar8 = iVar8 + iVar5;
      }
      *(unsigned short *)piVar7 = 0;
      FUN_00355dd0(iVar6,&iStack_254);
      if ((iVar6 < 0) && (iVar6 < 0)) {
        FUN_002bbb2c();
      }
      while( 1 ) {
        iVar6 = func_0x00355e5c(&iStack_254,*(unsigned int *)(*(int *)(iVar1 + 0x5c) + 4),
                                *(int *)(iVar1 + 100) + iVar3 * 0x228,1);
        if (iVar6 < 0) {
          FUN_002bbb2c(iVar6,0x1dd4bc);
        }
        if (iStack_254 == 0) break;
        if (*(char *)(*(int *)(iVar1 + 100) + iVar3 * 0x228 + 0x21c) == '\0') {
          iVar3 = iVar3 + 1;
        }
      }
      iVar6 = *(int *)(iVar1 + 0x5c);
      FUN_002628fc(*(unsigned int *)(iVar6 + 4));
      *(unsigned int *)(iVar6 + 4) = 0;
      if (*(int **)(iVar1 + 0x5c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x5c) + 4))();
      }
      *(unsigned int *)(iVar1 + 0x5c) = 0;
    }
    iVar6 = 1;
    *(int *)(iVar1 + 0x10) = iVar6;
    break;
  case 1:
    iVar6 = FUN_002b8cec(5);
    if (iVar6 != 0) {
      iVar6 = *(int *)(iVar1 + 0x68) - 1;
      *(int *)(iVar1 + 0x68) = iVar6;
      if (-1 < iVar6) {
        return 0;
      }
      iVar6 = *(int *)(iVar1 + 0x60) - 1;
    }
    else {
      iVar6 = FUN_002b8cec(6);
      if (iVar6 == 0) {
        iVar6 = FUN_002bfde4(0);
        if (iVar6 != 0) {
          FUN_0026281c(auStack_250,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x68) * 0x228,0x40);
          FUN_002be624(iVar1 + 0x1b,0x1dd5e8,auStack_250);
          iVar6 = 2;
          *(int *)(iVar1 + 0x10) = iVar6;
          break;
        }
        iVar6 = FUN_002bfde4(2);
        if (iVar6 != 0) {
          iVar6 = 9;
          *(int *)(iVar1 + 0x10) = iVar6;
          break;
        }
        return 0;
      }
      iVar6 = *(int *)(iVar1 + 0x68) + 1;
      *(int *)(iVar1 + 0x68) = iVar6;
      if (iVar6 < *(int *)(iVar1 + 0x60)) {
        return 0;
      }
      iVar6 = 0;
    }
    *(int *)(iVar1 + 0x68) = iVar6;
    break;
  case 2:
    DAT_0044d048 = 1;
    FUN_00104e54();
    func_0x002e14b0();
    FUN_0020fef0();
    func_0x0018b058();
    FUN_0017fc6c();
    *(unsigned int *)(iVar1 + 0x10) = 3;
  case 3:
    iVar6 = iVar1 + 0x1b;
    FUN_0032b3c4();
    *(int *)(iVar1 + 0x14) = iVar6;
    if (iVar6 != 7) {
      FUN_002a03d8(0,10);
      FUN_002a03d8(1,10);
      iVar6 = *(int *)(iVar1 + 0x10) + 1;
    }
    else {
      iVar6 = 7;
    }
    *(int *)(iVar1 + 0x10) = iVar6;
    break;
  case 4:
    func_0x001a14e8();
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  case 5:
    iVar6 = FUN_0032b9e0();
    if (iVar6 != 0) {
      iVar6 = FUN_002c15fc(9);
      if (((iVar6 == 0) && (iVar6 = FUN_002c15fc(6), iVar6 == 0)) ||
         (*(char *)(iVar1 + 0x1a) == '\0')) {
        if (!(*(int *)(iVar1 + 0x10) == 5 || *(int *)(iVar1 + 0x10) == 6)) goto code_r0x001dd71c;
        return 0;
      }
      if (*(char *)(iVar1 + 0x19) != '\0') {
        FUN_0029c3c0(0,0,0xffffffff);
        FUN_0029c3c0(1,10,0xffffffff);
        iVar6 = 6;
        *(unsigned int *)(iVar1 + 0x6c) = 0x3f800000;
        *(int *)(iVar1 + 0x10) = iVar6;
        break;
      }
    }
    else if (*(char *)(iVar1 + 0x19) != '\0') {
      FUN_0029c3c0(0,0,0xffffffff);
      FUN_0029c3c0(1,10,0xffffffff);
      iVar6 = 6;
      *(int *)(iVar1 + 0x10) = iVar6;
      break;
    }
    *(unsigned int *)(iVar1 + 0x10) = 7;
    goto code_r0x001dd71c;
  case 6:
    iVar6 = FUN_002896bc();
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = 7;
    *(int *)(iVar1 + 0x10) = iVar6;
    break;
  case 7:
code_r0x001dd71c:
    FUN_0032bb74();
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  case 8:
    FUN_0017feb4();
    func_0x00106080();
    func_0x00105ef8();
    FUN_001036fc();
    FUN_00106650();
    titleConfigApplyAudio();
    func_0x003336c8();
    iVar6 = 0;
    DAT_0044d048 = 0;
    if (*(char *)(iVar1 + 0x5b) != '\0') {
      *(int *)(iVar1 + 0x10) = iVar6;
      break;
    }
    *(unsigned int *)(iVar1 + 0x10) = 9;
    if (*(char *)(iVar1 + 0x19) == '\0') {
      if (*(char *)(iVar1 + 0x18) == '\0') {
        FUN_0029c3c0(0,10,0xff);
        FUN_0029c3c0(1,10,0xff);
        return 0;
      }
      FUN_0029c3c0(0,10,0xffffffff);
      FUN_0029c3c0(1,10,0xffffffff);
      return 0;
    }
    return 0;
  case 9:
    iVar1 = FUN_002896bc();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}
*/
#include "common.h"
