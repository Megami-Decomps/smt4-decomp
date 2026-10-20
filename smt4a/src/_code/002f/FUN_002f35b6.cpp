#include "romwright_types.h"

extern "C" {

extern int FUN_00307eb0(int, int);


unsigned int FUN_002f35b6(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_00307eb0(param_2,param_3);
  if ((temp_v0 == 0) &&
     ((temp_v0 = FUN_00307eb0(param_3,param_2), temp_v0 != 0 ||
      (temp_v0 = FUN_00307eb0(param_2 + 0x20,param_3 + 0x20), temp_v0 == 0)))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
