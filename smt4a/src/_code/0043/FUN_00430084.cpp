/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430084` (_code @ 0x430084, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00110104; /* 0x110104 */
extern unsigned int g_nnCecdHandle; /* 0x5c1fc4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00430084(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00110104;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_4;
  *(unsigned int *)(temp_v1 + 0x90) = param_5;
  *(unsigned int *)(temp_v1 + 0x94) = 0x20;
  *(unsigned int *)(temp_v1 + 0xa0) = param_1;
  *(unsigned int *)(temp_v1 + 0x9c) = (param_2 << 4) | 10;
  software_interrupt(0x32);
  temp_v0 = g_nnCecdHandle;
  if ((g_nnCecdHandle & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
