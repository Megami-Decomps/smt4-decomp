#include "romwright_types.h"

extern "C" {

extern int DAT_00447e58; /* 0x447e58 */


void FUN_002c8b60(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447e58;
  *(unsigned short *)(DAT_00447e58 + 0xe3e) = 0;
  *(unsigned short *)(temp_v0 + 0xe40) = 0;
  return;
}

} /* extern "C" */
