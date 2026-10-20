/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349500` (_code @ 0x349500, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(int);

/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


int FUN_00349500(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_SoundHandle_DetachSound(param_1 + 4);
  nw_snd_SoundHandle_DetachSound(param_1);
  return param_1;
}

} /* extern "C" */
