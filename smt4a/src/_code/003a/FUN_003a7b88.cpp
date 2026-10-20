#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_003a7b88(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588fe8 != 0) {
    temp_v0 = *(int *)(DAT_00588fe8 + 0x518);
  }
  return DAT_00588fe8 == 0 || temp_v0 == 0;
}

} /* extern "C" */
