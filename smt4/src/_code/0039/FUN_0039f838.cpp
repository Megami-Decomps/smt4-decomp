#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


void FUN_0039f838(unsigned int param_1,unsigned int param_2)

{
  *(unsigned int *)(DAT_0044cdf0 + 0x28) = param_2;
  return;
}

} /* extern "C" */
