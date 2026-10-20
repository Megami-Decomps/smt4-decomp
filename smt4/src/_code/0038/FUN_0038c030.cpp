#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0042221c; /* 0x42221c */


void FUN_0038c030(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0042221c;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
