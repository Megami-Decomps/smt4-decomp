/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352064` (_code @ 0x352064, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00240042; /* 0x240042 */
extern unsigned int DAT_004655f8; /* 0x4655f8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00352064(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v3 + 0x80) = &LAB_00240042;
  *(unsigned int *)(temp_v3 + 0x84) = param_3;
  *(unsigned int *)(temp_v3 + 0x8c) = param_1;
  *(unsigned int *)(temp_v3 + 0x88) = 0x800002;
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  temp_v4 = *(unsigned int *)(temp_v0 + 0x180);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned int *)(temp_v0 + 0x180) = 0x800002;
  *(unsigned int *)(temp_v0 + 0x184) = param_2;
  temp_v1 = DAT_004655f8;
  software_interrupt(0x32);
  temp_v2 = DAT_004655f8 & 0x80000000;
  *(unsigned int *)(temp_v0 + 0x180) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v5;
  if (temp_v2 == 0) {
    temp_v1 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v1;
}
