#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c1484; /* 0x5c1484 */


void FUN_0042fbc4(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005c1484 + 0x4)) = param_1;
  return;
}

} /* extern "C" */
