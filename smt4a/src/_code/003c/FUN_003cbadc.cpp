#include "romwright_types.h"

extern "C" {

extern int FUN_001656a0(unsigned int);


unsigned char FUN_003cbadc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001656a0(0);
  return temp_v0 != 0;
}

} /* extern "C" */
