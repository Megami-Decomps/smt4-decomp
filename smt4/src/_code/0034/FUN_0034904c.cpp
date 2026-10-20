#include "romwright_types.h"

extern "C" {

extern int FUN_002c09bc(void);


unsigned char FUN_0034904c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  return (unsigned int)(*(int *)(temp_v0 + 0x1f458) - *(int *)(temp_v0 + 0x1f85c)) >= 900;
}

} /* extern "C" */
