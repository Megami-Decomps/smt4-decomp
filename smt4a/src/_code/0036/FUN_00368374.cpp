#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */


void FUN_00368374(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x1d0) = param_1;
  *(unsigned int *)(temp_v0 + 0x1d4) = 0;
  return;
}

} /* extern "C" */
