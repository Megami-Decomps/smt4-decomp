/* NON_MATCHING: reads the CP15 TLS register and issues SVC 0x32; no permitted platform wrappers expose the same request/result contract. */
/* romwright 0.5.0 decompilation of FUN_0014668c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0014668c(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(iVar2 + 0x80) = &LAB_00400042;
  *(unsigned int *)(iVar2 + 0x84) = param_1;
  *(unsigned int *)(iVar2 + 0x88) = 0x20;
  software_interrupt(0x32);
  uVar1 = DAT_005b4438;
  if ((DAT_005b4438 & 0x80000000) == 0) {
    uVar1 = *(unsigned int *)(iVar2 + 0x84);
  }
  return uVar1;
}
*/
#include "common.h"
