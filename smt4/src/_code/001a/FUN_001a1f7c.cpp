#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e310; /* 0x43e310 */


void FUN_001a1f7c(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0043e310 + 0x3)) = param_1;
  return;
}

} /* extern "C" */
