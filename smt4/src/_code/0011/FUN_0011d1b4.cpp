#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


void FUN_0011d1b4(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_0044e380 + 0x18)) = param_1;
  return;
}

} /* extern "C" */
