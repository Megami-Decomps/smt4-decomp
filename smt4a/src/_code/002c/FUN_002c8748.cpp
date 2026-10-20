#include "romwright_types.h"

extern "C" {

extern int DAT_0057f28c; /* 0x57f28c */


unsigned int FUN_002c8748(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0057f28c + 4);
  if ((temp_v0 == 0x11 || temp_v0 == 0x12) || (temp_v0 == 0x13)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
