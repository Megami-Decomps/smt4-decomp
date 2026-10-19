/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_Create` (_code @ 0x15ed7c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern unsigned int nw_snd_internal_FrameHeap_Create(int, unsigned int, unsigned int);


unsigned int nw_snd_SoundHeap_Create(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  temp_v0 = nw_snd_internal_FrameHeap_Create(param_1 + 0x10,param_2,param_3);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return temp_v0;
}
