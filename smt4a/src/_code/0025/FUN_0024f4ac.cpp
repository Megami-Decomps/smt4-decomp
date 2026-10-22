/* NON_MATCHING: complete 0xd334-byte camp/menu controller now establishes its own frame, but the retained draft only covers an old interior input-dispatch fragment with inherited registers; the repaired full body requires fresh reconstruction. */
/* romwright 0.5.0 decompilation of FUN_0024f4ac for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

unsigned int FUN_0024f4ac(void)

{
  unsigned short uVar1;
  short sVar2;
  short sVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  unsigned char bVar7;
  int in_stack_00000008;
  unsigned short uStack0000000c;
  short sStack0000000e;
  unsigned int in_stack_00000010;
  unsigned int in_stack_00000014;
  unsigned char uStack00000018;
  unsigned short uStack0000001a;
  unsigned short uStack0000001c;
  unsigned short uStack0000001e;
  unsigned short in_stack_00000020;
  
  if (DAT_005f18c5 != '\0') {
    *(unsigned char *)(unaff_r6 + 0x2c9) = 0;
    uVar4 = 1;
  }
  else if (*(char *)(unaff_r4 + 0xd) != '\0') {
    DAT_005f1a50 = 0xffffffff;
    iVar5 = FUN_004186e0();
    if ((iVar5 != 0) && (iVar6 = FUN_001bd118(), iVar6 == 6)) {
      FUN_001ad9b4();
      FUN_00270c58(*(unsigned short *)(iVar5 + 0xd4));
      return 0xffffffff;
    }
    uStack0000000c = (unsigned short)_uStack0000000c & 0xff00;
    _uStack0000000c = CONCAT22(0xffff,uStack0000000c);
    uStack00000018 = 0;
    uStack0000001c = 0;
    in_stack_00000010 = 0xffffffff;
    in_stack_00000014 = 0xffffffff;
    uStack0000001a = 0;
    uStack0000001e = 0;
    in_stack_00000020 = 0;
    FUN_00398328(*(unsigned int *)(unaff_r4 + 0x30),*(unsigned int *)(unaff_r4 + 0x34));
    _uStack0000000c = _uStack0000000c & 0xffffff00;
    uVar1 = func_0x003847c4();
    _uStack0000000c = CONCAT22(uVar1,uStack0000000c);
    iVar5 = func_0x002cfffc();
    if (iVar5 != 0) {
      iVar5 = func_0x003b9934();
      if (iVar5 == 0) {
        iVar5 = func_0x002d0014();
        if ((iVar5 == 0) && (iVar5 = func_0x0029224c(), iVar5 != 0)) {
          if (DAT_005f1abc != '\0') {
            uStack0000001e = 2;
            FUN_002bd910();
            DAT_005f1abc = '\0';
          }
          else {
            FUN_002bd910();
            uStack0000001e = 1;
          }
        }
        else {
          uStack0000001e = 2;
          FUN_002bd910();
        }
      }
      else {
        FUN_002bd910();
        uStack0000001e = 1;
      }
    }
    else {
      uStack0000001e = 0;
      iVar5 = FUN_0018719c(0x4c9);
      if ((iVar5 != 0) && (iVar5 = FUN_0018719c(0x4db), iVar5 != 0)) {
        uStack0000001e = 1;
      }
    }
    DAT_005f1acc = 0;
    DAT_005f1ad0 = 0;
    if (*(char *)(unaff_r6 + 0x27) != '\0') {
      iVar5 = FUN_00376f94();
      if (iVar5 != 0) {
        iVar5 = FUN_00376f94();
        if (iVar5 < 0x65) {
          uStack0000001a = 1;
          uStack0000001c = 0xb;
        }
      }
      else {
        uStack0000001a = 1;
        uStack0000001c = 7;
      }
    }
    if (DAT_005f17cb != '\0') {
      uStack0000001a = _DAT_005f17cc;
      uStack0000001c = _DAT_005f17ce;
    }
    if (DAT_005f17c8 != '\0') {
      uStack00000018 = 1;
    }
    else if (DAT_005f17ca == '\0') {
      uStack00000018 = 0;
    }
    else {
      uStack00000018 = 2;
    }
    iVar5 = FUN_003e46f4(0x81);
    if ((iVar5 != 0) && (iVar5 = FUN_0014bef4(99), iVar5 + 1 < 0x47)) {
      uStack00000018 = 2;
    }
    if (sStack0000000e != 0) {
      _uStack0000000c = CONCAT31(stack0x0000000d,1);
      FUN_003847d4(0);
LAB_0025c4e0:
      if (*(char *)(unaff_r6 + 0x27) != '\0') {
        sVar3 = (short)*(char *)(unaff_r5 + 0x3a);
        sVar2 = (short)*(char *)(unaff_r5 + 0x3b);
      }
      else {
        sVar3 = (short)*(unsigned int *)(unaff_r4 + 0x30);
        sVar2 = (short)*(unsigned int *)(unaff_r4 + 0x34);
      }
    }
    else {
      sVar3 = FUN_00376f84();
      _uStack0000000c = CONCAT22(sVar3,uStack0000000c);
      if (sVar3 != 0) {
        uVar1 = FUN_00376f84();
        _uStack0000000c = CONCAT22(uVar1,uStack0000000c);
        _uStack0000000c = CONCAT31(stack0x0000000d,1);
        FUN_00376fa4(0);
        goto LAB_0025c4e0;
      }
      _uStack0000000c = CONCAT22((short)*(unsigned int *)(unaff_r4 + 0xb4),uStack0000000c);
      bVar7 = *(char *)(unaff_r6 + 0x27) != '\0';
      if (bVar7) {
        uVar4 = 3;
      }
      else {
        uVar4 = 1;
      }
      *(unsigned int *)(unaff_r6 + 0x2c4) = uVar4;
      if (bVar7) {
        sVar3 = (short)*(char *)(unaff_r5 + 0x3a);
        sVar2 = (short)*(char *)(unaff_r5 + 0x3b);
      }
      else {
        sVar3 = (short)*(unsigned int *)(unaff_r4 + 0x30);
        sVar2 = (short)*(unsigned int *)(unaff_r4 + 0x34);
      }
    }
    in_stack_00000014 = CONCAT22(sVar2,sVar3);
    uVar4 = 5;
  }
  else if (*(char *)(unaff_r4 + 0xe) != '\0') {
    uVar4 = 10;
  }
  else if (*(char *)(unaff_r4 + 0xf) != '\0') {
    uVar4 = 10;
  }
  else if (*(char *)(unaff_r4 + 0x10) != '\0') {
    uVar4 = 0xd;
  }
  else if (*(char *)(unaff_r4 + 0x1e) != '\0') {
    uVar4 = 0x1a;
  }
  else if (*(char *)(unaff_r4 + 0x11) != '\0') {
    in_stack_00000008 = *(unsigned int *)(unaff_r6 + 0xac);
    _uStack0000000c = *(unsigned int *)(unaff_r6 + 0xa4);
    uVar4 = 0x18;
  }
  else if (*(char *)(unaff_r4 + 0x12) != '\0') {
    FUN_003fd63c(0x594,1);
    uVar4 = 0x14;
  }
  else if (*(char *)(unaff_r4 + 0x13) != '\0') {
    _uStack0000000c = *(unsigned int *)(unaff_r4 + 0x3c);
    in_stack_00000010 = 0;
    in_stack_00000014 = 0;
    uVar4 = 0x10;
  }
  else {
    if (*(char *)(unaff_r4 + 0x14) == '\0') {
      if (*(char *)(unaff_r4 + 0x15) != '\0') {
        uVar4 = 0x12;
        FUN_00137ee0(uVar4);
        return 0xffffffff;
      }
      if (*(char *)(unaff_r4 + 0x16) == '\0') {
        if (DAT_005f1c98 >= 200) {
          uVar4 = 0xe;
        }
        else {
          if (DAT_005f1c98 == -1) {
            FUN_001631d0(*DAT_00581274,0);
            return 0xffffffff;
          }
          if (DAT_005f1c98 < 100) {
            uVar4 = 6;
          }
          else {
            uVar4 = 8;
          }
        }
        FUN_00137ee0(uVar4);
        return 0xffffffff;
      }
    }
    FUN_002e342c(&in_stack_00000008,unaff_r6 + 100);
    uVar4 = 4;
  }
  FUN_00137ee0(uVar4);
  return 0xffffffff;
}
*/
#include "common.h"
