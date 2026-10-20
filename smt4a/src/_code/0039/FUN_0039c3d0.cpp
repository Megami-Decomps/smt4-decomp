#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_0039c3d0(void)

{
  return *(int *)(DAT_00588fe8 + 0x518) == 0x12;
}

} /* extern "C" */
