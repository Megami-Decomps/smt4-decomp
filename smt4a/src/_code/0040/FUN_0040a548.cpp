#include "romwright_types.h"

extern "C" {

extern int FUN_001519ac(void);


void FUN_0040a548(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001519ac();
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  return;
}

} /* extern "C" */
