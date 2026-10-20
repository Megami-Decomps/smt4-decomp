/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426a1c` (_code @ 0x426a1c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_005c149c; /* 0x5c149c */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00426a1c(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10070102;
  *(int *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x88) = param_5;
  *(unsigned int *)(temp_v1 + 0x8c) = param_6;
  *(unsigned int *)(temp_v1 + 0x90) = param_7;
  *(unsigned int *)(temp_v1 + 0x94) = (param_3 * 0x180) | 0xc;
  *(unsigned int *)(temp_v1 + 0x98) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_005c149c;
  if (-1 < DAT_005c149c) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
