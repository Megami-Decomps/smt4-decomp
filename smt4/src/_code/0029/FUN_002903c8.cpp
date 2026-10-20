#include "romwright_types.h"

extern "C" {

extern int FUN_002c09bc(void);


unsigned char FUN_002903c8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  return (unsigned int)(*(unsigned char *)(temp_v0 + 0x24b84) - 1) <= 2;
}

} /* extern "C" */
