#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_002c7cb4(void)

{
  if (*(int *)(DAT_00588fe8 + 0x518) == 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
