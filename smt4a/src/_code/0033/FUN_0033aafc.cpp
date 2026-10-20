#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_0033aafc(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  if (param_1 < 0x40) {
    *(unsigned char *)(temp_v0 + param_1 + 0xc0c) = param_2;
  }
  return;
}

} /* extern "C" */
