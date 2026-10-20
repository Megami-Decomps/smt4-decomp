#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_00371e18(void)

{
  return *(int *)(DAT_00588fe8 + 0x518) != 4;
}

} /* extern "C" */
