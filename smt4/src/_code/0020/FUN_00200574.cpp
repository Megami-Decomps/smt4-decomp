#include "romwright_types.h"

extern "C" {

extern int FUN_002a0d0c(void);


unsigned char FUN_00200574(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a0d0c();
  if (((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x51) & (1 << (param_1 & 7))) != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
