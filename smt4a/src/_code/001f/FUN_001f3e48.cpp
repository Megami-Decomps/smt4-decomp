/* NON_MATCHING: found outside every function: its address is in FUN_0050e68c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001f3e48 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

unsigned int FUN_001f3e48(void)

{
  int iVar1;
  unsigned int uVar2;
  code *pcVar3;
  int unaff_r4;
  unsigned int in_stack_00000000;
  
  pcVar3 = FUN_0043a2f4;
  _DAT_006463d0 = &DAT_006463d0;
  iVar1 = *(int *)(unaff_r4 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
    }
    else {
      iVar1 = DAT_00573808;
      FUN_004f6d34(DAT_00573808,pcVar3);
      if (iVar1 == 0) {
        return 0;
      }
      *(unsigned int *)(unaff_r4 + 0x10) = 2;
    }
  }
  else {
    FUN_004f7b84(DAT_00573808,"Dead_eyes",0xc,0x10);
    pcVar3 = (code *)(unaff_r4 + 0x10);
    *(unsigned int *)pcVar3 = 1;
    *(unsigned int *)(unaff_r4 + 0x14) = 0;
    iVar1 = DAT_00573808;
    FUN_004f6d34(DAT_00573808,pcVar3);
    if (iVar1 == 0) {
      return 0;
    }
    *(unsigned int *)(unaff_r4 + 0x10) = 2;
  }
  if (*(int *)(unaff_r4 + 0x14) == DAT_0057a684) {
    FUN_004fdcd8(0,0,0,0,7,0,0xb,0);
    FUN_004ab854(DAT_0057a9c8);
  }
  if (*(int *)(unaff_r4 + 0x14) == DAT_0057a698) {
    FUN_004fddf4(0,0,DAT_0057a69c,0x10,0,DAT_0057a6a0,0,2,0xffffffff,in_stack_00000000);
  }
  if (((*(int *)(unaff_r4 + 0x14) == DAT_0057a688) && (iVar1 = FUN_0013def0(0), iVar1 != 1)) &&
     (iVar1 = FUN_0013def0(0), iVar1 != 3)) {
    FUN_001f4908(0,DAT_0057a68c,0xff);
  }
  if (((*(int *)(unaff_r4 + 0x14) == DAT_0057a690) && (iVar1 = FUN_0013def0(1), iVar1 != 1)) &&
     (iVar1 = FUN_0013def0(1), iVar1 != 3)) {
    FUN_001f4908(1,DAT_0057a694,0xff);
  }
  if (DAT_0057a6a4 < *(int *)(unaff_r4 + 0x14)) {
    uVar2 = FUN_0014aa78();
    FUN_003f14a0();
    FUN_00321744();
    FUN_002fe2ac(uVar2);
    FUN_002ce874(uVar2);
    FUN_00290ba4(uVar2);
    if (DAT_00571508 != 0) {
      FUN_003d9164();
    }
    if (*(char *)(unaff_r4 + 8) == '\x02') {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
    *(unsigned int *)(unaff_r4 + 0xc) = uVar2;
    *(unsigned int *)(unaff_r4 + 0x10) = 0;
  }
  *(int *)(unaff_r4 + 0x14) = *(int *)(unaff_r4 + 0x14) + 1;
  return 0;
}
*/
#include "common.h"
