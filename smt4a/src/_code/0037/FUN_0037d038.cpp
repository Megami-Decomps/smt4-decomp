#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005e2194; /* 0x5e2194 */


void FUN_0037d038(unsigned int param_1,unsigned int param_2)

{
  if (param_1 < 0x20) {
    *(unsigned int *)(&DAT_005e2194 + param_1 * 4) = param_2;
  }
  return;
}

} /* extern "C" */
