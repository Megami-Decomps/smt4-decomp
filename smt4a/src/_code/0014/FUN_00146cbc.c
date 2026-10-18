/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146cbc` (_code @ 0x146cbc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005894d4; /* 0x5894d4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


void FUN_00146cbc(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_005894d4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return;
}
