/* NON_MATCHING: found outside every function: branched to by FUN_0012a708; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0013b43c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0013b43c(void)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  iVar1 = FUN_002ad254();
  if (iVar1 != 0) {
    puVar2 = (unsigned int *)FUN_002ad264(iVar1);
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
