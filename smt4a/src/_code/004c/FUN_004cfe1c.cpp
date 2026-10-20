#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001656a0(unsigned int);


unsigned int FUN_004cfe1c(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001656a0(6);
  if (param_1 != 0) {
    temp_v1 = FUN_001656a0(0xf);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
