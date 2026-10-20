#include "romwright_types.h"

extern "C" {

extern int FUN_001b2d88(unsigned int, unsigned int, unsigned int);


unsigned char FUN_0046c458(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_001b2d88(param_1,0x36,param_2);
  return temp_v0 != 0;
}

} /* extern "C" */
