#include "romwright_types.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(void);

/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


unsigned int FUN_00376974(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_SoundHandle_DetachSound();
  return param_1;
}

} /* extern "C" */
