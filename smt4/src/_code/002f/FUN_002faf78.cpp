#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned int FUN_002faf78(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(unsigned int *)(temp_v0 + 0x18);
}

} /* extern "C" */
