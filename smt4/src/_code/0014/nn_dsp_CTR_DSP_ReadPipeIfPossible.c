/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dsp_CTR_DSP_ReadPipeIfPossible` (_code @ 0x14f648, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001000c0; /* 0x1000c0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int nn_dsp_CTR_DSP_ReadPipeIfPossible
               (unsigned int *param_1,int param_2,int param_3,unsigned char *param_4,unsigned short param_5,unsigned short *param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &LAB_001000c0;
  *(int *)(temp_v2 + 0x84) = param_2;
  *(int *)(temp_v2 + 0x88) = param_3;
  *(unsigned short *)(temp_v2 + 0x8c) = param_5;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v1 + 0x184);
  *puVar4 = ((unsigned int)param_5 << 0xe) | 2;
  *(unsigned char **)(temp_v1 + 0x184) = param_4;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v4;
  if (-1 < (int)temp_v0) {
    *param_6 = *(unsigned short *)(temp_v2 + 0x88);
    temp_v0 = *(unsigned int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}
