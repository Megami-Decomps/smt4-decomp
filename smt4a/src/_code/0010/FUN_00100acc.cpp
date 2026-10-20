#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055cbf8; /* 0x55cbf8 */


void FUN_00100acc(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055cbf8;
  return;
}

} /* extern "C" */
