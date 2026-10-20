#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


void FUN_003881e0(unsigned char param_1)

{
  DAT_0057f110 = param_1;
  return;
}

} /* extern "C" */
