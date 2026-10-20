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
