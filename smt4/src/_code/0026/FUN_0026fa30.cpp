#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_0026fa30(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned int *)(temp_v0 + 0x18) = param_1;
  return;
}

} /* extern "C" */
