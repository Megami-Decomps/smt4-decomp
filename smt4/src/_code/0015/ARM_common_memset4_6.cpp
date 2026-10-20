#include "romwright_types.h"

extern "C" {


void ARM_common_memset4_6(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = (param_2 & 0xff) | ((param_2 & 0xff) << 8);
  temp_v0 = temp_v0 | (temp_v0 << 0x10);
  *param_1 = temp_v0;
  *(short *)(param_1 + 1) = (short)temp_v0;
  return;
}

} /* extern "C" */
