/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359170` (_code @ 0x359170, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00120104; /* 0x120104 */
extern int DAT_00473848; /* 0x473848 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00359170(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00120104;
  *(unsigned int *)(temp_v1 + 0x8c) = param_5;
  *(unsigned int *)(temp_v1 + 0x90) = param_6;
  *(unsigned int *)(temp_v1 + 0x94) = 0x20;
  *(int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0xa0) = param_1;
  *(unsigned int *)(temp_v1 + 0x9c) = (param_2 << 4) | 0xc;
  software_interrupt(0x32);
  temp_v0 = DAT_00473848;
  if (-1 < DAT_00473848) {
    *param_3 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
