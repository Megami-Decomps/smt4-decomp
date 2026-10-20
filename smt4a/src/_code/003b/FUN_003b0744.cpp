#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_003b0744(void)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x24a9) = 1;
  }
  return;
}

} /* extern "C" */
