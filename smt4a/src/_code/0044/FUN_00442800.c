/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442800` (_code @ 0x442800, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00320042; /* 0x320042 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00442800(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00320042;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = 0x20;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a98;
  if ((DAT_005c0a98 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
