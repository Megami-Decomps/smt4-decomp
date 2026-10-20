#include "romwright_types.h"

extern "C" {

extern int DAT_00434210; /* 0x434210 */


void FUN_002954dc(unsigned char param_1)

{
  if (DAT_00434210 != 0) {
    *(unsigned char *)(DAT_00434210 + 0x2f4) = param_1;
  }
  return;
}

} /* extern "C" */
