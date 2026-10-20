#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_0031f664(void)

{
  return *(int *)(DAT_00588fe8 + 0x518) != 0x15 && *(int *)(DAT_00588fe8 + 0x518) != 0x17;
}

} /* extern "C" */
