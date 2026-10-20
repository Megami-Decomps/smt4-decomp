#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);


unsigned char FUN_002e2b38(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x4d0);
  return temp_v0 != 0;
}

} /* extern "C" */
