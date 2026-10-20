#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


unsigned int FUN_00295bd0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0043e128 + 8);
  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 1 || temp_v0 == 2)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
