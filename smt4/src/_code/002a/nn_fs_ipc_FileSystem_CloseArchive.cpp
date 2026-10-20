/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_CloseArchive` (_code @ 0x2ad8c8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_CloseArchive(unsigned int *param_1,unsigned long long param_2)

{
/* irregular: irregular input(s): in_r2, in_r3; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_r2;
  unsigned int in_r3;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x80e0080;
  *(unsigned int *)(temp_v1 + 0x84) = in_r2;
  *(unsigned int *)(temp_v1 + 0x88) = in_r3;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
