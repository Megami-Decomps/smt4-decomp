#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e7a8; /* 0x44e7a8 */


void FUN_00106dd4(unsigned char param_1)

{
  DAT_0044e7a8 = param_1;
  return;
}

} /* extern "C" */
