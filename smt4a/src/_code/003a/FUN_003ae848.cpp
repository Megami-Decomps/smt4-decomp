#include "romwright_types.h"

extern "C" {

extern int FUN_0018206c(unsigned int, unsigned int);


unsigned char FUN_003ae848(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0018206c(0x24,0);
  return temp_v0 != 0;
}

} /* extern "C" */
