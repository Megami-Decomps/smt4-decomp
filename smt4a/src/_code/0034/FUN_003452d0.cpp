#include "romwright_types.h"

extern "C" {

extern int FUN_0026140c(void);


void FUN_003452d0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0026140c();
  temp_v0 = temp_v0 + (param_1 >> 3);
  *(unsigned char *)(temp_v0 + 0x55) = *(unsigned char *)(temp_v0 + 0x55) | (unsigned char)(1 << (param_1 & 7));
  return;
}

} /* extern "C" */
