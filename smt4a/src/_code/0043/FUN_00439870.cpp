/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439870` (_code @ 0x439870, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int rt_memcpy(unsigned int, int, int);
int software_interrupt(int);

extern int DAT_005c0a80; /* 0x5c0a80 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: rt_memcpy. */


int FUN_00439870(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x180000;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a80;
  if (-1 < DAT_005c0a80) {
    rt_memcpy(param_1,temp_v1 + 0x88,0x40);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
