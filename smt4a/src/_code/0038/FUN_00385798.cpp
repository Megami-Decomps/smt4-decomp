#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


void FUN_00385798(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x238) = param_1;
  *(unsigned char *)(temp_v0 + 0x23c) = 1;
  return;
}

} /* extern "C" */
