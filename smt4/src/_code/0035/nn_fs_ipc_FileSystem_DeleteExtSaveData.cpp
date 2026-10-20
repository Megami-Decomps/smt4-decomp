/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_DeleteExtSaveData` (_code @ 0x356988, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_DeleteExtSaveData(unsigned int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v3 + 0x80) = 0x8520100;
  temp_v1 = *(unsigned int *)param_2;
  temp_v2 = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(temp_v3 + 0x8c) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(temp_v3 + 0x84) = temp_v1;
  *(unsigned int *)(temp_v3 + 0x88) = temp_v2;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
