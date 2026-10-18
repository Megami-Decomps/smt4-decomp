/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004300dc` (_code @ 0x4300dc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
} param_7_stack;

extern unsigned int DAT_005c1fc4; /* 0x5c1fc4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_004300dc(unsigned int param_1,unsigned char param_2,unsigned int param_3,int param_4,
                 unsigned int param_5,int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x70106;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned char *)(temp_v1 + 0x88) = param_2;
  *(int *)(temp_v1 + 0x8c) = param_4;
  *(int *)(temp_v1 + 0x90) = param_6;
  *(unsigned int *)(temp_v1 + 0x94) = (param_6 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0x98) = param_5;
  *(unsigned int *)(temp_v1 + 0x9c) = 0x20a;
  *(unsigned int *)(temp_v1 + 0xa0) = param_7;
  *(unsigned int *)(temp_v1 + 0xa4) = (param_4 << 4) | 0xe;
  *(unsigned int *)(temp_v1 + 0xa8) = param_3;
  software_interrupt(0x32);
  temp_v0 = DAT_005c1fc4;
  if ((DAT_005c1fc4 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
