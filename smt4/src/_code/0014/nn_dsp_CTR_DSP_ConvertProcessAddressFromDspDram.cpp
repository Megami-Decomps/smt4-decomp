/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dsp_CTR_DSP_ConvertProcessAddressFromDspDram` (_code @ 0x14f6b0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_dsp_CTR_DSP_ConvertProcessAddressFromDspDram(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0xc0040;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < (int)temp_v0) {
    *param_3 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
