#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */


void FUN_001445b0(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x8)) = param_1 & 0xffffff00;
  return;
}

} /* extern "C" */
