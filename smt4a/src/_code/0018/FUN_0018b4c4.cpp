/* NON_MATCHING: found outside every function: branched to by FUN_001713a0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0018b4c4 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0018b4c4(void)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  iVar1 = FUN_001a2480();
  if (iVar1 != 0) {
    puVar2 = (unsigned int *)FUN_001a2a5c(iVar1);
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned char **)(iVar1 + 0x80) = &LAB_001a0000;
    uVar3 = *puVar2;
    software_interrupt(0x32);
    if ((uVar3 & 0x80000000) == 0) {
      uVar3 = *(unsigned int *)(iVar1 + 0x84);
    }
    return uVar3;
  }
  return 0x202bf8;
}
*/
#include "common.h"
