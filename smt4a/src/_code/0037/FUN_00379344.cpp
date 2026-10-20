#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


void FUN_00379344(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x228) = param_1;
  *(unsigned char *)(temp_v0 + 0x22c) = 1;
  return;
}

} /* extern "C" */
