#include "romwright_types.h"

extern "C" {

extern int DAT_0043e0f8; /* 0x43e0f8 */


void FUN_001ecb54(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned int *)(DAT_0043e0f8 + 0x14) = 5;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  return;
}

} /* extern "C" */
