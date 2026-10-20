#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c724; /* 0x55c724 */


void FUN_00474b18(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0055c724;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
