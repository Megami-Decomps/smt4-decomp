#include "romwright_types.h"

extern "C" {

int FUN_002358b4(int, unsigned int);
int FUN_0023592c(int);
int nw_snd_internal_driver_Channel_Release(int);

/* Supplied declaration required: FUN_002358b4. */
/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */


void nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0023592c(param_1);
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      if ((int)param_2 >= 0) {
        FUN_002358b4(temp_v0 + 0x90,param_2 & 0xff);
      }
      nw_snd_internal_driver_Channel_Release(temp_v0);
    }
  }
  return;
}

} /* extern "C" */
