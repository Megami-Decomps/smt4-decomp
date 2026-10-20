#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002b8cec(unsigned int);


unsigned int FUN_003c2ae4(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b8cec(4);
  if (param_1 != 0) {
    temp_v1 = FUN_002b8cec(0xd);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
