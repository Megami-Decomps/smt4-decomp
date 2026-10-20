#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


unsigned char FUN_0029022c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return *(short *)(temp_v0 + 0x840) != 0;
}

} /* extern "C" */
