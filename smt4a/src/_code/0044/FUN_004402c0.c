/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004402c0` (_code @ 0x4402c0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00120104; /* 0x120104 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_004402c0(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00120104;
  *(unsigned int *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x94) = 0x20;
  *(unsigned int *)(temp_v1 + 0x8c) = param_5;
  *(int *)(temp_v1 + 0x90) = param_7;
  *(unsigned int *)(temp_v1 + 0x9c) = (param_7 << 0xe) | 0x2402;
  *(unsigned int *)(temp_v1 + 0xa0) = param_6;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_2 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
