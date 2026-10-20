#include "romwright_types.h"

extern "C" {

extern int FUN_002b6b20(void);


void FUN_0028ee90(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6b20();
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) | 1;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}

} /* extern "C" */
