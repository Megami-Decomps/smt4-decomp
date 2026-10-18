/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c33d0` (_code @ 0x2c33d0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c33d0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r6;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (temp_v0 != *(int *)(param_1 + 4)) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x24) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
