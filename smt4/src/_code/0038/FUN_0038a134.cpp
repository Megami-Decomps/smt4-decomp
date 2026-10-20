#include "romwright_types.h"

extern "C" {

extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);


void FUN_0038a134(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002a6d50(param_1,0x10,param_2);
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
  }
  return;
}

} /* extern "C" */
