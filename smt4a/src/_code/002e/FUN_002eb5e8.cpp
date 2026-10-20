#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559344; /* 0x559344 */


void FUN_002eb5e8(unsigned int *param_1,unsigned short param_2)

{
  *param_1 = (unsigned int)&DAT_00559344;
  *(unsigned short *)(param_1 + 1) = param_2;
  return;
}

} /* extern "C" */
