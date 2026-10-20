#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_002effbc(void)

{
  if (*(int *)(DAT_00588fe8 + 0x518) == 2) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
