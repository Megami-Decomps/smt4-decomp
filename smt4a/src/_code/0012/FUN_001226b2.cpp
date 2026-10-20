/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001226b2` (_code @ 0x1226b2, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_Wait(unsigned int);
int onlineMutexLockIfNeeded(...);
int onlineMutexUnlockIfNeeded(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: onlineMutexLockIfNeeded. */
/* Supplied declaration required: onlineMutexUnlockIfNeeded. */


unsigned int FUN_001226b2(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  onlineMutexLockIfNeeded();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  onlineMutexUnlockIfNeeded(param_1 + 8);
  onlineMutexUnlockIfNeeded(param_2);
  if (param_3 == -1) {
    nn_os_LightEvent_Wait(*(unsigned int *)(param_1 + 4));
  }
  onlineMutexLockIfNeeded(param_2);
  onlineMutexLockIfNeeded();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - 1;
  onlineMutexUnlockIfNeeded(param_1 + 8);
  return 1;
}

} /* extern "C" */
