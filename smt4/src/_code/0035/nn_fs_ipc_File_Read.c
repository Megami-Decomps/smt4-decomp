/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_File_Read` (_code @ 0x356aa0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_File_Read(unsigned int *param_1,int *param_2,long long param_3,unsigned int param_4,unsigned int param_5
                        )

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x80200c2;
  *(unsigned int *)(temp_v1 + 0x84) = param_4;
  *(unsigned int *)(temp_v1 + 0x88) = param_5;
  *(int *)(temp_v1 + 0x8c) = (*(unsigned int *)((unsigned char *)&param_3 + 4));
  *(unsigned int *)(temp_v1 + 0x94) = (unsigned int)param_3;
  *(unsigned int *)(temp_v1 + 0x90) = ((*(unsigned int *)((unsigned char *)&param_3 + 4)) << 4) | 0xc;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < (int)temp_v0) {
    *param_2 = *(int *)(temp_v1 + 0x88);
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
