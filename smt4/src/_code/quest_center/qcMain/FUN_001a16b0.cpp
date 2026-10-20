#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044db88; /* 0x44db88 */


void FUN_001a16b0(unsigned char param_1)

{
  DAT_0044db88 = param_1;
  return;
}

} /* extern "C" */
