#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetPanCurve(int param_1,unsigned int param_2)

{
  if (*(unsigned char *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = (char)param_2;
    unsigned int t = *(unsigned short *)(param_1 + 0x20);
    *(unsigned short *)(param_1 + 0x20) = t | 8;
  }
  return;
}

} /* extern "C" */
