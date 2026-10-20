#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


int FUN_00376f84(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return (int)*(short *)(temp_v0 + 0x20);
}

} /* extern "C" */
