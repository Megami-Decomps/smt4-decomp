/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035242c` (_code @ 0x35242c, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
} param_7_stack;

extern int DAT_00472a58; /* 0x472a58 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0035242c(unsigned int *param_1,unsigned int param_2,int param_3,unsigned char param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10030142;
  *(int *)(temp_v1 + 0x84) = param_3;
  *(unsigned char *)(temp_v1 + 0x88) = param_4;
  *(unsigned int *)(temp_v1 + 0x8c) = param_5;
  *(unsigned int *)(temp_v1 + 0x90) = param_6;
  *(unsigned int *)(temp_v1 + 0x94) = param_7;
  *(unsigned int *)(temp_v1 + 0x98) = (param_3 * 0x180) | 0xc;
  *(unsigned int *)(temp_v1 + 0x9c) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_00472a58;
  if (-1 < DAT_00472a58) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
