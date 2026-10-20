#include "romwright_types.h"

extern "C" {


void nn_snd_CTR_InitializeWaveBuffer(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}

} /* extern "C" */
