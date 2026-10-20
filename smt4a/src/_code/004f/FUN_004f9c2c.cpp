#include "romwright_types.h"

extern "C" {

extern int FUN_003c5d8c(void);


unsigned char FUN_004f9c2c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003c5d8c();
  return temp_v0 != 0;
}

} /* extern "C" */
