/* NON_MATCHING: fragment of a larger function (fragment; ARM-to-Thumb entry veneer transfers to the unsupplied Thumb body immediately after these eight bytes.). */
/* romwright 0.5.0 decompilation of FUN_00122a60 for reference (not compiled; its own view of the boundaries):

int FUN_00122a60(void)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int aiStack_28 [2];
  unsigned char auStack_20 [8];
  unsigned int auStack_18 [3];
  
  puVar1 = (unsigned int *)FUN_0010390c();
  *puVar1 = &DAT_0055b300;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 200;
  auStack_18[0] = 0x10001;
  iVar2 = _ZN12OnlineResultC1ERKj(puVar1 + 0x4c,auStack_18);
  *(unsigned int *)(iVar2 + 0xc) = 0;
  *(unsigned char *)(iVar2 + 0x10) = 0;
  *(unsigned char *)(iVar2 + 0x11) = 0;
  *(unsigned char *)(iVar2 + 0x12) = 0;
  iVar2 = FUN_002ea2a8(iVar2 + 0x14,0);
  iVar5 = iVar2 - 0x144;
  uVar3 = FUN_002ea704();
  FUN_0010a0c4(uVar3,0);
  aiStack_28[0] = iVar5;
  FUN_0010d128(iVar5,&LAB_00122799,aiStack_28);
  iVar4 = FUN_002e760a(0x1c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = FUN_002ea268();
  }
  uVar3 = FUN_002ea2a8(auStack_20,uVar3);
  FUN_002ea2b4(iVar2,uVar3);
  FUN_002ea2d2(auStack_20);
  iVar4 = FUN_002e760a(8);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = FUN_00105ccc(iVar4,iVar5);
  }
  *(unsigned int *)(iVar2 - 0x20) = uVar3;
  return iVar5;
}
*/
#include "common.h"
