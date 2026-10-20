#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Channel_FreeChannel(int);

/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */


void nw_snd_internal_driver_SequenceTrack_FreeAllChannel(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    nw_snd_internal_driver_Channel_FreeChannel(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  return;
}

} /* extern "C" */
