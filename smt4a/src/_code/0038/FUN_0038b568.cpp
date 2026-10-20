#include "romwright_types.h"

extern "C" {

extern int FUN_002adc20(void);


unsigned char FUN_0038b568(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc20();
  return temp_v0 != 0;
}

} /* extern "C" */
