#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Channel_FreeChannel(int param_1)

{
  if (param_1 != 0) {
    *(unsigned int *)(param_1 + 300) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
  }
  return;
}

} /* extern "C" */
