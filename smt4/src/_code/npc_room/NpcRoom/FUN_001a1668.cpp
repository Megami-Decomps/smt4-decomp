#include "romwright_types.h"

extern "C" {

extern int DAT_0044d198; /* 0x44d198 */


unsigned char FUN_001a1668(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044d198 != 0) {
    temp_v0 = *(int *)(DAT_0044d198 + 0xf0);
  }
  return DAT_0044d198 == 0 || temp_v0 == 7;
}

} /* extern "C" */
