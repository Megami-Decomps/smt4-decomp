#include "romwright_types.h"

extern "C" {

extern int FUN_002c09bc(void);


unsigned char FUN_002c0a84(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c09bc();
  return *(unsigned char *)(temp_v0 + 0x1ec51);
}

} /* extern "C" */
