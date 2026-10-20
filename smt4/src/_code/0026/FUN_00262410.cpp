#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


void FUN_00262410(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  *(unsigned short *)(temp_v0 + 0x72) = *(unsigned short *)(temp_v0 + 0x72) & ~param_1;
  return;
}

} /* extern "C" */
