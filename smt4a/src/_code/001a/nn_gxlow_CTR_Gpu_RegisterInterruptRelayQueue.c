/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue` (_code @ 0x1a29ec, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00130042; /* 0x130042 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue
              (int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
              unsigned int *param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00130042;
  *(unsigned int *)(temp_v1 + 0x8c) = param_2;
  *(unsigned int *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x88) = 0;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_5 = *(unsigned int *)(temp_v1 + 0x88);
    *param_4 = *(unsigned int *)(temp_v1 + 0x90);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
