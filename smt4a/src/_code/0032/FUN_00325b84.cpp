#include "romwright_types.h"

extern "C" {

extern int DAT_00581280; /* 0x581280 */


void FUN_00325b84(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00581280;
  *(unsigned short *)(DAT_00581280 + 0xf42) = 0;
  *(unsigned short *)(temp_v0 + 0xf44) = 0;
  return;
}

} /* extern "C" */
