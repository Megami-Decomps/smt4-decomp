#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned int FUN_0037de4c(void)

{
  unsigned int temp_v0;
  
  if ((DAT_00588fe8 == 0) ||
     (*(int *)(DAT_00588fe8 + 0x518) != 8 && *(int *)(DAT_00588fe8 + 0x518) != 10)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
