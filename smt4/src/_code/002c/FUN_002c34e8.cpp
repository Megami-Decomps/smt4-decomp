#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e0b0; /* 0x44e0b0 */


void FUN_002c34e8(unsigned char param_1)

{
  DAT_0044e0b0 = param_1;
  return;
}

} /* extern "C" */
