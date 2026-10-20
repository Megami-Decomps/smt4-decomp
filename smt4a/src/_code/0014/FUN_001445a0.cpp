#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */


void FUN_001445a0(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x2c)) = param_1;
  return;
}

} /* extern "C" */
