#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558838; /* 0x558838 */


void FUN_00105ccc(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&DAT_00558838;
  param_1[1] = param_2;
  return;
}

} /* extern "C" */
