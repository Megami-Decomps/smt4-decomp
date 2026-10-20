#include "romwright_types.h"

extern "C" {

extern int FUN_0011d2a0(void);


unsigned char FUN_00110138(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0011d2a0();
  return temp_v0 == 1;
}

} /* extern "C" */
