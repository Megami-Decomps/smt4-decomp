#include "romwright_types.h"

extern "C" {

extern int DAT_0043ded0; /* 0x43ded0 */


unsigned int FUN_00322ad4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if (DAT_0043ded0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043ded0 + 0x30);
  }
  return temp_v0;
}

} /* extern "C" */
