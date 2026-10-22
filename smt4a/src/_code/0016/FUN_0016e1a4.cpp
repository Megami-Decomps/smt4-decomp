/* NON_MATCHING: found outside every function: its address is in FUN_0016e144's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0016e1a4 for reference (not compiled; its own view of the boundaries):

void FUN_0016e1a4(void)

{
  int *piVar1;
  int iVar2;
  unsigned long long uVar3;
  unsigned char auStack_1c [8];
  
  uVar3 = FUN_00195fc4();
  piVar1 = (int *)uVar3;
  iVar2 = (**(code **)(*piVar1 + 8))(piVar1,*(code **)(*piVar1 + 8),0,0,0);
  if (iVar2 < 0) {
    if ((piVar1[2] & 0xfffffffeU) != 0) {
      if ((piVar1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(piVar1[2] & 0xfffffffe);
      piVar1[2] = 0;
    }
    if (iVar2 < 0) {
      FUN_0016e7c0(iVar2,0x16e214);
    }
  }
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,auStack_1c,(int)((unsigned long long)uVar3 >> 0x20),0x14,1);
  if (iVar2 < 0) {
    if ((piVar1[2] & 0xfffffffeU) != 0) {
      if ((piVar1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(piVar1[2] & 0xfffffffe);
      piVar1[2] = 0;
    }
    if (iVar2 < 0) {
      FUN_0016e7c0(iVar2,0x16e278);
    }
  }
  if ((piVar1[2] & 0xfffffffeU) != 0) {
    if ((piVar1[2] & 1U) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(piVar1[2] & 0xfffffffe);
    piVar1[2] = 0;
  }
  return;
}
*/
#include "common.h"
