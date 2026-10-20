#include "romwright_types.h"

extern "C" {

extern int FUN_0026140c(void);


unsigned char FUN_002c0914(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0026140c();
  if (((unsigned int)*(unsigned char *)(temp_v0 + (param_1 >> 3) + 0x55) & (1 << (param_1 & 7))) != 0) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
