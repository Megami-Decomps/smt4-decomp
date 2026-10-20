#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_003adc40(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(char *)(temp_v0 + 0x1c) == '\x01';
}

} /* extern "C" */
