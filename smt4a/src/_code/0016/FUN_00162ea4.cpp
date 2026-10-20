#include "romwright_types.h"

extern "C" {

extern signed char DAT_0057f560; /* 0x57f560 */


int FUN_00162ea4(void)

{
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_0057f560 + 0x4)) < 0) {
    temp_v0 = (int)DAT_0057f560;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
