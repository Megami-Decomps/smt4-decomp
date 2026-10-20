#include "romwright_types.h"

extern "C" {

extern int DAT_0043dfc0; /* 0x43dfc0 */


void FUN_002d659c(unsigned char param_1)

{
  if (DAT_0043dfc0 != 0) {
    *(unsigned char *)(DAT_0043dfc0 + 0x5f2) = param_1;
  }
  return;
}

} /* extern "C" */
