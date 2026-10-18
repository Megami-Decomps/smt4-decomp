/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fbf8` (_code @ 0x35fbf8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004719e8; /* 0x4719e8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c5ff4. */


int FUN_0035fbf8(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x180000;
  software_interrupt(0x32);
  temp_v0 = DAT_004719e8;
  if (-1 < DAT_004719e8) {
    FUN_002c5ff4(param_1,temp_v1 + 0x88,0x40);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
