/* NON_MATCHING: found outside every function: branched to by FUN_00146ecc; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0016f15c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0016f15c(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(iVar2 + 0x80) = 0x60040;
  *(unsigned int *)(iVar2 + 0x84) = param_1;
  software_interrupt(0x32);
  uVar1 = DAT_005c14c0;
  if ((DAT_005c14c0 & 0x80000000) == 0) {
    uVar1 = *(unsigned int *)(iVar2 + 0x84);
  }
  return uVar1;
}
*/
#include "common.h"
