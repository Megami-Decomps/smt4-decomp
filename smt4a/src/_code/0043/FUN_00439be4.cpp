/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439be4` (_code @ 0x439be4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00240282; /* 0x240282 */
extern int DAT_005c0a80; /* 0x5c0a80 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00439be4(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &LAB_00240282;
  temp_v0 = *param_2;
  temp_v3 = param_2[1];
  temp_v4 = param_2[2];
  temp_v5 = param_2[3];
  temp_v6 = param_2[4];
  *(unsigned int *)(temp_v2 + 0x98) = param_2[5];
  *(int *)(temp_v2 + 0xa8) = param_4;
  *(unsigned int *)(temp_v2 + 0x84) = temp_v0;
  *(unsigned int *)(temp_v2 + 0x88) = temp_v3;
  *(unsigned int *)(temp_v2 + 0x8c) = temp_v4;
  *(unsigned int *)(temp_v2 + 0x90) = temp_v5;
  *(unsigned int *)(temp_v2 + 0x94) = temp_v6;
  *(unsigned int *)(temp_v2 + 0xac) = (param_4 << 5) | 10;
  *(unsigned int *)(temp_v2 + 0xb0) = param_3;
  software_interrupt(0x32);
  temp_v1 = DAT_005c0a80;
  if (-1 < DAT_005c0a80) {
    temp_v0 = *(unsigned int *)(temp_v2 + 0x8c);
    *param_1 = *(unsigned int *)(temp_v2 + 0x88);
    param_1[1] = temp_v0;
    temp_v1 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v1;
}

} /* extern "C" */
