#include "romwright_types.h"

extern "C" {

extern int DAT_0044dc20; /* 0x44dc20 */


unsigned int FUN_002b8660(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0044dc20 == 0) || (*(int *)(DAT_0044dc20 + 0x352c) == 0x14)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
