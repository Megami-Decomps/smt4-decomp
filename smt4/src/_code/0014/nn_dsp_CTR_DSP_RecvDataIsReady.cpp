/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dsp_CTR_DSP_RecvDataIsReady` (_code @ 0x1468d4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_3: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_dsp_CTR_DSP_RecvDataIsReady(unsigned int *param_1,unsigned short param_2,unsigned char *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x20040;
  *(unsigned short *)(temp_v1 + 0x84) = param_2;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < (int)temp_v0) {
    *param_3 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
