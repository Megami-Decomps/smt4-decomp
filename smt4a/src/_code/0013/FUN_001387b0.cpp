#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b40a0; /* 0x5b40a0 */


void FUN_001387b0(unsigned int param_1)

{
  DAT_005b40a0 = param_1;
  return;
}

} /* extern "C" */
