/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f95c` (_code @ 0x35f95c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00120106; /* 0x120106 */
extern int DAT_004719e8; /* 0x4719e8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0035f95c(unsigned int param_1,int param_2,unsigned int param_3,int param_4,unsigned int *param_5,
                unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00120106;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x8c) = param_6;
  *(int *)(temp_v1 + 0x90) = param_8;
  *(unsigned int *)(temp_v1 + 0x94) = (param_2 << 0xe) | 0xc02;
  *(unsigned int *)(temp_v1 + 0x98) = param_1;
  *(unsigned int *)(temp_v1 + 0x9c) = (param_4 << 0x14) | 0x402;
  *(unsigned int *)(temp_v1 + 0xa0) = param_3;
  *(unsigned int *)(temp_v1 + 0xa4) = (param_8 << 4) | 0xc;
  *(unsigned int *)(temp_v1 + 0xa8) = param_7;
  software_interrupt(0x32);
  temp_v0 = DAT_004719e8;
  if (-1 < DAT_004719e8) {
    *param_5 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
