/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskThread_ThreadFunc` (_code @ 0x140664, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00140e78. */
/* Supplied declaration required: FUN_002bae7c. */
/* Supplied declaration required: FUN_002bb020. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_TaskManager_ExecuteTask. */
/* Supplied declaration required: nw_snd_internal_TaskManager_WaitTask. */


void nw_snd_internal_TaskThread_ThreadFunc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x14);
  while( 1 ) {
    if (temp_v0 != '\0') {
      return;
    }
    FUN_002bb020();
    nw_snd_internal_TaskManager_WaitTask();
    if (*(char *)(param_1 + 0x14) != '\0') break;
    nn_os_CriticalSection_Enter(param_1 + 8);
    FUN_002bb020();
    nw_snd_internal_TaskManager_ExecuteTask();
    nn_os_CriticalSection_Leave(param_1 + 8);
    FUN_002bae7c();
    FUN_00140e78();
    temp_v0 = *(char *)(param_1 + 0x14);
  }
  return;
}
