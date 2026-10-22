/* NON_MATCHING: found outside every function: branched to by gxGetCommandListParameter; not written yet. */
/* romwright 0.5.0 decompilation of gpuReadHardwareRegisters for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0018b07c(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  puVar1 = (unsigned int *)FUN_001a2a5c();
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(iVar5 + 0x80) = 0x40080;
  *(unsigned int *)(iVar5 + 0x84) = param_1;
  *(int *)(iVar5 + 0x88) = param_3;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(iVar3 + 0x180);
  uVar6 = *puVar4;
  uVar7 = *(unsigned int *)(iVar3 + 0x184);
  *puVar4 = (param_3 << 0xe) | 2;
  *(unsigned int *)(iVar3 + 0x184) = param_2;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  *puVar4 = uVar6;
  *(unsigned int *)(iVar3 + 0x184) = uVar7;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(unsigned int *)(iVar5 + 0x84);
  }
  return uVar2;
}
*/
#include "common.h"
