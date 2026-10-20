#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_AppendWaveBuffer(int, int, unsigned int, unsigned int);

/* Supplied declaration required: nw_snd_internal_driver_Voice_AppendWaveBuffer. */


void nw_snd_internal_driver_StreamChannel_AppendWaveBuffer
               (int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x30) != 0) {
    nw_snd_internal_driver_Voice_AppendWaveBuffer(*(int *)(param_1 + 0x30),0,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
