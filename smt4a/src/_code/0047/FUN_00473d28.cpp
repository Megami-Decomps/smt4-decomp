#include "romwright_types.h"

extern "C" {

extern int FUN_0047d754(int);


unsigned char FUN_00473d28(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0047d754(param_1 + 0x88);
  return temp_v0 != 0;
}

} /* extern "C" */
