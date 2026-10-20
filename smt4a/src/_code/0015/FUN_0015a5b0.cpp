#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b4474; /* 0x5b4474 */


void FUN_0015a5b0(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b4474 + 0x8)) = param_1;
  return;
}

} /* extern "C" */
