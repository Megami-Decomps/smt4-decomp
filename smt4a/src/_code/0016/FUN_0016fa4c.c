/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016fa4c` (_code @ 0x16fa4c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c0b18; /* 0x5c0b18 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a9110. */


int FUN_0016fa4c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x50100;
  FUN_001a9110(temp_v1 + 0x84);
  *(unsigned int *)(temp_v1 + 0x8c) = param_3;
  *(unsigned int *)(temp_v1 + 0x90) = param_4;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0b18;
  if (-1 < DAT_005c0b18) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x8c);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
