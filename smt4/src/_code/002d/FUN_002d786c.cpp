#include "romwright_types.h"

extern "C" {

extern int FUN_002a0d0c(void);


void FUN_002d786c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a0d0c();
  temp_v0 = temp_v0 + (param_1 >> 3);
  *(unsigned char *)(temp_v0 + 0x51) = *(unsigned char *)(temp_v0 + 0x51) | (unsigned char)(1 << (param_1 & 7));
  return;
}

} /* extern "C" */
