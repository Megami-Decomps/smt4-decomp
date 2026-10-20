#include "romwright_types.h"

extern "C" {

extern int DAT_005710dc; /* 0x5710dc */


void FUN_0035fd38(unsigned char param_1)

{
  if (DAT_005710dc != 0) {
    *(unsigned char *)(DAT_005710dc + 0x2f4) = param_1;
  }
  return;
}

} /* extern "C" */
