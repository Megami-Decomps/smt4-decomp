/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d694` (_code @ 0x11d694, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0011d694(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10040;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_004656b0;
  if (-1 < DAT_004656b0) {
    *param_3 = *(unsigned int *)(temp_v1 + 0x88);
    *param_4 = *(unsigned int *)(temp_v1 + 0x8c);
    *param_1 = *(unsigned int *)(temp_v1 + 0x94);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
