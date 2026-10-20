/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00440328` (_code @ 0x440328, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00170082; /* 0x170082 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00440328(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &LAB_00170082;
  *(unsigned int *)(temp_v2 + 0x84) = param_3;
  *(int *)(temp_v2 + 0x88) = param_5;
  *(unsigned int *)(temp_v2 + 0x8c) = 0x20;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v1 + 0x184);
  *puVar4 = (param_5 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0x184) = param_4;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v4;
  if (-1 < temp_v0) {
    *param_2 = *(unsigned int *)(temp_v2 + 0x88);
    temp_v0 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
