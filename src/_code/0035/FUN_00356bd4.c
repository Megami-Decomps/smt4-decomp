/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356bd4` (_code @ 0x356bd4, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00356bd4(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                int param_9,unsigned int param_10,unsigned int param_11)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x80201c2;
  *(unsigned int *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x88) = param_5;
  *(unsigned int *)(temp_v1 + 0x8c) = param_6;
  *(unsigned int *)(temp_v1 + 0x90) = param_7;
  *(int *)(temp_v1 + 0x94) = param_9;
  *(unsigned int *)(temp_v1 + 0x98) = param_10;
  *(unsigned int *)(temp_v1 + 0x9c) = param_11;
  *(unsigned int *)(temp_v1 + 0xa0) = (param_9 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0xa4) = param_8;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_2 = *(unsigned int *)(temp_v1 + 0x8c);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
