#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_0028527c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned char *)(temp_v0 + 0x1c) = param_1 != 0;
  return;
}

} /* extern "C" */
