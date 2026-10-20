#include "romwright_types.h"

extern "C" {


unsigned int FUN_004ec93c(unsigned int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *param_2;
  temp_v1 = 0;
  if ((temp_v0 & 0x80) == 0) {
    temp_v0 = temp_v0 & 0x1000;
    temp_v1 = temp_v0 == 0;
  }
  if (!temp_v1) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
