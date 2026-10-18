/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015aadc` (_code @ 0x15aadc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002c0044; /* 0x2c0044 */
extern unsigned int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0015aadc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_002c0044;
  *(unsigned int *)(temp_v1 + 0x8c) = param_3;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = 0;
  *(unsigned int *)(temp_v1 + 0x94) = param_1;
  *(unsigned int *)(temp_v1 + 0x90) = (param_2 << 0xe) | 2;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if ((DAT_005b4480 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
