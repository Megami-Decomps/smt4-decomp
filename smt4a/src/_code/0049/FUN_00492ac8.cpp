#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


void FUN_00492ac8(unsigned int param_1,unsigned int param_2)

{
  *(unsigned int *)(DAT_00587f28 + 0x2c) = param_2;
  return;
}

} /* extern "C" */
