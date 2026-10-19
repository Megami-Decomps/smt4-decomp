/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fb54` (_code @ 0x10fb54, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e7b0; /* 0x44e7b0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


void FUN_0010fb54(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_0044e7b0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return;
}
