/* NON_MATCHING: found outside every function: branched to by FUN_004d95e8; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0010ac40 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0010ac40(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [12];
  unsigned char auStack_24 [20];
  
  iVar1 = FUN_002e6e26();
  FUN_002e6e34(auStack_30,iVar1 + 0x58);
  iVar1 = FUN_002e789a(param_2);
  if (iVar1 != 0) {
    *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_2 + 0x44);
    uVar2 = FUN_002ea3c0(auStack_24,0x10abad,0,0x10acb0);
    FUN_002ea3d0(param_1,uVar2);
    if (param_3 == 0) {
      FUN_002e75fa(param_1);
    }
    uVar2 = FUN_002e6e26();
    FUN_002e78d0(uVar2,param_1,0);
    FUN_002e6e5c(auStack_30);
    uVar2 = 1;
  }
  else {
    FUN_002e6e5c(auStack_30);
    uVar2 = 0;
  }
  return uVar2;
}
*/
#include "common.h"
