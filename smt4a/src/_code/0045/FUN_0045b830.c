/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b830` (_code @ 0x45b830, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


unsigned int FUN_0045b830(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_SoundHandle_DetachSound();
  return param_1;
}
