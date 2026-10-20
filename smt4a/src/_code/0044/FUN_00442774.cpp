/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442774` (_code @ 0x442774, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00442774(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v4 + 0x80) = 0x50000;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a98;
  if (-1 < DAT_005c0a98) {
    temp_v1 = *(unsigned int *)(temp_v4 + 0x88);
    temp_v2 = *(unsigned int *)(temp_v4 + 0x8c);
    temp_v3 = *(unsigned int *)(temp_v4 + 0x90);
    param_1[3] = *(unsigned int *)(temp_v4 + 0x94);
    *param_1 = temp_v1;
    param_1[1] = temp_v2;
    param_1[2] = temp_v3;
    temp_v0 = *(int *)(temp_v4 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
