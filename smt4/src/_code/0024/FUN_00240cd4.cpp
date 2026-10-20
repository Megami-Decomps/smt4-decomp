#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


int FUN_00240cd4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return temp_v0 + param_1 * 4 + 0x200;
}

} /* extern "C" */
