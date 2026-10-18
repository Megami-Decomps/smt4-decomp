/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dsp_CTR_DSP_WriteProcessPipe` (_code @ 0x1a10d0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_dsp_CTR_DSP_WriteProcessPipe
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0xd0082;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x8c) = (param_4 << 0xe) | 0x402;
  *(unsigned int *)(temp_v1 + 0x90) = param_3;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
