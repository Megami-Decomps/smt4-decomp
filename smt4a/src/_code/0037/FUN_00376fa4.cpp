#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_00376fa4(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned short *)(temp_v0 + 0x20) = param_1;
  return;
}

} /* extern "C" */
