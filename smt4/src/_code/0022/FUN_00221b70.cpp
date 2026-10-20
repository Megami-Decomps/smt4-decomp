#include "romwright_types.h"

extern "C" {

extern int DAT_00433278; /* 0x433278 */

extern int FUN_001ed250(int);


unsigned int FUN_00221b70(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00433278 - param_1) - 1 < 0) || (temp_v0 = FUN_001ed250(param_1), *(int *)(temp_v0 + 0xd8) <= 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
