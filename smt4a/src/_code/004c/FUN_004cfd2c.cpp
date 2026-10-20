#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00164af0(unsigned int);


unsigned int FUN_004cfd2c(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00164af0(5);
  if (param_1 != 0) {
    temp_v1 = FUN_00164af0(0xe);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
