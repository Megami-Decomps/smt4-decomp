/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_SaveState` (_code @ 0x121c30, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern unsigned int nw_snd_internal_FrameHeap_SaveState(int);


unsigned int nw_snd_SoundHeap_SaveState(int param_1)

{
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  temp_v0 = nw_snd_internal_FrameHeap_SaveState(param_1 + 0x10);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return temp_v0;
}
