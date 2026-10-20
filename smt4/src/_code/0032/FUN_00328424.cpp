#include "romwright_types.h"

extern "C" {

extern int FUN_002bfde4(unsigned int);


unsigned char FUN_00328424(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bfde4(0);
  return temp_v0 != 0;
}

} /* extern "C" */
