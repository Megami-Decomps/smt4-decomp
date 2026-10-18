/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SoundThread_SetProfileBuffer` (_code @ 0x130ef4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void nw_snd_internal_driver_SoundThread_SetProfileBuffer(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 0x1c4;
  nn_os_CriticalSection_Enter(temp_v0);
  if (*(char *)(param_1 + 0x1f6) != '\0' && param_2 != 0) {
    *(unsigned int *)(param_1 + 0x1c0) = 0;
    *(int *)(param_1 + 0x1b8) = param_2;
    *(unsigned int *)(param_1 + 0x1bc) = param_3;
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  nn_os_CriticalSection_Leave(temp_v0);
  return;
}
