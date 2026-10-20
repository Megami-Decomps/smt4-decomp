#include "romwright_types.h"

extern "C" {

extern int FUN_002ae3c4(void);


unsigned char FUN_0022f1b8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002ae3c4();
  return temp_v0 == 10;
}

} /* extern "C" */
