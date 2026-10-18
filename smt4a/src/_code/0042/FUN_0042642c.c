/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042642c` (_code @ 0x42642c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003e0042; /* 0x3e0042 */
extern int DAT_005b4438; /* 0x5b4438 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0042642c(unsigned int param_1,unsigned char *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_003e0042;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = 0x20;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4438;
  if (-1 < DAT_005b4438) {
    *param_2 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
