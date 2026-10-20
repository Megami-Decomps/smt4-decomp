#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_00333dc8(unsigned char param_1)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x52a) = param_1;
  }
  return;
}

} /* extern "C" */
