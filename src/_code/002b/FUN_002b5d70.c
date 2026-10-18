/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5d70` (_code @ 0x2b5d70, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Supplied declaration required: FUN_00140d40. */
extern int FUN_00140dac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b06a0. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b74b6) */

void FUN_002b5d70(unsigned short *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_stack_00000010; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int unaff_r8;
  unsigned int in_stack_00000010;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uStack_3c = coproc_movefrom_User_R_Thread_and_Process_ID();
  *param_1 = (short)param_1;
  temp_v2 = ~in_stack_00000010 & (unaff_r8 >> 0xd);
  temp_v3 = ~in_stack_00000010 << 1;
  temp_v0 = param_4 >> 0xe;
  uStack_34 = in_stack_00000010;
  uStack_38 = param_3;
  uStack_30 = param_4;
  temp_v1 = FUN_00140dac(DAT_00433158,temp_v0);
  if (temp_v1 != 0) {
    FUN_00140d40(DAT_00433158,temp_v0,temp_v2,param_2,temp_v3);
    return;
  }
  if (temp_v0 >= 0x200) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iStack_4c = (temp_v0 / 0x10) * 0x10;
  iStack_48 = iStack_4c + 0x10;
  iStack_44 = (temp_v0 % 0x10) * 0x20;
  iStack_40 = iStack_44 + 0x20;
  FUN_002b06a0(2,0x25,0,temp_v2,param_2,temp_v3,&iStack_4c);
  return;
}
