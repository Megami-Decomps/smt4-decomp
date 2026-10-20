#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_002ad1d0(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_0044e380 + 0x10)) = param_1;
  return;
}

} /* extern "C" */
