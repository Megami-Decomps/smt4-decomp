/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_CriticalSection_TryEnter` (_code @ 0x2c33d0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
extern unsigned char nn_os_SimpleLock_TryLock(unsigned int);


unsigned char nn_os_CriticalSection_TryEnter(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (temp_v1 != *(int *)(param_1 + 4)) {
    temp_v0 = nn_os_SimpleLock_TryLock(param_1);
    if (!temp_v0) {
      return 0;
    }
    temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned int *)(param_1 + 4) = temp_v2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}
