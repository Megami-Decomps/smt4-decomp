/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015aa80` (_code @ 0x15aa80, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0015aa80(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10040;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if (-1 < DAT_005b4480) {
    *param_3 = *(unsigned int *)(temp_v1 + 0x88);
    *param_4 = *(unsigned int *)(temp_v1 + 0x8c);
    *param_1 = *(unsigned int *)(temp_v1 + 0x94);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
