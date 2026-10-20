#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


unsigned short FUN_002903f0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return *(unsigned short *)(temp_v0 + 0x840);
}

} /* extern "C" */
