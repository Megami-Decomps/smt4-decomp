#include "romwright_types.h"

extern "C" {

extern int FUN_0023a5dc(int);


unsigned char FUN_00350e18(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023a5dc(param_1 + 0x158);
  return temp_v0 != 0;
}

} /* extern "C" */
