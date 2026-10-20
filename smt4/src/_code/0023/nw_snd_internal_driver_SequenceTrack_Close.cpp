#include "romwright_types.h"

extern "C" {

int FUN_0023592c(void);
int nw_snd_internal_driver_Channel_FreeChannel(int);
int nw_snd_internal_driver_Channel_Release(int);

/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */


void nw_snd_internal_driver_SequenceTrack_Close(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0023592c();
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      nw_snd_internal_driver_Channel_Release(temp_v0);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    nw_snd_internal_driver_Channel_FreeChannel(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  return;
}

} /* extern "C" */
