#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned char FUN_00316ce4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(char *)(temp_v0 + 0x1c) == '\x01';
}

} /* extern "C" */
