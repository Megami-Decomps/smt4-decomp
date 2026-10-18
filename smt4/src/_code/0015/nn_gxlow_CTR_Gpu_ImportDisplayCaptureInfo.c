/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo` (_code @ 0x153a34, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int nn_gxlow_CTR_Gpu_ImportDisplayCaptureInfo(int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v4 + 0x80) = 0x180000;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    temp_v1 = *(unsigned int *)(temp_v4 + 0x88);
    temp_v2 = *(unsigned int *)(temp_v4 + 0x8c);
    temp_v3 = *(unsigned int *)(temp_v4 + 0x90);
    temp_v8 = *(unsigned int *)(temp_v4 + 0x94);
    temp_v5 = *(unsigned int *)(temp_v4 + 0x98);
    temp_v6 = *(unsigned int *)(temp_v4 + 0x9c);
    temp_v7 = *(unsigned int *)(temp_v4 + 0xa0);
    param_2[7] = *(unsigned int *)(temp_v4 + 0xa4);
    *param_2 = temp_v1;
    param_2[1] = temp_v2;
    param_2[2] = temp_v3;
    param_2[3] = temp_v8;
    param_2[4] = temp_v5;
    param_2[5] = temp_v6;
    param_2[6] = temp_v7;
    temp_v0 = *(int *)(temp_v4 + 0x84);
  }
  return temp_v0;
}
