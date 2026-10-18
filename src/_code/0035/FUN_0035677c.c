/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035677c` (_code @ 0x35677c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0035677c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x8040142;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_4;
  *(unsigned int *)(temp_v1 + 0x90) = param_5;
  *(int *)(temp_v1 + 0x94) = param_7;
  *(unsigned int *)(temp_v1 + 0x98) = (param_7 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0x9c) = param_6;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
