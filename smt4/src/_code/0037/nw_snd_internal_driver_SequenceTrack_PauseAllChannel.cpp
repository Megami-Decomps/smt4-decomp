#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_Pause(unsigned int, unsigned int);

/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void nw_snd_internal_driver_SequenceTrack_PauseAllChannel(int param_1,bool param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if ((*(char *)(temp_v0 + 0xc6) != '\0') && ((*(char *)(temp_v0 + 0xc5) != '\0') != param_2)) {
      *(char *)(temp_v0 + 0xc5) = param_2;
      nw_snd_internal_driver_Voice_Pause(*(unsigned int *)(temp_v0 + 0x134),param_2);
    }
  }
  return;
}

} /* extern "C" */
