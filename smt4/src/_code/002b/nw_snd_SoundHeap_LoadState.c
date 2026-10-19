/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_LoadState` (_code @ 0x2bd20c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b4b94. */
extern unsigned int FUN_002bad74(unsigned int, unsigned int);
extern unsigned int FUN_002baed8(void);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_LoadState. */


void nw_snd_SoundHeap_LoadState(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  nw_snd_internal_FrameHeap_LoadState(param_1 + 0x10,param_2);
  temp_v0 = FUN_002baed8();
  temp_v1 = FUN_002bad74(temp_v0,1);
  FUN_002b4b94(temp_v0,temp_v1);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return;
}
