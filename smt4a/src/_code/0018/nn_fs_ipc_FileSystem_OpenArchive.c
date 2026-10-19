/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_OpenArchive` (_code @ 0x188558, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_OpenArchive
               (unsigned int *param_1,unsigned long long *param_2,unsigned int param_3,unsigned int param_4,unsigned char *param_5,
               unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x80c00c2;
  *(unsigned int *)(temp_v2 + 0x8c) = param_6;
  *(unsigned int *)(temp_v2 + 0x90) = (param_6 << 0xe) | 2;
  *(unsigned char **)(temp_v2 + 0x94) = param_5;
  *(unsigned int *)(temp_v2 + 0x84) = param_3;
  *(unsigned int *)(temp_v2 + 0x88) = param_4;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < (int)temp_v0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x8c);
    *(unsigned int *)param_2 = *(unsigned int *)(temp_v2 + 0x88);
    *(unsigned int *)((int)param_2 + 4) = temp_v1;
    temp_v0 = *(unsigned int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}
