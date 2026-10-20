#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetPitch(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (*(float *)(param_1 + 0x28) != in_s0) {
    *(float *)(param_1 + 0x28) = in_s0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 4;
  }
  return;
}

} /* extern "C" */
