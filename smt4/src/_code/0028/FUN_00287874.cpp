#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


unsigned int FUN_00287874(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return (*(unsigned char *)(temp_v0 + param_1 * 4 + 0x202) & 2) >> 1;
}

} /* extern "C" */
