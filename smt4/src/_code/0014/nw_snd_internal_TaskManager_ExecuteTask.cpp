/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_ExecuteTask` (_code @ 0x14c0f4, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4040(int *);
int nw_snd_internal_TaskManager_GetNextTask(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4040. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_TaskManager_GetNextTask. */


void nw_snd_internal_TaskManager_ExecuteTask(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  do {
    temp_v0 = param_1 + 0x2c;
    nn_os_CriticalSection_Enter(temp_v0);
    piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,2,1);
    if ((piVar1 != (int *)0x0) ||
       (piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,1), piVar1 != (int *)0x0)) {
      nn_os_CriticalSection_Leave(temp_v0);
    }
    else {
      piVar1 = (int *)nw_snd_internal_TaskManager_GetNextTask(param_1,0,1);
      if (piVar1 == (int *)0x0) {
        nn_os_CriticalSection_Leave(temp_v0);
        return;
      }
      nn_os_CriticalSection_Leave(temp_v0);
    }
    *(int **)(param_1 + 0x24) = piVar1;
    (**(romwright_code **)(*piVar1 + 8))(piVar1);
    *(unsigned char *)(piVar1 + 5) = 3;
    FUN_002c4040(piVar1 + 3);
    *(unsigned int *)(param_1 + 0x24) = 0;
  } while( 1 );
}

} /* extern "C" */
