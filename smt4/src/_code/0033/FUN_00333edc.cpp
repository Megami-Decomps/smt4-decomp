#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


void FUN_00333edc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  *(unsigned short *)(temp_v0 + 0x2a) = *(unsigned short *)(temp_v0 + 0x1c);
  *(unsigned short *)(temp_v0 + 0x2c) = *(unsigned short *)(temp_v0 + 0x1e);
  return;
}

} /* extern "C" */
