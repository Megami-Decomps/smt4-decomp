#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned char FUN_002df80c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(unsigned char *)(temp_v0 + param_1 + 0xc18);
}

} /* extern "C" */
