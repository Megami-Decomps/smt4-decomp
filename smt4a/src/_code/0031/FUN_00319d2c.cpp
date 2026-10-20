#include "romwright_types.h"

extern "C" {


unsigned char FUN_00319d2c(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = ((param_2 << 0xc) / 100) * 0x14;
  if (temp_v0 < 0x1000) {
    temp_v0 = 0x1000;
  }
  return (unsigned int)(param_1 << 0xc) <= temp_v0;
}

} /* extern "C" */
