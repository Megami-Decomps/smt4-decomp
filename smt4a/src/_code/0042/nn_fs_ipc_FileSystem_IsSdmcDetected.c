/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_IsSdmcDetected` (_code @ 0x42be88, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_fs_ipc_FileSystem_IsSdmcDetected(unsigned int *param_1,unsigned char *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x8170000;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < (int)temp_v0) {
    *param_2 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
