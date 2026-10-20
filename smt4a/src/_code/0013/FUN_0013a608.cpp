#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */


void FUN_0013a608(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005b3bf4 + 0x3)) = param_1;
  return;
}

} /* extern "C" */
