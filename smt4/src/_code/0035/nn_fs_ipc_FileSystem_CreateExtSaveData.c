/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_CreateExtSaveData` (_code @ 0x35692c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_CreateExtSaveData
               (unsigned int *param_1,int param_2,unsigned long long param_3,unsigned int param_4,unsigned int param_5,
               unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x8510242;
  temp_v2 = *(unsigned int *)param_2;
  temp_v3 = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(temp_v1 + 0x8c) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(temp_v1 + 0x94) = param_4;
  *(unsigned int *)(temp_v1 + 0x98) = param_5;
  *(unsigned long long *)(temp_v1 + 0x9c) = param_3;
  *(unsigned int *)(temp_v1 + 0xa4) = param_7;
  *(unsigned int *)(temp_v1 + 0xa8) = (param_7 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0xac) = param_6;
  *(unsigned int *)(temp_v1 + 0x84) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x88) = temp_v3;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
