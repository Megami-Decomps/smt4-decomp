/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_GetNextTask` (_code @ 0x1b1a48, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c87c(void);

/* Supplied declaration required: FUN_0018c87c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int nw_snd_internal_TaskManager_GetNextTask(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + 0x2c;
  nn_os_CriticalSection_Enter(temp_v1);
  if (*(int *)(param_1 + param_2 * 0xc) != 0) {
    temp_v0 = *(int *)(param_1 + param_2 * 0xc + 4);
    if (param_3 != 0) {
      FUN_0018c87c();
    }
    nn_os_CriticalSection_Leave(temp_v1);
    return temp_v0 - 4;
  }
  nn_os_CriticalSection_Leave(temp_v1);
  return 0;
}

} /* extern "C" */
