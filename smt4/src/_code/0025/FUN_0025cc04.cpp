#include "romwright_types.h"

extern "C" {

extern int FUN_0028d320(unsigned int);
extern int FUN_002987d8(void);


unsigned int FUN_0025cc04(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002987d8();
  if ((temp_v0 == 0) || (temp_v0 = FUN_0028d320(param_2), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
