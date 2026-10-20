#include "romwright_types.h"

extern "C" {

extern int FUN_003f86c8(unsigned int);


unsigned char FUN_003f0f40(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003f86c8(0x4d);
  return temp_v0 != 0;
}

} /* extern "C" */
