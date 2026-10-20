#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e098; /* 0x44e098 */


void FUN_001082a0(unsigned char param_1)

{
  DAT_0044e098 = param_1;
  return;
}

} /* extern "C" */
