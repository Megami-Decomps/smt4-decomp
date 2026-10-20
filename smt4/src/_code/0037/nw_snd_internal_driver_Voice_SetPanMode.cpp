#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetPanMode(int param_1,unsigned char param_2)

{
  if (*(unsigned char *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = param_2;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}

} /* extern "C" */
