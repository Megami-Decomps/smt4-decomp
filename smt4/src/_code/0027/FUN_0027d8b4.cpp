#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_0027d8b4(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned short *)(temp_v0 + 0x20) = param_1;
  return;
}

} /* extern "C" */
