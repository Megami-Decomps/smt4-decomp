/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_FormatSaveData` (_code @ 0x42be30, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_FormatSaveData
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
               unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
               unsigned int param_10,unsigned char param_11)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x84c0242;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(int *)(temp_v1 + 0x8c) = param_5;
  *(unsigned int *)(temp_v1 + 0x90) = param_6;
  *(unsigned int *)(temp_v1 + 0x94) = param_7;
  *(unsigned int *)(temp_v1 + 0x98) = param_8;
  *(unsigned int *)(temp_v1 + 0x9c) = param_9;
  *(unsigned int *)(temp_v1 + 0xa0) = param_10;
  *(unsigned char *)(temp_v1 + 0xa4) = param_11;
  *(unsigned int *)(temp_v1 + 0xa8) = (param_5 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0xac) = param_4;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
