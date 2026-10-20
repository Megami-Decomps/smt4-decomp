#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


void FUN_00167df8(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned char *)(temp_v0 + 0xb8) = param_2;
  return;
}

} /* extern "C" */
