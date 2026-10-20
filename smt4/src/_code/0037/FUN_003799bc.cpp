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
