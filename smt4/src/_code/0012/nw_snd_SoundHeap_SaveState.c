/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_SaveState` (_code @ 0x121c30, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
extern unsigned int nw_snd_internal_FrameHeap_SaveState(int);


unsigned int nw_snd_SoundHeap_SaveState(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  temp_v0 = nw_snd_internal_FrameHeap_SaveState(param_1 + 0x10);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return temp_v0;
}
