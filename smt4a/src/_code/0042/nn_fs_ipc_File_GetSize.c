/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_File_GetSize` (_code @ 0x42c1bc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int nn_fs_ipc_File_GetSize(int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x8040000;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x8c);
    *param_2 = *(unsigned int *)(temp_v2 + 0x88);
    param_2[1] = temp_v1;
    temp_v0 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}
