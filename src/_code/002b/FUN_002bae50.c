/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bae50` (_code @ 0x2bae50, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Supplied declaration required: FUN_002b90b0. */
/* Supplied declaration required: FUN_002c52f8. */


int FUN_002bae50(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_3;
  coproc_movefrom_User_R_Thread_and_Process_ID();
  temp_v0 = (int)(param_1 + 1) >> 2;
  if ((*(unsigned int *)(temp_v0 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(temp_v0 + 4) & 1) != 0) {
      FUN_002c52f8();
    }
    FUN_002b90b0(*(unsigned int *)(temp_v0 + 4) & 0xfffffffe);
    *(unsigned int *)(temp_v0 + 4) = 0;
  }
  return temp_v0;
}
