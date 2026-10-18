/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00440814` (_code @ 0x440814, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00440814(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,int param_5,
                unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x90106;
  *(unsigned int *)(temp_v1 + 0x8c) = param_6;
  *(unsigned int *)(temp_v1 + 0x84) = param_3;
  *(int *)(temp_v1 + 0x88) = param_5;
  *(int *)(temp_v1 + 0x90) = param_8;
  *(unsigned int *)(temp_v1 + 0x94) = 0x20;
  *(unsigned int *)(temp_v1 + 0x9c) = (param_8 << 0xe) | 0x402;
  *(unsigned int *)(temp_v1 + 0xa0) = param_7;
  *(unsigned int *)(temp_v1 + 0xa4) = (param_5 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0xa8) = param_4;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_2 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
