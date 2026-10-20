#include "romwright_types.h"

extern "C" {

extern int DAT_005702f8; /* 0x5702f8 */

extern int FUN_002a398c(int);


unsigned int FUN_0031b934(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_005702f8 - param_1) - 1 < 0) || (temp_v0 = FUN_002a398c(param_1), *(int *)(temp_v0 + 0xd8) <= 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
