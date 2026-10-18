/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360834` (_code @ 0x360834, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
} param_5_stack;

extern unsigned char LAB_00110102; /* 0x110102 */
extern unsigned int DAT_00471bac; /* 0x471bac */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00360834(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned short param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00110102;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(unsigned short *)(temp_v1 + 0x8c) = param_4;
  *(unsigned short *)(temp_v1 + 0x90) = param_5;
  *(unsigned int *)(temp_v1 + 0x98) = param_1;
  *(unsigned int *)(temp_v1 + 0x94) = 0;
  software_interrupt(0x32);
  temp_v0 = DAT_00471bac;
  if ((DAT_00471bac & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
