#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned int FUN_003a7b74(void)

{
  return *(unsigned int *)(DAT_00588fe8 + 0x654);
}

} /* extern "C" */
