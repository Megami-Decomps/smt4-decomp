/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356b3c` (_code @ 0x356b3c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00356b3c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x8510242;
  temp_v2 = *param_2;
  temp_v3 = param_2[1];
  *(unsigned int *)(temp_v1 + 0x8c) = param_2[2];
  *(unsigned int *)(temp_v1 + 0x94) = param_3;
  *(unsigned int *)(temp_v1 + 0x98) = param_4;
  *(unsigned int *)(temp_v1 + 0x9c) = param_5;
  *(unsigned int *)(temp_v1 + 0xa0) = param_6;
  *(int *)(temp_v1 + 0xa4) = param_8;
  *(unsigned int *)(temp_v1 + 0xa8) = (param_8 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0xac) = param_7;
  *(unsigned int *)(temp_v1 + 0x84) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x88) = temp_v3;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
