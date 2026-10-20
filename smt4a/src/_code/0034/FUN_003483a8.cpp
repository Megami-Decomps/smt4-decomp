#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


void FUN_003483a8(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned char *)(temp_v0 + 0x16) = param_2;
  return;
}

} /* extern "C" */
