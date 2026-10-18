/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_OpenFileDirectly` (_code @ 0x2b5b8c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void nn_fs_ipc_FileSystem_OpenFileDirectly
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
               unsigned int param_9,unsigned int param_10,unsigned int param_11,unsigned int param_12)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v0 + 0x80) = 0x8030204;
  *(unsigned int *)(temp_v0 + 0x8c) = param_5;
  *(unsigned int *)(temp_v0 + 0x90) = param_7;
  *(unsigned int *)(temp_v0 + 0x9c) = param_11;
  *(unsigned int *)(temp_v0 + 0x84) = param_3;
  *(unsigned int *)(temp_v0 + 0x88) = param_4;
  *(unsigned int *)(temp_v0 + 0x94) = param_8;
  *(unsigned int *)(temp_v0 + 0x98) = param_10;
  *(unsigned int *)(temp_v0 + 0xa0) = param_12;
  *(unsigned int **)(temp_v0 + 0xa4) = (unsigned int *)(temp_v0 + 0x80);
  *(unsigned int *)(temp_v0 + 0xa8) = param_4;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = param_5;
  *(unsigned int *)(temp_v0 + 0xb4) = param_8;
  *(unsigned int *)(temp_v0 + 0xb8) = param_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
