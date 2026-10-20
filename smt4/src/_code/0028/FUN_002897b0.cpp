#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */


void FUN_002897b0(unsigned char param_1)

{
  (*(unsigned char *)((unsigned char *)&DAT_0043e0b8 + 0x3)) = param_1;
  return;
}

} /* extern "C" */
