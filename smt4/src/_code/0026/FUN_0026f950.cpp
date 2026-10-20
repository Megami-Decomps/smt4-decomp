#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


int FUN_0026f950(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return (int)*(short *)(temp_v0 + 0x20);
}

} /* extern "C" */
