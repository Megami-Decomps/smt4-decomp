#include "romwright_types.h"

extern "C" {

extern int FUN_002c08f0(void);


void FUN_002d85f8(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  *(unsigned char *)(temp_v0 + 0x16) = param_2;
  return;
}

} /* extern "C" */
