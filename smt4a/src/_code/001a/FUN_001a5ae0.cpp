/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5ae0` (_code @ 0x1a5ae0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_Signal(int *);
int nw_snd_internal_TaskManager_GetNextTask(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: nn_os_LightEvent_Signal. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_TaskManager_GetNextTask. */


void FUN_001a5ae0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1 + 0x2c;
  nn_os_CriticalSection_Enter(temp_v0);
  piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,2,1);
  if (((piVar1 == (int *)0x0) &&
      (piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,1), piVar1 == (int *)0x0)) &&
     (piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,0,1), piVar1 == (int *)0x0)) {
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  nn_os_CriticalSection_Leave(temp_v0);
  *(int **)(param_1 + 0x24) = piVar1;
  (**(romwright_code **)(*piVar1 + 8))(piVar1);
  *(unsigned char *)(piVar1 + 5) = 3;
  nn_os_LightEvent_Signal(piVar1 + 3);
  *(unsigned int *)(param_1 + 0x24) = 0;
  return;
}

} /* extern "C" */
