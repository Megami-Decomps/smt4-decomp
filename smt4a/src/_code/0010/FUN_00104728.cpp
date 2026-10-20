#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558620; /* 0x558620 */


void FUN_00104728(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&DAT_00558620;
  param_1[2] = param_2;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

} /* extern "C" */
