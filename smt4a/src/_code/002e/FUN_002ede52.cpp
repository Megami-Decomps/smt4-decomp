#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002f34ac(void);


unsigned int FUN_002ede52(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002f34ac();
  return temp_v0 ^ 1;
}

} /* extern "C" */
