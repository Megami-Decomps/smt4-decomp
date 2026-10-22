/* NON_MATCHING: found outside every function: branched to by FUN_001d32a0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001d3704 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001d3704(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int in_r12;
  
  uVar1 = 0;
  uVar2 = in_r12 & 0xf;
  if (uVar2 == 9) {
    if ((in_r12 & 0x100000) == 0) {
      return 0x7ff8000000000000;
    }
    if ((in_r12 & 0x70000) != 0) {
      return CONCAT44(~(in_r12 << 0xf) << 1,8);
    }
    return 0x7ff8000030000000;
  }
  if (uVar2 == 10) {
    if ((in_r12 & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(0x7ff80000,uVar1);
  }
  if (uVar2 != 8) {
    return 0x7ff8000000000000;
  }
  if ((in_r12 & 0x40) != 0) {
    return 0;
  }
  if ((in_r12 & 0x10) != 0) {
    return 0;
  }
  return 0x7ff800007fc00000;
}
*/
#include "common.h"
