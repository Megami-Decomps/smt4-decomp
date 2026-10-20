/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003799bc` (_code @ 0x3799bc, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(unsigned int);

/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_003799bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_SoundHandle_DetachSound(*(unsigned int *)(param_1 + 0xc));
  return;
}

} /* extern "C" */
