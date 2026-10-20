#include "romwright_types.h"

extern "C" {

extern int FUN_0042348c(int);


unsigned char FUN_00425430(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0042348c(param_1 + 0x158);
  return temp_v0 != 0;
}

} /* extern "C" */
