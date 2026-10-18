/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148350` (_code @ 0x148350, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp20; /* 0x20: local_20 */
} param_5_stack;

extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_00148350(unsigned char param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4,
                unsigned char *param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0xf0100;
  *(unsigned char *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = param_2;
  *(unsigned char *)(temp_v1 + 0x8c) = param_3;
  *(unsigned int *)(temp_v1 + 0x90) = param_4;
  software_interrupt(0x32);
  temp_v0 = DAT_004656b0;
  if (-1 < DAT_004656b0) {
    *param_5 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
