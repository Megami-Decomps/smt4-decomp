/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundPlayer_detail_RemoveSound` (_code @ 0x379920, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_erase_2B743C(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void nw_snd_SoundPlayer_detail_RemoveSound(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 0xc,param_2 + 0xe4);
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1,param_2 + 0xdc);
  *(unsigned int *)(param_2 + 0x10) = 0;
  return;
}

} /* extern "C" */
