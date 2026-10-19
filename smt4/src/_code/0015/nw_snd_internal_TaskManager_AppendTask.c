/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_AppendTask` (_code @ 0x15bfa8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_LightEvent_ClearSignal(unsigned int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_internal_TaskManager_AppendTask(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 0x2c);
  nn_os_LightEvent_ClearSignal(param_2 + 0xc);
  *(unsigned char *)(param_2 + 0x14) = 1;
  temp_v0 = param_1 + param_3 * 0xc;
  nw_ut_internal_LinkListImpl_insert(temp_v0,temp_v0 + 4,param_2 + 4);
  nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(param_1 + 0x38,0);
  nn_os_CriticalSection_Leave(param_1 + 0x2c);
  return;
}
