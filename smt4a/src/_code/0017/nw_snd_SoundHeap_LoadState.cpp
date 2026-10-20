/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHeap_LoadState` (_code @ 0x175e38, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001912cc(unsigned int, unsigned int);
int nw_snd_internal_FrameHeap_LoadState(int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_00175678(void);
extern unsigned int FUN_001911a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001912cc. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_FrameHeap_LoadState. */


void nw_snd_SoundHeap_LoadState(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  nw_snd_internal_FrameHeap_LoadState(param_1 + 0x10,param_2);
  temp_v0 = FUN_00175678();
  temp_v1 = FUN_001911a4(temp_v0,1);
  FUN_001912cc(temp_v0,temp_v1);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return;
}

} /* extern "C" */
