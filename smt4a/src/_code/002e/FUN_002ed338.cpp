#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559334; /* 0x559334 */


void FUN_002ed338(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&DAT_00559334;
  param_1[1] = param_2;
  return;
}

} /* extern "C" */
