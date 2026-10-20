/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00440500` (_code @ 0x440500, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_001a00c0; /* 0x1a00c0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00440500(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,int *param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &LAB_001a00c0;
  *(unsigned int *)(temp_v2 + 0x84) = param_3;
  *(unsigned int *)(temp_v2 + 0x88) = param_4;
  *(int *)(temp_v2 + 0x8c) = *param_6;
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v0 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v0 + 0x184);
  temp_v1 = *param_6;
  *(unsigned int *)(temp_v0 + 0x184) = param_5;
  *puVar4 = (temp_v1 << 0xe) | 2;
  temp_v1 = *param_1;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v4;
  if (-1 < temp_v1) {
    *param_2 = *(unsigned int *)(temp_v2 + 0x88);
    *param_6 = *(int *)(temp_v2 + 0x8c);
    temp_v1 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v1;
}

} /* extern "C" */
