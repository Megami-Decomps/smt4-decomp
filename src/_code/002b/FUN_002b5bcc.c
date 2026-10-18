/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5bcc` (_code @ 0x2b5bcc, 0x3f bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
} param_5_stack;

extern unsigned char LAB_001100c2; /* 0x1100c2 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b5bcc(unsigned int param_1,unsigned int param_2,int param_3,unsigned short param_4,
                 unsigned short param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v0 + 0x80) = &LAB_001100c2;
  *(int *)(temp_v0 + 0x84) = param_3;
  *(unsigned short *)(temp_v0 + 0x88) = param_4;
  *(unsigned short *)(temp_v0 + 0x8c) = param_5;
  *(unsigned int *)(temp_v0 + 0x94) = param_2;
  *(unsigned int *)(temp_v0 + 0x90) = (param_3 << 4) | 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
