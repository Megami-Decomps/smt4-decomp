/* NON_MATCHING: S4Load title loading-screen state machine coordinates scripts, fades, slot requests, prompts, and cleanup; the large UI-work and script-result types are not reconstructed from the reference. */
/* romwright 0.5.0 decompilation of FUN_002364fc for reference (not compiled; its own view of the boundaries):

/* WARNING: Type propagation algorithm not settling * /

unsigned int FUN_002364fc(unsigned int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  unsigned int auStack_108 [64];
  
  iVar2 = DAT_00589154;
  switch(*(unsigned int *)(DAT_00589154 + 8)) {
  case 0:
    iVar4 = *(int *)(DAT_00589154 + 0x2a8);
    if (iVar4 != 0) {
      param_2 = *(int *)(DAT_00589154 + 0x2ac);
    }
    if (iVar4 == 0 || param_2 == 0) {
      return 0;
    }
    FUN_00275bc8();
    *(int *)(iVar2 + 0x2b0) = iVar4;
    *(unsigned int *)(iVar4 + 0x108) = 2;
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0);
    FUN_001681cc(0xde);
    *(unsigned int *)(iVar2 + 8) = 1;
    return 0;
  case 1:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 == 0) {
      FUN_001f4908(0,10,0xff);
      FUN_001f4908(1,10,0xff);
      *(unsigned int *)(iVar2 + 8) = 2;
      buttonHelpSetText(0,0xf4f4f4ff);
      FUN_003d2d6c(0xf);
      return 0;
    }
    FUN_001681cc(0xa1);
    uVar5 = 0x20;
    break;
  case 2:
    iVar4 = FUN_002e07f4();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    uVar5 = 3;
    break;
  case 3:
    iVar4 = FUN_002e07f4();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),1);
    uVar5 = 4;
    break;
  case 4:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_0043d394(iVar2 + 0xa6,0x100);
    auStack_108[0] = 0x100;
    FUN_00268250(2,0,99,iVar2 + 0xa6);
    gameDataAddHomeButtonHold(8);
    FUN_002684ac(1);
    FUN_00333574(1);
    uVar5 = 5;
    break;
  case 5:
    iVar4 = FUN_00229c9c();
    if (iVar4 != 1) {
      return 0;
    }
    iVar4 = FUN_003332d8();
    if (iVar4 != 0) {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0x11);
      uVar5 = 6;
    }
    else {
      FUN_0014374c();
      FUN_001a0380();
      gameDataAddHomeButtonHold(8);
      FUN_0043ca60(1);
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),2);
      uVar5 = 8;
    }
    *(unsigned int *)(iVar2 + 8) = uVar5;
    FUN_00137ea0(1);
    FUN_00138cf8(1);
    return 0;
  case 6:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0x11);
    uVar5 = 0x1b;
    break;
  case 7:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),*(unsigned int *)(iVar2 + 0x10));
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) != 0x15) {
        return 0;
      }
      FUN_003c1060();
      func_0x002a4b88(0);
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0xd);
    uVar5 = 0x1b;
    break;
  case 8:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),3);
    *(unsigned int *)(iVar2 + 8) = 9;
    FUN_001681cc(0x11c);
    return 0;
  case 9:
    FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    iVar4 = FUN_001656a0(0);
    if (iVar4 != 0) {
      FUN_002844e4();
      *(unsigned int *)(iVar2 + 8) = 10;
      FUN_001681cc(0xa0);
      uVar5 = 0x100020e;
    }
    else {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_002844e4();
      *(unsigned int *)(iVar2 + 0xc) = 8;
      *(unsigned int *)(iVar2 + 0x10) = 2;
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),4);
      *(unsigned int *)(iVar2 + 8) = 7;
      FUN_001681cc(0xa0);
      uVar5 = 0x100020f;
    }
    FUN_00169ddc(uVar5);
    return 0;
  case 10:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    uVar5 = FUN_0014374c();
    iVar4 = FUN_00429e14(uVar5,0xe5c);
    if (iVar4 < 0) {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),5);
      uVar5 = 0xb;
    }
    else {
      auStack_108[0] = *(unsigned int *)(iVar2 + 0x18);
      *(unsigned int *)(iVar2 + 0xa0) = 0;
      FUN_00268250(5,0,1,*(unsigned int *)(iVar2 + 0x14));
      uVar5 = 0xc;
    }
    break;
  case 0xb:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),2);
    uVar5 = 8;
    break;
  case 0xc:
    iVar4 = FUN_00229c9c();
    if (iVar4 != 1) {
      return 0;
    }
    iVar4 = FUN_003332d8();
    if (iVar4 != 0) {
      *(unsigned char *)(*(int *)(iVar2 + 0xa0) + iVar2 + 0xa4) = 0;
    }
    else {
      FUN_002e59f8(*(unsigned int *)(iVar2 + 0x14),iVar2 + *(int *)(iVar2 + 0xa0) * 0x80 + 700,0x80);
      *(unsigned char *)(*(int *)(iVar2 + 0xa0) + iVar2 + 0xa4) = 1;
    }
    iVar4 = *(int *)(iVar2 + 0xa0);
    if (iVar4 < 1) {
      auStack_108[0] = *(unsigned int *)(iVar2 + 0x18);
      *(int *)(iVar2 + 0xa0) = iVar4 + 1;
      FUN_00268250(3,0,iVar4 + 2,*(unsigned int *)(iVar2 + 0x14));
      uVar5 = 0xc;
    }
    else {
      cVar1 = *(char *)(iVar2 + 0xa4);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar2 + 0xa5);
      }
      if (!(bVar6 && cVar1 == '\0')) {
        FUN_0014374c();
        FUN_001a0380();
        FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),7);
        uVar5 = 0xe;
      }
      else {
        FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),6);
        uVar5 = 0xd;
      }
    }
    break;
  case 0xd:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),2);
    uVar5 = 8;
    break;
  case 0xe:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),8);
    uVar5 = 0xf;
    break;
  case 0xf:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),9);
    *(unsigned int *)(iVar2 + 8) = 0x10;
    FUN_001681cc(0x11c);
    return 0;
  case 0x10:
    FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    iVar4 = FUN_001656a0(0);
    if (iVar4 != 0) {
      FUN_002844e4();
      *(unsigned int *)(iVar2 + 8) = 0x11;
      FUN_001681cc(0xa0);
      uVar5 = 0x100020e;
    }
    else {
      iVar4 = FUN_001656a0(1);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_002844e4();
      *(unsigned int *)(iVar2 + 0xc) = 0xf;
      *(unsigned int *)(iVar2 + 0x10) = 8;
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),4);
      *(unsigned int *)(iVar2 + 8) = 7;
      FUN_001681cc(0xa0);
      uVar5 = 0x100020f;
    }
    FUN_00169ddc(uVar5);
    return 0;
  case 0x11:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    uVar5 = FUN_0014374c();
    iVar4 = FUN_00429e14(uVar5,0x19a2);
    if (iVar4 >= 0) {
      auStack_108[0] = 0x100;
      FUN_00268250(3,0,99,iVar2 + 0x1a6);
      uVar5 = 0x12;
    }
    else {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),10);
      uVar5 = 0x13;
    }
    break;
  case 0x12:
    iVar4 = FUN_00229c9c();
    if (iVar4 != 1) {
      return 0;
    }
    iVar4 = FUN_003332d8();
    if ((iVar4 != 0) || (iVar4 = FUN_0030ef8c(iVar2 + 0xa6,iVar2 + 0x1a6,0x100), iVar4 != 0)) {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),10);
      uVar5 = 0x13;
      break;
    }
    uVar5 = FUN_00371b10(99,0);
    FUN_002e342c(auStack_108,uVar5);
    FUN_0037aaec(0,auStack_108);
    FUN_0043ca60(0);
    *(unsigned int *)(iVar2 + 0xa0) = 0;
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0x13);
    uVar5 = 0x14;
    break;
  case 0x13:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),8);
    uVar5 = 0xf;
    break;
  case 0x14:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    goto joined_r0x00236f30;
  case 0x15:
    iVar4 = FUN_002a4b60();
    if (iVar4 != *(int *)(iVar2 + 0x9c)) {
      uVar5 = FUN_002a4b60();
      *(unsigned int *)(iVar2 + 0x9c) = uVar5;
      FUN_0021b4e0();
    }
    iVar4 = FUN_00224880(*(unsigned int *)(iVar2 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    uVar3 = messageGetChoiceResult();
    if (1 < uVar3) {
      *(unsigned int *)(iVar2 + 0x9c) = 0;
      *(unsigned int *)(iVar2 + 0xc) = 0x15;
      *(unsigned int *)(iVar2 + 0x10) = 0xb;
      func_0x002a4b88();
      FUN_0021b4e0(0);
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),4);
      *(unsigned int *)(iVar2 + 8) = 7;
      return 0;
    }
    *(unsigned int *)(iVar2 + 0xa0) = uVar3;
    if (*(char *)(uVar3 + iVar2 + 0xa4) != '\0') {
      FUN_00359974(0,uVar3 + 1,0xffffffff);
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0xc);
      uVar5 = 0x16;
    }
    else {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0x12);
      uVar5 = 0x17;
    }
    break;
  case 0x16:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) goto code_r0x00236f38;
    FUN_002e59f8(iVar2 + *(int *)(iVar2 + 0xa0) * 0x80 + 700,*(unsigned int *)(iVar2 + 0x14),0x80);
    auStack_108[0] = *(unsigned int *)(iVar2 + 0x18);
    FUN_00268250(2,0,0,*(unsigned int *)(iVar2 + 0x14));
    FUN_002684ac(1);
    FUN_00333574(1);
    uVar5 = 0x18;
    break;
  case 0x17:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
joined_r0x00236f30:
    if (iVar4 != 2) {
      return 0;
    }
code_r0x00236f38:
    FUN_003c1060();
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0xb);
    *(unsigned int *)(iVar2 + 8) = 0x15;
    *(unsigned int *)(iVar2 + 0x9c) = 0;
    func_0x002a4b88();
    FUN_0021b4e0(0);
    return 0;
  case 0x18:
    iVar4 = FUN_00229c9c();
    if (iVar4 != 1) {
      return 0;
    }
    iVar4 = FUN_003332d8();
    if (iVar4 != 0) {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0xe);
      *(unsigned int *)(iVar2 + 8) = 0x1b;
    }
    else {
      FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),0xf);
      *(unsigned int *)(iVar2 + 8) = 0x1b;
    }
    FUN_00137ea0(1);
    FUN_00138cf8(1);
    return 0;
  default:
    return 0;
  case 0x1b:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_0043cc44(0,0x300);
    uVar5 = 0x1c;
    break;
  case 0x1d:
    iVar4 = FUN_00224880(*(unsigned int *)(DAT_00589154 + 0x2b0));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    uVar5 = 0x1e;
    break;
  case 0x1e:
    iVar4 = FUN_002e07f4();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    *(unsigned int *)(iVar2 + 8) = 0x1f;
    FUN_001681cc(0xa1);
    FUN_003d2d34(0x1000001,0,0x3c);
    return 0;
  case 0x1f:
    iVar4 = FUN_002e07f4();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(iVar2 + 0x2b0),1);
    uVar5 = 0x20;
    break;
  case 0x20:
    return 0xffffffff;
  }
  *(unsigned int *)(iVar2 + 8) = uVar5;
  return 0;
}
*/
#include "common.h"
