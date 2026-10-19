/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_Destroy` (_code @ 0x121bb8, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b4b94. */
extern unsigned int FUN_002bad74(unsigned int, unsigned int);
extern unsigned int FUN_002baed8(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_FrameHeap_Clear. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_Destroy. */


void nw_snd_SoundHeap_Destroy(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 4;
  nn_os_CriticalSection_Enter(temp_v2);
  if (*(int *)(param_1 + 0x10) != 0) {
    nn_os_CriticalSection_Enter(param_1 + 4);
    nw_snd_internal_FrameHeap_Clear(param_1 + 0x10);
    nn_os_CriticalSection_Leave(param_1 + 4);
    temp_v0 = FUN_002baed8();
    temp_v1 = FUN_002bad74(temp_v0,1);
    FUN_002b4b94(temp_v0,temp_v1);
    nw_snd_internal_FrameHeap_Destroy(param_1 + 0x10);
    nn_os_CriticalSection_Leave(temp_v2);
    return;
  }
  nn_os_CriticalSection_Leave(temp_v2);
  return;
}
