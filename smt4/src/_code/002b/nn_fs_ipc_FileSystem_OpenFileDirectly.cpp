/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_ipc_FileSystem_OpenFileDirectly` (_code @ 0x2b5b8c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_12: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
} param_12_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int nn_fs_ipc_FileSystem_OpenFileDirectly
              (int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
              unsigned int param_5,unsigned int param_6,int param_7,unsigned int param_8,
              unsigned int param_9,int param_10,unsigned int param_11,unsigned int param_12)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x8030204;
  *(unsigned int *)(temp_v1 + 0x8c) = param_5;
  *(int *)(temp_v1 + 0x90) = param_7;
  *(unsigned int *)(temp_v1 + 0x9c) = param_11;
  *(unsigned int *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x94) = param_8;
  *(int *)(temp_v1 + 0x98) = param_10;
  *(unsigned int *)(temp_v1 + 0xa0) = param_12;
  *(unsigned int *)(temp_v1 + 0xa4) = (param_7 << 0xe) | 0x802;
  *(unsigned int *)(temp_v1 + 0xa8) = param_6;
  *(unsigned int *)(temp_v1 + 0xac) = (param_10 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0xb0) = param_9;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_2 = *(unsigned int *)(temp_v1 + 0x8c);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
