#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00465040; /* 0x465040 */


void FUN_0025b730(unsigned char param_1)

{
  DAT_00465040 = param_1;
  return;
}

} /* extern "C" */
