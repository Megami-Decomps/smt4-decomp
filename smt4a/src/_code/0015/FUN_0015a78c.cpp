#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b4474; /* 0x5b4474 */


void FUN_0015a78c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_005b4474 + 0x1)) = param_1;
  return;
}

} /* extern "C" */
