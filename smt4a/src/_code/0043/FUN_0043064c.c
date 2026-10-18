/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043064c` (_code @ 0x43064c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0043064c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x100c2;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = param_2;
  *(unsigned int *)(temp_v1 + 0x8c) = param_3;
  *(unsigned int *)(temp_v1 + 0x90) = 0x20;
  software_interrupt(0x32);
  temp_v0 = DAT_005c1fc8;
  if (-1 < DAT_005c1fc8) {
    *param_4 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
