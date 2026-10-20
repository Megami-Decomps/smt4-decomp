#include "romwright_types.h"

extern "C" {

int FUN_0023592c(void);
int nw_snd_internal_driver_Channel_FreeChannel(int);
int nw_snd_internal_driver_Channel_Release(int);
int nw_snd_internal_driver_Channel_Stop(int);

/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Stop. */


void nw_snd_internal_driver_SequenceTrack_SetMute(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x48) = 0;
  }
  else if (param_2 == 1) {
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return;
      }
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        nw_snd_internal_driver_Channel_FreeChannel(temp_v0);
        nw_snd_internal_driver_Channel_Stop(temp_v0);
      }
    }
    else {
      FUN_0023592c();
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        if (*(char *)(temp_v0 + 0xc6) != '\0') {
          nw_snd_internal_driver_Channel_Release(temp_v0);
        }
      }
      for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
        nw_snd_internal_driver_Channel_FreeChannel(temp_v0);
      }
    }
    *(unsigned int *)(param_1 + 0xc4) = 0;
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  return;
}

} /* extern "C" */
