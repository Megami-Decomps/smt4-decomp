/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb284` (_code @ 0x2bb284, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Supplied declaration required: FUN_002b90b0. */
/* Supplied declaration required: FUN_002c52f8. */


int FUN_002bb284(int param_1)

{
/* irregular: 3 native warning(s); review required */
  coproc_movefrom_User_R_Thread_and_Process_ID();
  param_1 = param_1 >> 2;
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
      FUN_002c52f8();
    }
    FUN_002b90b0(*(unsigned int *)(param_1 + 4) & 0xfffffffe);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return param_1;
}
