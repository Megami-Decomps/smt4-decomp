#include "romwright_types.h"

extern "C" {

extern int FUN_001519ac(void);


unsigned char FUN_0040a4b4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001519ac();
  return *(char *)(temp_v0 + 0x10) != '\0';
}

} /* extern "C" */
