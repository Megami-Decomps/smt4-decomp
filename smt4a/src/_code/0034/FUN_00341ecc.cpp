#include "romwright_types.h"

extern "C" {

extern int DAT_0057f4c4; /* 0x57f4c4 */


void FUN_00341ecc(unsigned char param_1)

{
  if (DAT_0057f4c4 != 0) {
    *(unsigned char *)(DAT_0057f4c4 + 0x5f6) = param_1;
  }
  return;
}

} /* extern "C" */
