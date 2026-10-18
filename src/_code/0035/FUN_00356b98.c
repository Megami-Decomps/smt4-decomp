/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356b98` (_code @ 0x356b98, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00356b98(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v3 + 0x80) = 0x8520100;
  temp_v1 = *param_2;
  temp_v2 = param_2[1];
  *(unsigned int *)(temp_v3 + 0x8c) = param_2[2];
  *(unsigned int *)(temp_v3 + 0x84) = temp_v1;
  *(unsigned int *)(temp_v3 + 0x88) = temp_v2;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v0;
}
