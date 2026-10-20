#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421c98; /* 0x421c98 */


void FUN_0037b7c4(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00421c98;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
