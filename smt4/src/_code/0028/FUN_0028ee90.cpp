#include "romwright_types.h"

extern "C" {

extern int gameGetOptions(void);


void FUN_0028ee90(void)

{
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) | 1;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}

} /* extern "C" */
