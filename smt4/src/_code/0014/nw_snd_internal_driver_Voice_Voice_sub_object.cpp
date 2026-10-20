#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_Voice_sub_object(unsigned int *param_1)

{
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  *(unsigned char *)((int)param_1 + 0x16) = 0;
  *(unsigned char *)((int)param_1 + 0x17) = 0;
  *(unsigned short *)(param_1 + 8) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
