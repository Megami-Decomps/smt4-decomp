/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003520d8` (_code @ 0x3520d8, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472a58; /* 0x472a58 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_003520d8(unsigned int param_1,unsigned char param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10050084;
  *(unsigned char *)(temp_v1 + 0x84) = param_2;
  *(int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x8c) = (param_4 << 7) | 10;
  *(unsigned int *)(temp_v1 + 0x90) = param_3;
  *(unsigned int *)(temp_v1 + 0x98) = param_1;
  *(unsigned int *)(temp_v1 + 0x94) = (param_4 * 0x180) | 0xc;
  software_interrupt(0x32);
  temp_v0 = DAT_00472a58;
  if ((DAT_00472a58 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
