#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_00376fb8(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned char *)(temp_v0 + 3) = param_1;
  return;
}

} /* extern "C" */
