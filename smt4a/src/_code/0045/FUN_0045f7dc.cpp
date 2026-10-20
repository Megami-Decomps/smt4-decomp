/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f7dc` (_code @ 0x45f7dc, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(unsigned int);

/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_0045f7dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_SoundHandle_DetachSound(*(unsigned int *)(param_1 + 0xc));
  return;
}

} /* extern "C" */
