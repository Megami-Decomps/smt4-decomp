/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043ab80` (_code @ 0x43ab80, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00280000(); /* 0x280000 */
extern int DAT_005c0b4c; /* 0x5c0b4c */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0043ab80(unsigned char *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(romwright_code **)(temp_v1 + 0x80) = FUN_00280000;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0b4c;
  if (-1 < DAT_005c0b4c) {
    *param_1 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
