#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421adc; /* 0x421adc */


void FUN_0014c0c4(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00421adc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

} /* extern "C" */
