#include "romwright_types.h"

extern "C" {

extern int DAT_0043e0f8; /* 0x43e0f8 */


void FUN_00211868(unsigned short param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned int *)(DAT_0043e0f8 + 0x14) = 2;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned char *)(temp_v0 + 0x11) = param_2;
  return;
}

} /* extern "C" */
