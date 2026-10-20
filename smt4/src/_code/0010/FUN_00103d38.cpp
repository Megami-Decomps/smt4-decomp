#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004651c0; /* 0x4651c0 */


void FUN_00103d38(unsigned int param_1)

{
  DAT_004651c0 = param_1;
  return;
}

} /* extern "C" */
