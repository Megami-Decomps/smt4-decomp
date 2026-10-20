#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004650e0; /* 0x4650e0 */


void FUN_00104e44(unsigned char param_1)

{
  DAT_004650e0 = param_1;
  return;
}

} /* extern "C" */
