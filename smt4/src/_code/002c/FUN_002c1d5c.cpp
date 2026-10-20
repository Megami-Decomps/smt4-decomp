#include "romwright_types.h"

extern "C" {

extern signed char DAT_0043e0b8; /* 0x43e0b8 */


int FUN_002c1d5c(void)

{
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_0043e0b8 + 0x4)) < 0) {
    temp_v0 = (int)DAT_0043e0b8;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
