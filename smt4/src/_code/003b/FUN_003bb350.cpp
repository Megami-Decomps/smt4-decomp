#include "romwright_types.h"

extern "C" {

extern int FUN_002a60b4(unsigned int, unsigned int);


unsigned char FUN_003bb350(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002a60b4(0x2a,0);
  return temp_v0 != 0;
}

} /* extern "C" */
