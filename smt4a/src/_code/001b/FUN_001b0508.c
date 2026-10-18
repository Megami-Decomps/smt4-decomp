/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0508` (_code @ 0x1b0508, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00400042; /* 0x400042 */
extern unsigned int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_001b0508(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00400042;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x8c) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = (param_2 << 0xe) | 2;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if ((DAT_005b4480 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
