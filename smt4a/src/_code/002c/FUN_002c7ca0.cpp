#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned char FUN_002c7ca0(void)

{
  return *(unsigned char *)(DAT_00588fe8 + 0x514);
}

} /* extern "C" */
