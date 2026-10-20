#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00164af0(unsigned int);


unsigned int FUN_004cfdbc(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00164af0(4);
  if (param_1 != 0) {
    temp_v1 = FUN_00164af0(0xd);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
