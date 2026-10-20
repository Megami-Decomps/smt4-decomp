/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003598d0` (_code @ 0x3598d0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned int DAT_0047384c; /* 0x47384c */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_003598d0(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0xa00c4;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(int *)(temp_v1 + 0x8c) = param_5;
  *(unsigned int *)(temp_v1 + 0x90) = (param_5 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0x94) = param_4;
  *(unsigned int *)(temp_v1 + 0x9c) = param_1;
  *(unsigned int *)(temp_v1 + 0x98) = (param_2 << 4) | 0xc;
  software_interrupt(0x32);
  temp_v0 = DAT_0047384c;
  if ((DAT_0047384c & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
