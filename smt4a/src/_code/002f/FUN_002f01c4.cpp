#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_002f01c4(unsigned short param_1)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned short *)(DAT_00588fe8 + 0x598) = param_1;
  }
  return;
}

} /* extern "C" */
