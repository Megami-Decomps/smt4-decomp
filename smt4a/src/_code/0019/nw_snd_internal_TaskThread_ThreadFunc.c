/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskThread_ThreadFunc` (_code @ 0x1905d0, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00191260. */
/* Supplied declaration required: FUN_00191330. */
/* Supplied declaration required: FUN_001a5ae0. */
/* Supplied declaration required: FUN_001b1998. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nw_snd_internal_TaskManager_WaitTask. */


void nw_snd_internal_TaskThread_ThreadFunc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x14);
  while( 1 ) {
    if (temp_v0 != '\0') {
      return;
    }
    FUN_001b1998();
    nw_snd_internal_TaskManager_WaitTask();
    if (*(char *)(param_1 + 0x14) != '\0') break;
    nn_os_CriticalSection_Enter(param_1 + 8);
    FUN_001b1998();
    FUN_001a5ae0();
    nn_os_CriticalSection_Leave(param_1 + 8);
    FUN_00191330();
    FUN_00191260();
    temp_v0 = *(char *)(param_1 + 0x14);
  }
  return;
}
