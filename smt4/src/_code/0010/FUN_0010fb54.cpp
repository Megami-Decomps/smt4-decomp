/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fb54` (_code @ 0x10fb54, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);

extern unsigned char DAT_0044e7ac; /* 0x44e7ac */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


void FUN_0010fb54(void)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&DAT_0044e7ac + 0x4)) = coproc_movefrom_User_R_Thread_and_Process_ID();
  return;
}

} /* extern "C" */
