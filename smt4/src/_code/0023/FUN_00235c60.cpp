#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421d18; /* 0x421d18 */


void FUN_00235c60(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00421d18;
  return;
}

} /* extern "C" */
