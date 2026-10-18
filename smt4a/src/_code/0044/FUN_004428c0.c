/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004428c0` (_code @ 0x4428c0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002a0204; /* 0x2a0204 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a90f0. */


unsigned int FUN_004428c0(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned char param_5,unsigned char param_6)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_002a0204;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = *param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_3[1];
  *(unsigned char *)(temp_v1 + 0x90) = *(unsigned char *)(param_3 + 2);
  FUN_001a90f0(temp_v1 + 0x94,param_4);
  *(unsigned char *)(temp_v1 + 0x9c) = param_5;
  *(unsigned char *)(temp_v1 + 0xa0) = param_6;
  *(unsigned int *)(temp_v1 + 0xa4) = 0x20;
  *(unsigned int *)(temp_v1 + 0xb0) = param_1;
  *(unsigned int *)(temp_v1 + 0xac) = 0;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a98;
  if ((DAT_005c0a98 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
