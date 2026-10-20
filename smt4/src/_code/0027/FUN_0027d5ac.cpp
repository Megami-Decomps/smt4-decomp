#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_0027d5ac(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned char *)(temp_v0 + 3) = param_1;
  return;
}

} /* extern "C" */
